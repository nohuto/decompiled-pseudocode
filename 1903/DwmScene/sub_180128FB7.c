/*
 * XREFs of sub_180128FB7 @ 0x180128FB7
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CCC @ 0x180038CCC (sub_180038CCC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180128FB7(__int64 a1, __int64 a2)
{
  sub_180038CCC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
