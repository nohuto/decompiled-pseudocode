/*
 * XREFs of sub_180130B6D @ 0x180130B6D
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D48C8 @ 0x1800D48C8 (sub_1800D48C8.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130B6D(__int64 a1, __int64 a2)
{
  sub_1800D48C8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
