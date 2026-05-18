/*
 * XREFs of sub_1800B3794 @ 0x1800B3794
 * Callers:
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x18012FFF7 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_1801300CB @ 0x1801300CB (sub_1801300CB.c)
 * Callees:
 *     sub_1800B4F74 @ 0x1800B4F74 (sub_1800B4F74.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B3794(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800B4F74(a1, v3, **a1);
  return j_j__o_free(*a1);
}
