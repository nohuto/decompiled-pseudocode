/*
 * XREFs of sub_1800AEB04 @ 0x1800AEB04
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 *     sub_1800B1948 @ 0x1800B1948 (sub_1800B1948.c)
 * Callees:
 *     sub_1800B19E0 @ 0x1800B19E0 (sub_1800B19E0.c)
 *     sub_1800B225C @ 0x1800B225C (sub_1800B225C.c)
 */

__int64 __fastcall sub_1800AEB04(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800B225C() )
    sub_1800B19E0(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
