/*
 * XREFs of sub_18002811C @ 0x18002811C
 * Callers:
 *     sub_180128979 @ 0x180128979 (sub_180128979.c)
 *     sub_180130DD5 @ 0x180130DD5 (sub_180130DD5.c)
 *     ?dtor$0@?0???0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA @ 0x1801310F5 (-dtor$0@-0---0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA.c)
 * Callees:
 *     sub_18002BC94 @ 0x18002BC94 (sub_18002BC94.c)
 */

__int64 __fastcall sub_18002811C(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002BC94(a1, v3, **a1);
  return j_j__o_free(*a1);
}
