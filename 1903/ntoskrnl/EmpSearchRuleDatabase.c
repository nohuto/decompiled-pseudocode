/*
 * XREFs of EmpSearchRuleDatabase @ 0x14009752C
 * Callers:
 *     EmClientRuleEvaluate @ 0x140595590 (EmClientRuleEvaluate.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14084D0B0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseRuleTerm @ 0x1409FA3B0 (EmpParseRuleTerm.c)
 *     EmpParseRules @ 0x1409FA9F8 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1409FAF50 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchRuleDatabase(_QWORD *a1)
{
  _QWORD *i; // rdx
  _QWORD *v2; // r8
  __int64 v3; // r9

  for ( i = (_QWORD *)EmpRuleListHead; ; i = (_QWORD *)*i )
  {
    v2 = 0LL;
    if ( !i )
      break;
    v2 = i - 3;
    v3 = *(i - 3) - *a1;
    if ( !v3 )
      v3 = v2[1] - a1[1];
    if ( !v3 )
      break;
  }
  return v2;
}
