/*
 * XREFs of sub_18012FAAA @ 0x18012FAAA
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AA030 @ 0x1800AA030 (sub_1800AA030.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FAAA(__int64 a1, __int64 a2)
{
  sub_1800AA030(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
