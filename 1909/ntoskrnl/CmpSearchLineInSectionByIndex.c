/*
 * XREFs of CmpSearchLineInSectionByIndex @ 0x1409FB4E0
 * Callers:
 *     CmpGetSectionLineIndexValueCount @ 0x1409FA8BC (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetSectionLineCount @ 0x1409FAE0C (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1409FB380 (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x1409FB49C (CmpGetKeyName.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpSearchLineInSectionByIndex(__int64 a1, unsigned int a2)
{
  unsigned int v2; // r8d
  _QWORD *result; // rax

  v2 = 0;
  if ( !a1 )
    return 0LL;
  result = *(_QWORD **)(a1 + 16);
  if ( a2 )
  {
    do
    {
      if ( !result )
        break;
      result = (_QWORD *)*result;
      ++v2;
    }
    while ( v2 < a2 );
  }
  return result;
}
