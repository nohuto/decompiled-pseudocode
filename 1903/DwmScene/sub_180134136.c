/*
 * XREFs of sub_180134136 @ 0x180134136
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B79C @ 0x18002B79C (sub_18002B79C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134136(__int64 a1, __int64 a2)
{
  sub_18002B79C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
