/*
 * XREFs of ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0003560
 * Callers:
 *     ?CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z @ 0x1C00AE24C (-CreateMonitorSetId@DpiPersistence@@YAJAEBU_LUID@@I_NPEAU_UNICODE_STRING@@PEA_N@Z.c)
 *     ?_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ @ 0x1C00B46DC (-_PrepareMonitorCCDName@DXGMONITOR@@AEAAJXZ.c)
 *     MonitorFillMonitorDeviceInfo @ 0x1C00BB6CC (MonitorFillMonitorDeviceInfo.c)
 *     _lambda_2b22dbeadb19a6eea2c92cf183f0ad41_::operator() @ 0x1C00BFFC0 (_lambda_2b22dbeadb19a6eea2c92cf183f0ad41_--operator().c)
 *     ?ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z @ 0x1C025E790 (-ConvertStringsToOneMultiString@@YAJPEAU_UNICODE_STRING@@IPEAPEAGPEAI@Z.c)
 *     ?DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z @ 0x1C026F4F4 (-DpiIndirectStartAdapter@@YAJPEAU_UNICODE_STRING@@PEBXK@Z.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1C00035AC (RtlStringCopyWorkerW.c)
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
