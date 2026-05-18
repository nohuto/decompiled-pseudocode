/*
 * XREFs of sub_1800A6718 @ 0x1800A6718
 * Callers:
 *     sub_1800A6C5C @ 0x1800A6C5C (sub_1800A6C5C.c)
 * Callees:
 *     sub_18002B81C @ 0x18002B81C (sub_18002B81C.c)
 */

_QWORD *__fastcall sub_1800A6718(_QWORD *a1, _QWORD *a2)
{
  _QWORD *result; // rax

  result = sub_18002B81C(a1);
  *((_WORD *)result + 12) = 0;
  result[4] = 0LL;
  result[5] = 0LL;
  result[4] = *a2;
  result[5] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  return result;
}
