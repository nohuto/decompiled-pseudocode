/*
 * XREFs of TtmNotifyCsStateExited @ 0x14087FBC0
 * Callers:
 *     PopNotifyCsStateExited @ 0x14086EF90 (PopNotifyCsStateExited.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x14004F410 (KeLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x14004F590 (ExReleaseResourceLite.c)
 *     TtmpAcquireSessionById @ 0x140761694 (TtmpAcquireSessionById.c)
 *     TtmiLogError @ 0x1407616FC (TtmiLogError.c)
 *     TtmiScheduleSessionWorker @ 0x140880240 (TtmiScheduleSessionWorker.c)
 *     TtmiLogSessionCsExitComplete @ 0x140884AEC (TtmiLogSessionCsExitComplete.c)
 */

void __fastcall TtmNotifyCsStateExited(unsigned int a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  v2 = TtmpAcquireSessionById(&v4, a1);
  if ( v2 >= 0 )
  {
    TtmiLogSessionCsExitComplete(a1);
    v3 = v4;
    *(_DWORD *)(v4 + 4) &= 0xFFFFFCFF;
    TtmiScheduleSessionWorker(v3, 4LL);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  else
  {
    TtmiLogError("TtmNotifyCsStateExited", 3109, v2, v2);
  }
}
