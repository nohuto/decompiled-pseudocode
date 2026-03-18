/*
 * XREFs of CmpGetSectionLineIndex @ 0x1409BF514
 * Callers:
 *     EmpParseEntryTypes @ 0x1409BE0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BE250 (EmpParseCallbacks.c)
 *     EmpParseRuleExpression @ 0x1409BE5D4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1409BEA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BEDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BEFF4 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409BF58C (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1409BF670 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1409BF69C (CmpSearchSectionByName.c)
 *     CmpProcessForSimpleStringSub @ 0x1409BF748 (CmpProcessForSimpleStringSub.c)
 */

__int64 __fastcall CmpGetSectionLineIndex(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  _QWORD *v9; // rdx
  int v10; // ecx

  v7 = CmpSearchSectionByName(a1, a2);
  if ( v7 )
  {
    v8 = CmpSearchLineInSectionByIndex(v7, a3);
    if ( v8 )
    {
      v9 = *(_QWORD **)(v8 + 16);
      v10 = 0;
      if ( a4 )
      {
        while ( v9 )
        {
          v9 = (_QWORD *)*v9;
          if ( ++v10 >= a4 )
            goto LABEL_4;
        }
      }
      else
      {
LABEL_4:
        if ( v9 )
          return CmpProcessForSimpleStringSub(a1, v9[1]);
      }
    }
  }
  return 0LL;
}
