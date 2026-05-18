/*
 * XREFs of sub_180130E17 @ 0x180130E17
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BCA4 @ 0x18002BCA4 (sub_18002BCA4.c)
 *     sub_1800DA108 @ 0x1800DA108 (sub_1800DA108.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130E17(__int64 a1, __int64 a2)
{
  sub_1800DA108(*(_QWORD *)(a2 + 128), *(__int64 **)(a2 + 152), *(__int64 **)(a2 + 40));
  sub_18002BCA4(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 32));
  throw;
}
