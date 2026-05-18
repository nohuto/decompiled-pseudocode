/*
 * XREFs of sub_180133AED @ 0x180133AED
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DEC @ 0x180038DEC (sub_180038DEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133AED(__int64 a1, __int64 a2)
{
  sub_180038DEC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
