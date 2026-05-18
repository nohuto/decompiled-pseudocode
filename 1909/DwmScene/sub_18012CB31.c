/*
 * XREFs of sub_18012CB31 @ 0x18012CB31
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800646D8 @ 0x1800646D8 (sub_1800646D8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CB31(__int64 a1, __int64 a2)
{
  sub_1800646D8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
