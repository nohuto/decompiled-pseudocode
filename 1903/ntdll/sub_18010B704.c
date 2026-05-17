/*
 * XREFs of sub_18010B704 @ 0x18010B704
 * Callers:
 *     sub_18004E8CC @ 0x18004E8CC (sub_18004E8CC.c)
 * Callees:
 *     sub_1800506F0 @ 0x1800506F0 (sub_1800506F0.c)
 */

__int64 __fastcall sub_18010B704(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  int v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  sub_1800506F0(a2, a2, &v7, &v8);
  result = v7;
  *(_WORD *)(v7 + 2) = (1 << (a4 / a3)) - 2;
  *(_QWORD *)(result + 8) = -1LL;
  return result;
}
