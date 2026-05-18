/*
 * XREFs of sub_1801330DD @ 0x1801330DD
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800698A8 @ 0x1800698A8 (sub_1800698A8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801330DD(__int64 a1, __int64 a2)
{
  sub_1800698A8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
