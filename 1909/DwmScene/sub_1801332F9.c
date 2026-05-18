/*
 * XREFs of sub_1801332F9 @ 0x1801332F9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A4C0 @ 0x18010A4C0 (sub_18010A4C0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801332F9(__int64 a1, __int64 a2)
{
  sub_18010A4C0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
