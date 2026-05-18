/*
 * XREFs of sub_180130B33 @ 0x180130B33
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DDC @ 0x180038DDC (sub_180038DDC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B33(__int64 a1, __int64 a2)
{
  sub_180038DDC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
