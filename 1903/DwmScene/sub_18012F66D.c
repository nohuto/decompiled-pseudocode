/*
 * XREFs of sub_18012F66D @ 0x18012F66D
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CA4 @ 0x180038CA4 (sub_180038CA4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F66D(__int64 a1, __int64 a2)
{
  sub_180038CA4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
