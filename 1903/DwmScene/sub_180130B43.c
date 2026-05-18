/*
 * XREFs of sub_180130B43 @ 0x180130B43
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D48C8 @ 0x1800D48C8 (sub_1800D48C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B43(__int64 a1, __int64 a2)
{
  sub_1800D48C8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
