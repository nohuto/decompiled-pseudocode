/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1408BD730
 * Callers:
 *     PopIssueActionRequest @ 0x140725EAC (PopIssueActionRequest.c)
 *     PopNotifyCsStateExited @ 0x1408ABBB0 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003E220 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1408BDEDC (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1408BE374 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C1CAC (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x1408C29D0 (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyLowPowerStateExited(unsigned int a1)
{
  __int64 v2; // rcx
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  if ( (int)TtmpAcquireSessionById(&v3, a1) >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v2 = v3;
    *(_DWORD *)(v3 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v2, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyLowPowerStateExited");
  }
}
