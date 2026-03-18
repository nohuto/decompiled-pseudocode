/*
 * XREFs of EmpSearchTargetRuleList @ 0x140097508
 * Callers:
 *     EmpUpdateRuleState @ 0x1400EE410 (EmpUpdateRuleState.c)
 *     EmClientRuleEvaluate @ 0x140595590 (EmClientRuleEvaluate.c)
 *     EmClientQueryRuleState @ 0x1405957C0 (EmClientQueryRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14084D0B0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1409FAF50 (EmpParseTargetRules.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EmpSearchTargetRuleList(__int64 a1)
{
  _QWORD *i; // rdx
  _QWORD *result; // rax

  for ( i = (_QWORD *)EmpTargetRuleListHead; ; i = (_QWORD *)*i )
  {
    result = 0LL;
    if ( !i )
      break;
    result = i - 4;
    if ( *(i - 3) == a1 )
      break;
  }
  return result;
}
