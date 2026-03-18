/*
 * XREFs of PpmPerfControlExecuteAction @ 0x140177BCC
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x14011A910 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140177BB0 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
