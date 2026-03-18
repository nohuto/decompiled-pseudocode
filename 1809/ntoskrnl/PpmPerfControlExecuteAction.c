/*
 * XREFs of PpmPerfControlExecuteAction @ 0x14017857C
 * Callers:
 *     PpmCheckAcquireProcessorPerformance @ 0x140062640 (PpmCheckAcquireProcessorPerformance.c)
 *     PpmPerfCommitPerformance @ 0x140178560 (PpmPerfCommitPerformance.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

bool __fastcall PpmPerfControlExecuteAction(void (__fastcall *a1)(__int64 (__fastcall *)()))
{
  if ( a1 )
    a1(PpmPerfControlActionCallback);
  return a1 == 0LL;
}
