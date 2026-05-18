/*
 * XREFs of sub_18012CD0D @ 0x18012CD0D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800696BC @ 0x1800696BC (sub_1800696BC.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CD0D(__int64 a1, __int64 a2)
{
  sub_1800696BC(*(_QWORD *)(a2 + 128), *(_QWORD ***)(a2 + 136), *(_QWORD ***)(a2 + 40));
  sub_180069D48(*(_QWORD *)(a2 + 128), *(_QWORD *)(a2 + 48), *(_QWORD *)(a2 + 152));
  throw;
}
