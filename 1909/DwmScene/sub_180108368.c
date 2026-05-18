/*
 * XREFs of sub_180108368 @ 0x180108368
 * Callers:
 *     sub_1801098BC @ 0x1801098BC (sub_1801098BC.c)
 * Callees:
 *     sub_180069494 @ 0x180069494 (sub_180069494.c)
 */

_QWORD *__fastcall sub_180108368(_QWORD *a1, __int64 a2)
{
  _QWORD *result; // rax

  result = sub_180069494(a1);
  *((_WORD *)result + 12) = 0;
  result[6] = 0LL;
  result[7] = 0LL;
  *((_OWORD *)result + 2) = *(_OWORD *)a2;
  *((_OWORD *)result + 3) = *(_OWORD *)(a2 + 16);
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_QWORD *)(a2 + 24) = 15LL;
  *(_BYTE *)a2 = 0;
  *((_OWORD *)result + 4) = *(_OWORD *)(a2 + 32);
  result[10] = *(_QWORD *)(a2 + 48);
  return result;
}
