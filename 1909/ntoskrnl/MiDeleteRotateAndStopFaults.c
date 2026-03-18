/*
 * XREFs of MiDeleteRotateAndStopFaults @ 0x1400F74E8
 * Callers:
 *     MmRotatePhysicalView @ 0x1406A4CA0 (MmRotatePhysicalView.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140060B40 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x140072E80 (MiGetSharedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x1400730C0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVirtualAddresses @ 0x1400E7FBC (MiDeleteVirtualAddresses.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

signed __int64 __fastcall MiDeleteRotateAndStopFaults(int a1, int a2, __int64 *a3)
{
  _KPROCESS *Process; // rdi
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE v13[48]; // [rsp+20h] [rbp-48h] BYREF

  memset(v13, 0, sizeof(v13));
  Process = KeGetCurrentThread()->ApcState.Process;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[6]);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v9 = Process[1].Affinity.Bitmap[9];
  *a3 = v9;
  LOBYTE(v9) = v8;
  Process[1].Affinity.Bitmap[9] = (unsigned __int64)a3;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[6], v9, v10, v11);
  return MiDeleteVirtualAddresses(a1, a2, 0, (__int64)v13);
}
