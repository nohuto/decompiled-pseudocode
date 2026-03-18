/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C0124E84
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C01245D0 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C0089540 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  unsigned __int16 i; // r9

  for ( i = 39; ; i = 41 )
  {
    WPP_RECORDER_SF_qq(gRimLog, 3u, 0x15u, i, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2);
    if ( (*(_DWORD *)(a2 + 184) & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 880);
    WPP_RECORDER_SF_qq(gRimLog, 3u, 0x15u, 0x28u, (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids, a1, a2);
    *(_QWORD *)(a1 + 112) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 104, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 872), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 104);
  }
  return WPP_RECORDER_SF_qq(
           gRimLog,
           3u,
           0x15u,
           0x2Au,
           (__int64)&WPP_e843b24bce37371af6d7cbb9fb8661d0_Traceguids,
           a1,
           a2);
}
