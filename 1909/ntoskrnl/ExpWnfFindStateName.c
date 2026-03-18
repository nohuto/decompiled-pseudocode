/*
 * XREFs of ExpWnfFindStateName @ 0x140655DD0
 * Callers:
 *     ExpWnfCreateNameInstance @ 0x140653EBC (ExpWnfCreateNameInstance.c)
 *     ExpWnfLookupNameInstance @ 0x140655D08 (ExpWnfLookupNameInstance.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall ExpWnfFindStateName(__int64 a1, unsigned __int64 a2)
{
  _QWORD *result; // rax

  result = *(_QWORD **)(a1 + 56);
  if ( !result )
    return 0LL;
  while ( a2 < result[3] )
  {
    result = (_QWORD *)*result;
LABEL_5:
    if ( !result )
      return result;
  }
  if ( a2 > result[3] )
  {
    result = (_QWORD *)result[1];
    goto LABEL_5;
  }
  result -= 2;
  return result;
}
