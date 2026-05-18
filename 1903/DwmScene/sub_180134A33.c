/*
 * XREFs of sub_180134A33 @ 0x180134A33
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123230 @ 0x180123230 (sub_180123230.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134A33(__int64 a1, __int64 a2)
{
  sub_180123230(*(_QWORD **)(a2 + 64));
  throw;
}
