/*
 * XREFs of TtmNotifyLowPowerStateExited @ 0x1408BD000
 * Callers:
 *     PopIssueActionRequest @ 0x140727D4C (PopIssueActionRequest.c)
 *     PopNotifyCsStateExited @ 0x1408AB410 (PopNotifyCsStateExited.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     TtmiScheduleSessionWorker @ 0x1408BD7AC (TtmiScheduleSessionWorker.c)
 *     TtmpAcquireSessionById @ 0x1408BDC44 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1408C157C (TtmiLogError.c)
 *     TtmiLogSessionCsExitComplete @ 0x1408C22A0 (TtmiLogSessionCsExitComplete.c)
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
