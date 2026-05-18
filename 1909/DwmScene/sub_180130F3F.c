/*
 * XREFs of sub_180130F3F @ 0x180130F3F
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA3A0 @ 0x1800DA3A0 (sub_1800DA3A0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130F3F(__int64 a1, __int64 a2)
{
  sub_1800DA3A0(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
