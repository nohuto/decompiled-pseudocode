/*
 * XREFs of MiClearCommitReleaseState @ 0x1402BAE94
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14060B9E8 (MmCleanProcessAddressSpace.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 */

void __fastcall MiClearCommitReleaseState(__int64 a1)
{
  LONG *SharedVm; // rbx
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  SharedVm = MiGetSharedVm(a1);
  v3 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *(_BYTE *)(a1 + 187) &= 0x9Fu;
  LOBYTE(v4) = v3;
  MiUnlockWorkingSetExclusive(a1, v4, v5, v6);
}
