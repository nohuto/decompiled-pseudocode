/*
 * XREFs of sub_18002822C @ 0x18002822C
 * Callers:
 *     sub_180128A89 @ 0x180128A89 (sub_180128A89.c)
 *     sub_180130EE5 @ 0x180130EE5 (sub_180130EE5.c)
 *     ?dtor$0@?0???0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA @ 0x180131205 (-dtor$0@-0---0ContextBase@details@Concurrency@@QEAA@PEAVSchedulerBase@12@_N@Z@4HA.c)
 * Callees:
 *     sub_18002BDA4 @ 0x18002BDA4 (sub_18002BDA4.c)
 */

__int64 __fastcall sub_18002822C(_QWORD **a1)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  sub_18002BDA4(a1, v3, **a1);
  return j_j__o_free(*a1);
}
