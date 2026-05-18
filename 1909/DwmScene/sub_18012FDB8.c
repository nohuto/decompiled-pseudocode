/*
 * XREFs of sub_18012FDB8 @ 0x18012FDB8
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800B2B20 @ 0x1800B2B20 (sub_1800B2B20.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012FDB8(__int64 a1, __int64 a2)
{
  sub_1800B2B20(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
