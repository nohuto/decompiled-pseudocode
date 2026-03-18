/*
 * XREFs of PopPdcQueryActivationStats @ 0x1408ABFB0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FB070 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcQueryActivationStats())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BDF8;
  if ( qword_14046BDF8 )
    return (__int64 (*)(void))qword_14046BDF8();
  return result;
}
