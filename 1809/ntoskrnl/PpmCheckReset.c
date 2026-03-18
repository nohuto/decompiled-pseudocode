/*
 * XREFs of PpmCheckReset @ 0x140192D80
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1401767EC (PpmResetPerfTimes.c)
 */

__int64 __fastcall PpmCheckReset(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  return 0LL;
}
