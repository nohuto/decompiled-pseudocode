/*
 * XREFs of PpmCheckProcessorInit @ 0x14019DA30
 * Callers:
 *     <none>
 * Callees:
 *     PpmResetPerfTimes @ 0x140180AFC (PpmResetPerfTimes.c)
 *     PpmHeteroHgsProcessorInit @ 0x14019DA54 (PpmHeteroHgsProcessorInit.c)
 */

__int64 __fastcall PpmCheckProcessorInit(__int64 a1)
{
  PpmResetPerfTimes(a1);
  PpmHeteroHgsProcessorInit(a1);
  return 0LL;
}
