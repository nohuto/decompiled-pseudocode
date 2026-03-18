/*
 * XREFs of TtmpInitiateModernStandbyTransition @ 0x140880B20
 * Callers:
 *     TtmpActivateSessionWorker @ 0x1408806E8 (TtmpActivateSessionWorker.c)
 *     TtmpDeactivateSessionWorker @ 0x1408808F0 (TtmpDeactivateSessionWorker.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400505F0 (ExAcquireResourceExclusiveLite.c)
 *     PopPdcEngagePhases @ 0x14086F238 (PopPdcEngagePhases.c)
 *     TtmiLogInitiateModernStandbyTransitionStart @ 0x1408841A4 (TtmiLogInitiateModernStandbyTransitionStart.c)
 *     TtmiLogInitiateModernStandbyTransitionStop @ 0x140884298 (TtmiLogInitiateModernStandbyTransitionStop.c)
 */

__int64 __fastcall TtmpInitiateModernStandbyTransition(__int64 a1, char a2, unsigned int a3)
{
  __int64 v4; // rsi
  unsigned int v6; // eax
  struct _KTHREAD *CurrentThread; // rdx
  unsigned int v8; // ebx

  v4 = a1;
  LOBYTE(a1) = a2;
  TtmiLogInitiateModernStandbyTransitionStart(a1, a3);
  *(_QWORD *)(v4 + 232) = 0LL;
  ExReleaseResourceLite(&TtmpSessionLock);
  KeLeaveCriticalRegion();
  v6 = PopPdcEngagePhases(a2, a3);
  CurrentThread = KeGetCurrentThread();
  v8 = v6;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
  *(_QWORD *)(v4 + 232) = KeGetCurrentThread();
  TtmiLogInitiateModernStandbyTransitionStop(v8);
  return v8;
}
