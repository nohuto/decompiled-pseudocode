/*
 * XREFs of MmEnableProcessSvm @ 0x1402BC890
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14033C5F0 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060AA0 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072C10 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x140072E50 (MiUnlockWorkingSetExclusive.c)
 */

void MmEnableProcessSvm()
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v2; // al
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9

  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v2 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *((_BYTE *)&Process[1].SecureState.Flags + 3) |= 2u;
  LOBYTE(v3) = v2;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v3, v4, v5);
}
