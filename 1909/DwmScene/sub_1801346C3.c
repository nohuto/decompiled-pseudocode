/*
 * XREFs of sub_1801346C3 @ 0x1801346C3
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801231E4 @ 0x1801231E4 (sub_1801231E4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801346C3(__int64 a1, __int64 a2)
{
  sub_1801231E4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
