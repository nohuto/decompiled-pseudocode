/*
 * XREFs of sub_1800644F8 @ 0x1800644F8
 * Callers:
 *     RtlDeleteElementGenericTableAvlEx @ 0x1800641F0 (RtlDeleteElementGenericTableAvlEx.c)
 *     RtlLookupFirstMatchingElementGenericTableAvl @ 0x1800877E0 (RtlLookupFirstMatchingElementGenericTableAvl.c)
 *     RtlGetElementGenericTableAvl @ 0x1800F3EC0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800644F8(_QWORD *a1)
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
