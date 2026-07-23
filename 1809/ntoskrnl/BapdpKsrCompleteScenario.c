/*
 * XREFs of BapdpKsrCompleteScenario @ 0x140319670
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BapdpKsrCompleteScenario(int a1, int a2)
{
  if ( (a1 & 0x3000000) != 0 && (a2 & 0x3000000) == 0 && *(&xmmword_14040AD30 + 1) )
    return ((__int64 (*)(void))*(&xmmword_14040AD30 + 1))();
  else
    return 3221225659LL;
}
