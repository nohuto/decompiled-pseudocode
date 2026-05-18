/*
 * XREFs of sub_1800D4204 @ 0x1800D4204
 * Callers:
 *     sub_180078344 @ 0x180078344 (sub_180078344.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D4204(_OWORD *a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  result = a2;
  *(_OWORD *)(a2 + 24) = *a1;
  return result;
}
