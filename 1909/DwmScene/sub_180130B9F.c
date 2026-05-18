/*
 * XREFs of sub_180130B9F @ 0x180130B9F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D48B8 @ 0x1800D48B8 (sub_1800D48B8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B9F(__int64 a1, __int64 a2)
{
  sub_1800D48B8(*(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 88));
  throw;
}
