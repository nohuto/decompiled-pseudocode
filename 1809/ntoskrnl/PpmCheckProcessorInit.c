/*
 * XREFs of PpmCheckProcessorInit @ 0x140192E80
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14017680C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x140192EA4 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(LARGE_INTEGER *a1)
{
  PpmResetPerfTimes(a1);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
