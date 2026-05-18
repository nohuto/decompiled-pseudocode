/*
 * XREFs of sub_18012D51E @ 0x18012D51E
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E0E0 @ 0x18007E0E0 (sub_18007E0E0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D51E(__int64 a1, __int64 a2)
{
  sub_18007E0E0(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
