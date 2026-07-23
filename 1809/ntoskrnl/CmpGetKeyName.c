/*
 * XREFs of CmpGetKeyName @ 0x1409C0630
 * Callers:
 *     EmpParseCallbacks @ 0x1409BF250 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x1409BFFF4 (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x1409C058C (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1409C0670 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1409C069C (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
