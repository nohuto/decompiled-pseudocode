/*
 * XREFs of sub_1800B38A4 @ 0x1800B38A4
 * Callers:
 *     ?dtor$6@?0???0_Locinfo@std@@QEAA@PEBD@Z@4HA @ 0x180130107 (-dtor$6@-0---0_Locinfo@std@@QEAA@PEBD@Z@4HA.c)
 *     sub_1801301DB @ 0x1801301DB (sub_1801301DB.c)
 * Callees:
 *     sub_1800B5084 @ 0x1800B5084 (sub_1800B5084.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800B38A4(_QWORD **a1)
{
  _BYTE v3[16]; // [rsp+28h] [rbp-10h] BYREF

  sub_1800B5084(a1, v3, **a1);
  return j_j__o_free(*a1);
}
