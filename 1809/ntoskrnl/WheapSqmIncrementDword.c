/*
 * XREFs of WheapSqmIncrementDword @ 0x140321E30
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1408DDD78 (WheapPfaMemoryCheck.c)
 * Callees:
 *     WheapSqmDwordCommon @ 0x140321D88 (WheapSqmDwordCommon.c)
 */

NTSTATUS __fastcall WheapSqmIncrementDword(int a1)
{
  return WheapSqmDwordCommon(6, &WHEA_SQM_EVENT_INCREMENTDWORD, a1, 1);
}
