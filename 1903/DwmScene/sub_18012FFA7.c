/*
 * XREFs of sub_18012FFA7 @ 0x18012FFA7
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B4E24 @ 0x1800B4E24 (sub_1800B4E24.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FFA7(__int64 a1, __int64 a2)
{
  sub_1800B4E24(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
