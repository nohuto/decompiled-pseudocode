/*
 * XREFs of sub_1801303A7 @ 0x1801303A7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CAF38 @ 0x1800CAF38 (sub_1800CAF38.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801303A7(__int64 a1, __int64 a2)
{
  sub_1800CAF38(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
