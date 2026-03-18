/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C000D0E0
 * Callers:
 *     _lambda_3a429c02e21bb855f1ec386a1cface2b_::operator() @ 0x1C00C35F0 (_lambda_3a429c02e21bb855f1ec386a1cface2b_--operator().c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C0128F58 (MonitorFillMonitorDeviceInfo.c)
 *     ?_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z @ 0x1C0129360 (-_QueryTopologySetIdStr@CCD_TOPOLOGY@@AEBAJPEAGG@Z.c)
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C012D058 (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@IPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C0176EBC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C029D688 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C02ABCA0 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C000D12C (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCopyW(unsigned __int16 *a1, size_t a2, const unsigned __int16 *a3)
{
  int v3; // r9d

  v3 = 0;
  if ( a2 - 1 > 0x7FFFFFFE )
    v3 = -1073741811;
  if ( v3 < 0 )
  {
    if ( a2 )
      *a1 = 0;
  }
  else
  {
    return (unsigned int)RtlStringCopyWorkerW(a1, a2, 0LL, a3, 0x7FFFFFFEuLL);
  }
  return (unsigned int)v3;
}
