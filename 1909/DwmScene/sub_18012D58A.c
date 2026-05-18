/*
 * XREFs of sub_18012D58A @ 0x18012D58A
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DB4 @ 0x180038DB4 (sub_180038DB4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D58A(__int64 a1, __int64 a2)
{
  sub_180038DB4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
