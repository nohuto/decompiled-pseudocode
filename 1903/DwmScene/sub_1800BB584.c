/*
 * XREFs of sub_1800BB584 @ 0x1800BB584
 * Callers:
 *     sub_1800BBA58 @ 0x1800BBA58 (sub_1800BBA58.c)
 * Callees:
 *     sub_1800CAD58 @ 0x1800CAD58 (sub_1800CAD58.c)
 */

__int64 __fastcall sub_1800BB584(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = sub_1800CAD58(a1);
  *(_QWORD *)(result + 32) = 0LL;
  *(_QWORD *)(result + 40) = 0LL;
  *(_OWORD *)(result + 16) = *(_OWORD *)a4;
  *(_OWORD *)(result + 32) = *(_OWORD *)(a4 + 16);
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_WORD *)a4 = 0;
  return result;
}
