/*
 * XREFs of PopPdcQueryActivationStats @ 0x1408705CC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE450 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcQueryActivationStats())(void)
{
  __int64 (*result)(void); // rax

  result = qword_1404410A8;
  if ( qword_1404410A8 )
    return (__int64 (*)(void))qword_1404410A8();
  return result;
}
