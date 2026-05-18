/*
 * XREFs of sub_1801330B9 @ 0x1801330B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A4B0 @ 0x18010A4B0 (sub_18010A4B0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801330B9(__int64 a1, __int64 a2)
{
  sub_18010A4B0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
