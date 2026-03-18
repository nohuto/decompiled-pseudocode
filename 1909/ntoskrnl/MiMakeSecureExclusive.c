/*
 * XREFs of MiMakeSecureExclusive @ 0x140159818
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x14071AC58 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 */

__int64 __fastcall MiMakeSecureExclusive(__int64 a1)
{
  unsigned int v2; // esi
  __int64 *v3; // rbp
  _KPROCESS *Process; // r14
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 *i; // rcx

  v2 = 0;
  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  for ( i = *(__int64 **)(a1 + 56); i; i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 16) == 2 )
    {
      if ( v3 )
        goto LABEL_8;
      v3 = i;
    }
  }
  *((_DWORD *)v3 + 2) |= 0x20u;
  v2 = 1;
LABEL_8:
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v7, v8, v9);
  return v2;
}
