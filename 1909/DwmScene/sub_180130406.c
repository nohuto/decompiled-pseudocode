/*
 * XREFs of sub_180130406 @ 0x180130406
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800CB008 @ 0x1800CB008 (sub_1800CB008.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130406(__int64 a1, __int64 a2)
{
  sub_1800CB008(*(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 168));
  throw;
}
