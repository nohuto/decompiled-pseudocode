/*
 * XREFs of sub_18012923B @ 0x18012923B
 * Callers:
 *     <none>
 * Callees:
 *     sub_180038DEC @ 0x180038DEC (sub_180038DEC.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012923B(__int64 a1, __int64 a2)
{
  sub_180038DEC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72), 1LL);
  throw;
}
