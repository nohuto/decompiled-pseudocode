/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x14013A1F0
 * Callers:
 *     MmRotatePhysicalView @ 0x14066CAD0 (MmRotatePhysicalView.c)
 * Callees:
 *     MiDeleteVirtualAddresses @ 0x140026134 (MiDeleteVirtualAddresses.c)
 *     MiUnlockWorkingSetExclusive @ 0x140063CD0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x140064D20 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x1400BC420 (ExAcquireSpinLockExclusive.c)
 *     memset @ 0x1401D1980 (memset.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, _QWORD *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // r8
  __int64 v10; // r9
  _BYTE v12[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v12, 0, 0x28uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  *a3 = Process[1].Affinity.Bitmap[9];
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v9, v10);
  return MiDeleteVirtualAddresses(a1, a2, 0, (__int64)v12);
}
