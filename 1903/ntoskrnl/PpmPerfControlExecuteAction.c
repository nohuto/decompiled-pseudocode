/*
 * XREFs of PpmPerfControlExecuteAction @ 0x1401774DC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x14011C2B0 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x1401774C0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
