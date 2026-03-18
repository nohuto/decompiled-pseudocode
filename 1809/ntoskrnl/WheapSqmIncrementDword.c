/*
 * XREFs of WheapSqmIncrementDword @ 0x140321B40
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1408DCAD8 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x140321A98 (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
