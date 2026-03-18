/*
 * XREFs of TtmpSessionPowerControl @ 0x1408BE6A0
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1408BDD3C (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408BDF44 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     PoSessionPowerControl @ 0x1408B5C30 (PoSessionPowerControl.c)
 *     TtmiLogSessionPowerControlStart @ 0x1408C27DC (TtmiLogSessionPowerControlStart.c)
 *     TtmiLogSessionPowerControlStop @ 0x1408C28D0 (TtmiLogSessionPowerControlStop.c)
 */

__int64 __fastcall TtmpSessionPowerControl(int *a1, unsigned __int8 a2, unsigned int a3)
{
  int v3; // ebx
  int *v5; // r14
  struct _KTHREAD *CurrentThread; // rax

  v3 = *a1;
  v5 = a1;
  LOBYTE(a1) = a2;
  TtmiLogSessionPowerControlStart(a1, a3);
  *((_QWORD *)v5 + 29) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  PoSessionPowerControl(a2, a3, v3);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *((_QWORD *)v5 + 29) = KeGetCurrentThread();
  return TtmiLogSessionPowerControlStop();
}
