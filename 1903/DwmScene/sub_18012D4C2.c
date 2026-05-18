/*
 * XREFs of sub_18012D4C2 @ 0x18012D4C2
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B78C @ 0x18002B78C (sub_18002B78C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D4C2(__int64 a1, __int64 a2)
{
  sub_18002B78C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
