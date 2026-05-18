/*
 * XREFs of sub_18012CF3B @ 0x18012CF3B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DED8 @ 0x18006DED8 (sub_18006DED8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CF3B(__int64 a1, __int64 a2)
{
  sub_18006DED8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
