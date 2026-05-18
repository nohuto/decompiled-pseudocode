/*
 * XREFs of sub_180130B57 @ 0x180130B57
 * Callers:
 *     <none>
 * Callees:
 *     sub_18007E58C @ 0x18007E58C (sub_18007E58C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B57(__int64 a1, __int64 a2)
{
  sub_18007E58C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
