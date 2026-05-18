/*
 * XREFs of sub_1801342C3 @ 0x1801342C3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E068 @ 0x18006E068 (sub_18006E068.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801342C3(__int64 a1, __int64 a2)
{
  sub_18006E068(*(_QWORD *)(a2 + 96), *(__int64 **)(a2 + 104));
  throw;
}
