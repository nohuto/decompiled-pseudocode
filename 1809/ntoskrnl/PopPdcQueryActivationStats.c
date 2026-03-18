/*
 * XREFs of PopPdcQueryActivationStats @ 0x14086F38C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1402DE160 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

__int64 (*PopPdcQueryActivationStats())(void)
{
  __int64 (*result)(void); // rax

  result = qword_14043FFE8;
  if ( qword_14043FFE8 )
    return (__int64 (*)(void))qword_14043FFE8();
  return result;
}
