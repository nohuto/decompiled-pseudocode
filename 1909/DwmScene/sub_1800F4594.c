/*
 * XREFs of sub_1800F4594 @ 0x1800F4594
 * Callers:
 *     sub_1800F45D4 @ 0x1800F45D4 (sub_1800F45D4.c)
 * Callees:
 *     sub_180064698 @ 0x180064698 (sub_180064698.c)
 */

_QWORD *__fastcall sub_1800F4594(_QWORD *a1, __int64 a2, unsigned int **a3)
{
  _QWORD *result; // rax

  result = sub_180064698(a1);
  *((_WORD *)result + 12) = 0;
  *(_QWORD *)((char *)result + 28) = **a3;
  return result;
}
