/*
 * XREFs of MiRemoveSecureEntry @ 0x1400860B0
 * Callers:
 *     MmUnsecureVirtualMemory @ 0x1405F4430 (MmUnsecureVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     MiSetVadFlags @ 0x1400879D0 (MiSetVadFlags.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     MiUnsecureVirtualMemoryAgainstWrites @ 0x1406AF194 (MiUnsecureVirtualMemoryAgainstWrites.c)
 */

void __fastcall MiRemoveSecureEntry(ULONG_PTR BugCheckParameter2, __int64 *BugCheckParameter3)
{
  __int64 **v2; // r14
  unsigned int v5; // edi
  int v6; // ebp
  _KPROCESS *Process; // r15
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 *i; // rdx

  v2 = (__int64 **)(BugCheckParameter2 + 56);
  v5 = 0;
  v6 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = *v2; i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 && v5 <= 1 )
      ++v5;
    if ( i == BugCheckParameter3 )
    {
      v6 = 1;
      *v2 = (__int64 *)*i;
    }
    if ( v5 > 1 && v6 == 1 )
      break;
    v2 = (__int64 **)i;
  }
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v9, v10, v11);
  if ( !v6 )
    KeBugCheckEx(0x1Au, 0x15001uLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  if ( (BugCheckParameter3[1] & 0x10) != 0 )
    MiUnsecureVirtualMemoryAgainstWrites(BugCheckParameter2, BugCheckParameter3[1], BugCheckParameter3[2]);
  if ( v5 == 1 )
    MiSetVadFlags(BugCheckParameter2, 1LL, 0LL);
  ExFreePoolWithTag(BugCheckParameter3, 0);
}
