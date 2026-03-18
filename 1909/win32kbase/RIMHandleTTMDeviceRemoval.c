/*
 * XREFs of RIMHandleTTMDeviceRemoval @ 0x1C00A4970
 * Callers:
 *     rimDoRimDevChange @ 0x1C0055BCC (rimDoRimDevChange.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C003705C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_dq @ 0x1C014B0A8 (WPP_RECORDER_SF_dq.c)
 */

__int64 __fastcall RIMHandleTTMDeviceRemoval(__int64 a1, char a2, int a3, int a4)
{
  if ( gbTtmEnabled && !*(_DWORD *)(a1 + 1312) && (*(_DWORD *)(a1 + 200) & 0x40) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dq(a1, a2, a3, a4);
    TtmNotifyDeviceDeparture(2LL, a1);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_D((_DWORD)gRimLog, 4, 1, 14, (__int64)&WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids, 0);
  return 0LL;
}
