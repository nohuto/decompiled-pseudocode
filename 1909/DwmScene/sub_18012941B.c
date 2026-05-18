/*
 * XREFs of sub_18012941B @ 0x18012941B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18003D888 @ 0x18003D888 (sub_18003D888.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012941B(__int64 a1, __int64 a2)
{
  sub_18003D888(*(_QWORD *)(a2 + 56), *(_QWORD *)(a2 + 48));
  throw;
}
