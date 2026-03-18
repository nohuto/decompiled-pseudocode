/*
 * XREFs of PpmCheckReset @ 0x14019D0B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14018040C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(__int64 a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
