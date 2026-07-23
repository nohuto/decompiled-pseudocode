/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x1409BFFA0
 * Callers:
 *     EmpParseEntryTypes @ 0x1409BF0E8 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409BF250 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409BFA68 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409BFDC8 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409BFFF4 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1409C0670 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1409C069C (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
