/*
 * XREFs of ?RtlStringCchLengthW@@YAJPEBG_KPEA_K@Z @ 0x1C0002838
 * Callers:
 *     ?_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z @ 0x1C00D0304 (-_QueryMonitorIdStr@CCD_TOPOLOGY@@CAJAEBU_LUID@@IPEAGG1@Z.c)
 *     ?DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z @ 0x1C00D04B8 (-DmmAppendCcdConnectedSetForAdapter@@YAJQEAXPEAU_UNICODE_STRING@@@Z.c)
 *     ?AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z @ 0x1C012B9FC (-AppendMonitorId@DpiPersistence@@YAJIAEBU_LUID@@PEAVVIDPN_MGR@@GPEAG2@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C01730CC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     DxgkNetDispQueryMiracastDisplayDeviceStatus @ 0x1C02036D0 (DxgkNetDispQueryMiracastDisplayDeviceStatus.c)
 *     DxgkNetDispStopMiracastDisplayDevice @ 0x1C0203B60 (DxgkNetDispStopMiracastDisplayDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(const unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 i; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    for ( i = a2; i; --i )
    {
      if ( !*a1 )
        break;
      ++a1;
    }
    result = i == 0 ? 0xC000000D : 0;
    if ( a3 )
    {
      if ( i )
        *a3 = a2 - i;
      else
        *a3 = 0LL;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}
