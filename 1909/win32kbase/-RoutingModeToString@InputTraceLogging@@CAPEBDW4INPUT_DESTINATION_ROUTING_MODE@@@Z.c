/*
 * XREFs of ?RoutingModeToString@InputTraceLogging@@CAPEBDW4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C016F988
 * Callers:
 *     ?SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z @ 0x1C0033C34 (-SpeedHitTest@Mouse@InputTraceLogging@@SAX_KAEBUtagPOINT@@1AEBVCInputDest@@K_N@Z.c)
 *     ?HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z @ 0x1C0033D38 (-HitTestResult@DWM@InputTraceLogging@@SAX_KAEBU_InputHitTestResult@@AEBVCInputDest@@@Z.c)
 *     ?SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z @ 0x1C01727AC (-SpeedHitTest@Pointer@InputTraceLogging@@SAXAEBTPOINTERINFOUNION@@AEBVCInputDest@@K_N@Z.c)
 *     ?SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_ROUTING_MODE@@@Z @ 0x1C0190F10 (-SendToUserMode@Mouse@InputTraceLogging@@SAXPEBU_MIT_MOUSE_INPUT_MESSAGE@@W4INPUT_DESTINATION_RO.c)
 * Callees:
 *     <none>
 */

const char *__fastcall InputTraceLogging::RoutingModeToString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  if ( !a1 )
    return "Default";
  v1 = a1 - 1;
  if ( !v1 )
    return "Observe";
  v2 = v1 - 1;
  if ( !v2 )
    return "ISM";
  if ( v2 == 1 )
    return "RouteToMT";
  return "UNKNOWN";
}
