/*
 * XREFs of sub_18012CDDC @ 0x18012CDDC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069760 @ 0x180069760 (sub_180069760.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CDDC(__int64 a1, __int64 a2)
{
  sub_180069760(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
