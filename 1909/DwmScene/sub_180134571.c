/*
 * XREFs of sub_180134571 @ 0x180134571
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123480 @ 0x180123480 (sub_180123480.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134571(__int64 a1, __int64 a2)
{
  sub_180123480(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
