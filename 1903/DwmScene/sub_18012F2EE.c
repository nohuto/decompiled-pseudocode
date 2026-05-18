/*
 * XREFs of sub_18012F2EE @ 0x18012F2EE
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F544 @ 0x18000F544 (sub_18000F544.c)
 *     sub_180069BF8 @ 0x180069BF8 (sub_180069BF8.c)
 *     sub_18009BF4C @ 0x18009BF4C (sub_18009BF4C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F2EE(__int64 a1, __int64 a2)
{
  __int64 v3; // rax

  sub_18009BF4C(*(_QWORD *)(a2 + 32), *(_QWORD **)(a2 + 56), *(_QWORD **)(a2 + 48));
  v3 = sub_18000F544(*(_QWORD *)(a2 + 32));
  sub_180069BF8(v3, *(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 40));
  throw;
}
