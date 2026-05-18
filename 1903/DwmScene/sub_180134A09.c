/*
 * XREFs of sub_180134A09 @ 0x180134A09
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801233B4 @ 0x1801233B4 (sub_1801233B4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134A09(__int64 a1, __int64 a2)
{
  sub_1801233B4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
