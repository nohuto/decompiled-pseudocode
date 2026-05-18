/*
 * XREFs of sub_180130D72 @ 0x180130D72
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_1800696BC @ 0x1800696BC (sub_1800696BC.c)
 *     sub_180069D48 @ 0x180069D48 (sub_180069D48.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130D72(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_1800696BC(*(_QWORD *)(a2 + 64), *(_QWORD ***)(a2 + 88), *(_QWORD ***)(a2 + 56));
  v3 = sub_18000F594(*(_QWORD *)(a2 + 64));
  sub_180069D48(v3, *(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 72));
  throw;
}
