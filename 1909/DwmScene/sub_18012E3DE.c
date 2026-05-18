/*
 * XREFs of sub_18012E3DE @ 0x18012E3DE
 * Callers:
 *     <none>
 * Callees:
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E3DE(__int64 a1, __int64 a2)
{
  sub_180031EBC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
