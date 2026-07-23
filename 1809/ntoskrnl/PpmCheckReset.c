/*
 * XREFs of PpmCheckReset @ 0x140192EE0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14017690C (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
