/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400D4828
 * Callers:
 *     EmpUpdateRuleState @ 0x1400D4AB0 (EmpUpdateRuleState.c)
 *     EmClientRuleEvaluate @ 0x140595590 (EmClientRuleEvaluate.c)
 *     EmClientQueryRuleState @ 0x140595780 (EmClientQueryRuleState.c)
 *     EmpClientRuleRegisterNotification @ 0x14084C7B0 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1409FAE60 (EmpParseTargetRules.c)
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
