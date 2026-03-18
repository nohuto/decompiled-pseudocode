/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x14009A944
 * Callers:
 *     ExpSetTimerObject2 @ 0x14009AAB4 (ExpSetTimerObject2.c)
 *     ExSetTimer @ 0x140114060 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
