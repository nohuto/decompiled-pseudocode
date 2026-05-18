/*
 * XREFs of sub_18012D576 @ 0x18012D576
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038CA4 @ 0x180038CA4 (sub_180038CA4.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D576(__int64 a1, __int64 a2)
{
  sub_180038CA4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
