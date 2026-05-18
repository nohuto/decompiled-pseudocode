/*
 * XREFs of sub_1801348C9 @ 0x1801348C9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180120A98 @ 0x180120A98 (sub_180120A98.c)
 *     sub_180123320 @ 0x180123320 (sub_180123320.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801348C9(__int64 a1, __int64 a2)
{
  sub_180123320(*(_QWORD *)(a2 + 80), *(_QWORD ***)(a2 + 88));
  sub_180120A98(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
