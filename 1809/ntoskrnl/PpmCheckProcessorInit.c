/*
 * XREFs of PpmCheckProcessorInit @ 0x140192E60
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x1401767EC (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x140192E84 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
