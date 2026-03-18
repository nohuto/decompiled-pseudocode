/*
 * XREFs of PopPdcQueryActivationStats @ 0x1408AB810
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402FAB20 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcQueryActivationStats())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14046BB38;
  if ( qword_14046BB38 )
    return (__int64 (*)(void))qword_14046BB38();
  return result;
}
