/*
 * XREFs of sub_18012EA04 @ 0x18012EA04
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D950 @ 0x18008D950 (sub_18008D950.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012EA04(__int64 a1, __int64 a2)
{
  sub_18008D950(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
