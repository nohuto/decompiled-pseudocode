/*
 * XREFs of MmEnableProcessSvm @ 0x1402A5400
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14031D260 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x140063CE0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D30 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC4C0 (ExAcquireSpinLockExclusive.c)
 */

void MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  __int64 v4; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  BYTE3(Process[2].Header.WaitListHead.Flink) |= 2u;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v2, v3, v4);
}
