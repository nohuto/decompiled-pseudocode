/*
 * XREFs of sub_18012D42F @ 0x18012D42F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B89C @ 0x18002B89C (sub_18002B89C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D42F(__int64 a1, __int64 a2)
{
  sub_18002B89C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
