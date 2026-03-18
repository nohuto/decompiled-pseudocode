/*
 * XREFs of ?PointerDeviceTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C0131F40
 * Callers:
 *     ?InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z @ 0x1C00A74E0 (-InputApc@RIM@InputTraceLogging@@SAXPEBURIMDEV@@PEBU_IO_STATUS_BLOCK@@@Z.c)
 *     ?RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C0132814 (-RimDevicePointerData@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 *     ?InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z @ 0x1C0145948 (-InjectInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4InputTracing_RimInjectionSource@@@Z.c)
 *     ?ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C015018C (-ReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z @ 0x1C0150468 (-SkipReadComplete@RIM@InputTraceLogging@@SAXPEBURawInputManagerObject@@PEBURIMDEV@@@Z.c)
 *     ?PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4ContactPopulationSource@12@@Z @ 0x1C0152594 (-PopulateContact@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4tagHPD_TYPE@@GPEBUtagPOINTER_INFO@@W4Co.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::PointerDeviceTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx

  if ( !a1 )
    return "Unknown";
  v1 = a1 - 1;
  if ( !v1 )
    return "SingleTouch";
  v2 = v1 - 1;
  if ( !v2 )
    return "SerialTouch";
  v3 = v2 - 1;
  if ( !v3 )
    return "ParallelACTouch";
  v4 = v3 - 1;
  if ( !v4 )
    return "ParallelNullTouch";
  v5 = v4 - 1;
  if ( !v5 )
    return "IntegratedPen";
  v6 = v5 - 1;
  if ( !v6 )
    return "ExternalPen";
  if ( v6 == 1 )
    return "Touchpad";
  return "UNKNOWN";
}
