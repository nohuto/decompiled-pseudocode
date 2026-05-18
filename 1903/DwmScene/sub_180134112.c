/*
 * XREFs of sub_180134112 @ 0x180134112
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025E98 @ 0x180025E98 (sub_180025E98.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134112(__int64 a1, __int64 a2)
{
  sub_180025E98(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
