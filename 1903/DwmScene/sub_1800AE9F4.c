/*
 * XREFs of sub_1800AE9F4 @ 0x1800AE9F4
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 *     sub_1800B1838 @ 0x1800B1838 (sub_1800B1838.c)
 * Callees:
 *     sub_1800B18D0 @ 0x1800B18D0 (sub_1800B18D0.c)
 *     sub_1800B214C @ 0x1800B214C (sub_1800B214C.c)
 */

__int64 __fastcall sub_1800AE9F4(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v5; // xmm1_8

  if ( (unsigned __int8)sub_1800B214C() )
    sub_1800B18D0(a1);
  result = a2;
  v5 = *(_QWORD *)(a1 + 1588);
  *(_OWORD *)a2 = *(_OWORD *)(a1 + 1572);
  *(_QWORD *)(a2 + 16) = v5;
  return result;
}
