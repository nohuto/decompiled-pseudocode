/*
 * XREFs of sub_1801287F7 @ 0x1801287F7
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002639C @ 0x18002639C (sub_18002639C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801287F7(__int64 a1, __int64 a2)
{
  sub_18002639C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
