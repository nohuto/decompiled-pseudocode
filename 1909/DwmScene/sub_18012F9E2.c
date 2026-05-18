/*
 * XREFs of sub_18012F9E2 @ 0x18012F9E2
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800AA0A8 @ 0x1800AA0A8 (sub_1800AA0A8.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F9E2(__int64 a1, __int64 a2)
{
  sub_1800AA0A8(*(_QWORD ***)(a2 + 64));
  throw;
}
