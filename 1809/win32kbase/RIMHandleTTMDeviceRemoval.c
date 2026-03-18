/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C009248C
 * Callers:
 *     rimDoRimDevChange @ 0x1C004E4B0 (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0121444 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, int a2, int a3, int a4)
{
  int v6; // [rsp+28h] [rbp-20h]
  __int64 v7; // [rsp+30h] [rbp-18h]

  if ( gbTtmEnabled && !*(_DWORD *)(a1 + 1168) && (*(_DWORD *)(a1 + 200) & 0x40) == 0 )
  {
    v7 = a1;
    WPP_RECORDER_SF_dq(a1, a2, a3, a4);
    TtmNotifyDeviceDeparture(2LL, a1);
  }
  v6 = 0;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0xEu, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v6, v7);
  return 0LL;
}
