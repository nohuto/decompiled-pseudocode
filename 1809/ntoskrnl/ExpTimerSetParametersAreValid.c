/*
 * XREFs of ExpTimerSetParametersAreValid @ 0x1400FD0B8
 * Callers:
 *     ExSetTimer @ 0x1400FD010 (ExSetTimer.c)
 * Callees:
 *     <none>
 */

bool __fastcall ExpTimerSetParametersAreValid(__int64 a1)
{
  return !*(_DWORD *)a1 && *(__int64 *)(a1 + 8) >= -1;
}
