/*
 * XREFs of sub_180122FD0 @ 0x180122FD0
 * Callers:
 *     sub_18011ECD4 @ 0x18011ECD4 (sub_18011ECD4.c)
 *     sub_180120820 @ 0x180120820 (sub_180120820.c)
 *     sub_18012088C @ 0x18012088C (sub_18012088C.c)
 *     sub_18012212C @ 0x18012212C (sub_18012212C.c)
 *     sub_1801243FC @ 0x1801243FC (sub_1801243FC.c)
 *     sub_180124568 @ 0x180124568 (sub_180124568.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180126218 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall sub_180122FD0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *result; // rax

  result = operator new(0xB0uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  *result = a2;
  result[1] = a3;
  return result;
}
