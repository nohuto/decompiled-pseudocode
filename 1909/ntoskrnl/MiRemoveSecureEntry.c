/*
 * XREFs of MiRemoveSecureEntry @ 0x140073C60
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x14060C520 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiSetVadFlags @ 0x140072950 (MiSetVadFlags.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     KeBugCheckEx @ 0x1401C46A0 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406CFE58 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v3; // ebx
  int v4; // r15d
  _KPROCESS *Process; // rsi
  LONG *p_LockNV; // rbp
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *i; // rdx

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v3 = 0;
  v4 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].SecureState.SecureHandle & 7) == 2 )
    p_LockNV = &dword_140466F00;
  else
    p_LockNV = &Process[2].Header.LockNV;
  v9 = ExAcquireSpinLockExclusive(p_LockNV);
  p_LockNV[1] = 0;
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 && v3 <= 1 )
      ++v3;
    if ( i == BugCheckParameter3 )
    {
      v4 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v3 > 1 && v4 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v9, v10, v11);
  if ( !v4 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v3 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1, 0);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
