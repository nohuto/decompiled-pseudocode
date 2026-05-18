/*
 * XREFs of sub_1800B2A10 @ 0x1800B2A10
 * Callers:
 *     sub_1800AAEAC @ 0x1800AAEAC (sub_1800AAEAC.c)
 *     sub_18012FCA8 @ 0x18012FCA8 (sub_18012FCA8.c)
 *     sub_18012FCCC @ 0x18012FCCC (sub_18012FCCC.c)
 * Callees:
 *     sub_1800751C0 @ 0x1800751C0 (sub_1800751C0.c)
 */

__int64 __fastcall sub_1800B2A10(__int64 a1, __int64 a2)
{
  sub_1800751C0((_QWORD *)(a2 + 32), 0);
  return j_j__o_free(a2);
}
