/*
 * XREFs of _pGetAdditionalModeEntry @ 0x1C015B408
 * Callers:
 *     _pGetAdditionalTiming @ 0x1C015B2AC (_pGetAdditionalTiming.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall pGetAdditionalModeEntry(__int64 a1, char a2)
{
  int v3; // ebx
  _DWORD *result; // rax
  __int64 v5; // rax

  v3 = a1;
  if ( (_DWORD)a1 == -2 )
  {
    v5 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v5);
  }
  for ( result = qword_1C008EDF0; result && (v3 != result[2] || a2 != *((_BYTE *)result + 12)); result = *(_DWORD **)result )
    ;
  return result;
}
