/*
 * XREFs of sub_18012F625 @ 0x18012F625
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800A5ABC @ 0x1800A5ABC (sub_1800A5ABC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F625(__int64 a1, __int64 a2)
{
  sub_1800A5ABC(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
