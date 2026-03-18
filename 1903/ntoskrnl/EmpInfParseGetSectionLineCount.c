/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x1409FAEFC
 * Callers:
 *     EmpParseEntryTypes @ 0x1409FA004 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409FA17C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA9F8 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409FAD14 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409FAF50 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1409FB5D0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1409FB5FC (CmpSearchSectionByName.c)
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
