/*
 * XREFs of sub_18012086C @ 0x18012086C
 * Callers:
 *     sub_180121948 @ 0x180121948 (sub_180121948.c)
 *     sub_1801247B4 @ 0x1801247B4 (sub_1801247B4.c)
 * Callees:
 *     sub_180025584 @ 0x180025584 (sub_180025584.c)
 */

_QWORD *__fastcall sub_18012086C(_QWORD *a1, __int64 a2, _DWORD **a3)
{
  _QWORD *result; // rax

  result = sub_180025584(a1);
  *((_WORD *)result + 12) = 0;
  *((_DWORD *)result + 8) = **a3;
  result[12] = 0LL;
  return result;
}
