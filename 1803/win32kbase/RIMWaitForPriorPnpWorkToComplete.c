/*
 * XREFs of RIMWaitForPriorPnpWorkToComplete @ 0x1C00FB99C
 * Callers:
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C00FB238 (RIMSignalOnPnpNotificationAndWait.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00BCB94 (WPP_RECORDER_SF_qq.c)
 */

__int64 __fastcall RIMWaitForPriorPnpWorkToComplete(__int64 a1, __int64 a2)
{
  unsigned __int16 i; // r9

  for ( i = 34; ; i = 36 )
  {
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      i,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    if ( (*(_DWORD *)(a2 + 184) & 0x10) == 0 )
      break;
    ++*(_DWORD *)(a1 + 888);
    WPP_RECORDER_SF_qq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      0x14u,
      0x23u,
      (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
      a1,
      a2);
    *(_QWORD *)(a1 + 104) = 0LL;
    ExReleasePushLockExclusiveEx(a1 + 96, 0LL);
    KeLeaveCriticalRegion();
    KeWaitForSingleObject(*(PVOID *)(a1 + 880), UserRequest, 0, 0, 0LL);
    RIMLockExclusive(a1 + 96);
  }
  return WPP_RECORDER_SF_qq(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x25u,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids,
           a1,
           a2);
}
