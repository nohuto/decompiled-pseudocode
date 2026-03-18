/*
 * XREFs of MiCreateForkWsles @ 0x1402E38A8
 * Callers:
 *     MiCloneProcessAddressSpace @ 0x14089AED4 (MiCloneProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 *     MiCreateForkWsle @ 0x1402E37A0 (MiCreateForkWsle.c)
 */

void MiCreateForkWsles()
{
  unsigned __int16 *v0; // rbp
  unsigned __int64 v1; // r14
  __int64 v2; // rcx
  unsigned __int64 v3; // rsi
  LONG *SharedVm; // rbx
  KIRQL v5; // al
  KIRQL v6; // di
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9

  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[6];
  v1 = 0xFFFFF68000000000uLL;
  v2 = 3LL;
  v3 = 0xFFFFF6BFFFFFFFF8uLL;
  do
  {
    v1 = ((v1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v2;
  }
  while ( v2 );
  SharedVm = MiGetSharedVm((__int64)v0);
  v5 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v5;
  MiCreateForkWsle((__int64)v0, v5, v1, v3, 3);
  LOBYTE(v7) = v6;
  MiUnlockWorkingSetExclusive((__int64)v0, v7, v8, v9);
}
