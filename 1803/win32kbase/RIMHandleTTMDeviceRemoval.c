/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C00F691C
 * Callers:
 *     rimDoRimDevChange @ 0x1C00FC564 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003B310 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dq @ 0x1C00F6A38 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( gbTtmEnabled && !*(_DWORD *)(a1 + 824) && (*(_DWORD *)(a1 + 200) & 0x40) == 0 )
  {
    v7 = a1;
    WPP_RECORDER_SF_dq(WPP_GLOBAL_Control->DeviceExtension, a2, a3, a4);
    TtmNotifyDeviceDeparture(2LL, a1);
  }
  v6 = 0;
  WPP_RECORDER_SF_D(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0xEu,
    (__int64)&WPP_6f93d23ab5493b07c801fc1105033033_Traceguids,
    v6,
    v7);
  return 0LL;
}
