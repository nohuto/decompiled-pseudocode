/*
 * XREFs of WheapSqmSetDword @ 0x1408DD494
 * Callers:
 *     WheapSqmCollectWheaOscTelemetry @ 0x140321934 (WheapSqmCollectWheaOscTelemetry.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x140321A98 (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmSetDword(int a1, int a2)
{
  return WheapSqmDwordCommon(5, &WHEA_SQM_EVENT_SETDWORD, a1, a2);
}
