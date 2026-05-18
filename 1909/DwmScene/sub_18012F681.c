/*
 * XREFs of sub_18012F681 @ 0x18012F681
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006E0DC @ 0x18006E0DC (sub_18006E0DC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F681(__int64 a1, __int64 a2)
{
  sub_18006E0DC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
