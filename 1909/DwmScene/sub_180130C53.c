/*
 * XREFs of sub_180130C53 @ 0x180130C53
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D49D8 @ 0x1800D49D8 (sub_1800D49D8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130C53(__int64 a1, __int64 a2)
{
  sub_1800D49D8(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
