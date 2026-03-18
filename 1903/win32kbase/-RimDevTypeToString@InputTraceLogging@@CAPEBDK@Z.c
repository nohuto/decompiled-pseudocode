/*
 * XREFs of ?RimDevTypeToString@InputTraceLogging@@CAPEBDK@Z @ 0x1C01346BC
 * Callers:
 *     ?RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z @ 0x1C006C9DC (-RimDevice@RIM@InputTraceLogging@@SAXPEBURIMDEV@@K@Z.c)
 *     RIMStartDeviceSpecificRead @ 0x1C006F2B0 (RIMStartDeviceSpecificRead.c)
 *     ?ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z @ 0x1C01525F8 (-ProcessDeviceBuffer@RIM@InputTraceLogging@@SAXPEBURIMDEV@@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RimDevTypeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Mouse";
  v1 = a1 - 1;
  if ( !v1 )
    return "Keyboard";
  v2 = v1 - 1;
  if ( !v2 )
    return "Hid";
  if ( v2 == 1 )
    return "Config";
  return "UNKNOWN";
}
