/*
 * XREFs of RealPredecessor @ 0x1401359D0
 * Callers:
 *     RtlDeleteElementGenericTableAvl @ 0x140001CA0 (RtlDeleteElementGenericTableAvl.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x140135940 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlDeleteElementGenericTableAvlEx @ 0x140169A50 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlGetElementGenericTableAvl @ 0x140311BB0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealPredecessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rcx

  result = (_QWORD *)a1[1];
  if ( result )
  {
    for ( i = (_QWORD *)result[2]; i; i = (_QWORD *)i[2] )
      result = i;
  }
  else
  {
    for ( result = (_QWORD *)*a1; (_QWORD *)result[1] == a1; result = (_QWORD *)*result )
      a1 = result;
    if ( (_QWORD *)result[2] != a1 || (_QWORD *)*result == result )
      return 0LL;
  }
  return result;
}
