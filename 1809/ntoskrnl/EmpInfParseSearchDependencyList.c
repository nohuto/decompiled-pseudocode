/*
 * XREFs of EmpInfParseSearchDependencyList @ 0x1409C0864
 * Callers:
 *     EmpParseRuleExpression @ 0x1409BF5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 * Callees:
 *     <none>
 */

char __fastcall EmpInfParseSearchDependencyList(_QWORD **a1, __int64 a2)
{
  _QWORD *v2; // rax
  char v3; // r8

  v2 = *a1;
  v3 = 0;
  while ( v2 )
  {
    if ( *(v2 - 1) == a2 )
      return 1;
    v2 = (_QWORD *)*v2;
  }
  return v3;
}
