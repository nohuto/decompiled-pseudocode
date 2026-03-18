/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400BAAD4
 * Callers:
 *     ExpSetTimerObject2 @ 0x1400BAC44 (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x1401147D0 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
