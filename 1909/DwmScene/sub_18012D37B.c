/*
 * XREFs of sub_18012D37B @ 0x18012D37B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B8AC @ 0x18002B8AC (sub_18002B8AC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D37B(__int64 a1, __int64 a2)
{
  sub_18002B8AC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
