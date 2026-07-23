/*
 * XREFs of PpmCheckProcessorInit @ 0x140192FC0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14017690C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x140192FE4 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
