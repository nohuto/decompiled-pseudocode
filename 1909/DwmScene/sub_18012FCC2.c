/*
 * XREFs of sub_18012FCC2 @ 0x18012FCC2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800698A8 @ 0x1800698A8 (sub_1800698A8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FCC2(__int64 a1, __int64 a2)
{
  sub_1800698A8(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
