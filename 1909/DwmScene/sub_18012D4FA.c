/*
 * XREFs of sub_18012D4FA @ 0x18012D4FA
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D4FA(__int64 a1, __int64 a2)
{
  sub_180069760(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
