/*
 * XREFs of sub_18012F3FE @ 0x18012F3FE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F594 @ 0x18000F594 (sub_18000F594.c)
 *     sub_180069D08 @ 0x180069D08 (sub_180069D08.c)
 *     sub_18009C05C @ 0x18009C05C (sub_18009C05C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F3FE(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18009C05C(*(_QWORD *)(a2 + 32), *(_QWORD **)(a2 + 56), *(_QWORD **)(a2 + 48));
  v3 = sub_18000F594(*(_QWORD *)(a2 + 32));
  sub_180069D08(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}
