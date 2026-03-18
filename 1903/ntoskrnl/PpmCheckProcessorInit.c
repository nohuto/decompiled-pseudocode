/*
 * XREFs of PpmCheckProcessorInit @ 0x14019D2B0
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x14018040C (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x14019D2D4 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
