/*
 * XREFs of EmpSearchTargetRuleList @ 0x1400106FC
 * Callers:
 *     EmpUpdateRuleState @ 0x140010758 (EmpUpdateRuleState.c)
 *     EmClientQueryRuleState @ 0x1405663B0 (EmClientQueryRuleState.c)
 *     EmClientRuleEvaluate @ 0x1405664A0 (EmClientRuleEvaluate.c)
 *     EmpClientRuleRegisterNotification @ 0x140814860 (EmpClientRuleRegisterNotification.c)
 *     EmpParseTargetRules @ 0x1409BFFF4 (EmpParseTargetRules.c)
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
