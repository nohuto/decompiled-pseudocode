/*
 * XREFs of sub_1801331E9 @ 0x1801331E9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A3B0 @ 0x18010A3B0 (sub_18010A3B0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801331E9(__int64 a1, __int64 a2)
{
  sub_18010A3B0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
