/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x1409FAE0C
 * Callers:
 *     EmpParseEntryTypes @ 0x1409F9F14 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1409FA08C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1409FA908 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1409FAC24 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1409FAE60 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1409FB4E0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1409FB50C (CmpSearchSectionByName.c)
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
