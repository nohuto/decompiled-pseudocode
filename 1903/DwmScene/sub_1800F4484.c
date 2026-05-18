/*
 * XREFs of sub_1800F4484 @ 0x1800F4484
 * Callers:
 *     sub_1800F44C4 @ 0x1800F44C4 (sub_1800F44C4.c)
 * Callees:
 *     sub_180064588 @ 0x180064588 (sub_180064588.c)
 */

_QWORD *__fastcall sub_1800F4484(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  _QWORD *result; // rax

  result = sub_180064588(a1);
  *((_WORD *)result + 12) = 0;
  *(_QWORD *)((char *)result + 28) = **a3;
  return result;
}
