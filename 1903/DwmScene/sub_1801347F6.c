/*
 * XREFs of sub_1801347F6 @ 0x1801347F6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801232FC @ 0x1801232FC (sub_1801232FC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801347F6(__int64 a1, __int64 a2)
{
  sub_1801232FC(*(_QWORD *)(a2 + 32));
  throw;
}
