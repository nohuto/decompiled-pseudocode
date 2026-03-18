/*
 * XREFs of RIMHandleTTMDeviceInput @ 0x1C012138C
 * Callers:
 *     rimSignalReadComplete @ 0x1C0127738 (rimSignalReadComplete.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall RIMHandleTTMDeviceInput(__int64 a1)
{
  int v2; // [rsp+28h] [rbp-10h]

  if ( gbTtmEnabled && !*(_DWORD *)(a1 + 1168) && (*(_DWORD *)(a1 + 200) & 0x40) == 0 )
    TtmNotifyDeviceInput(2LL, a1, (*(_DWORD *)(*(_QWORD *)(a1 + 336) + 84LL) & gWakeOnDeviceTypes) != 0);
  v2 = 0;
  WPP_RECORDER_SF_d(gRimLog, 3u, 0x15u, 0xFu, (__int64)&WPP_6348e708fd723b9140a504851f6d1be1_Traceguids, v2);
  return 0LL;
}
