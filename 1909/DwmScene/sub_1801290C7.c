/*
 * XREFs of sub_1801290C7 @ 0x1801290C7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DDC @ 0x180038DDC (sub_180038DDC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801290C7(__int64 a1, __int64 a2)
{
  sub_180038DDC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
