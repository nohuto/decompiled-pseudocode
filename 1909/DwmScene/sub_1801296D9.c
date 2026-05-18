/*
 * XREFs of sub_1801296D9 @ 0x1801296D9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DEC @ 0x180038DEC (sub_180038DEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801296D9(__int64 a1, __int64 a2)
{
  sub_180038DEC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
