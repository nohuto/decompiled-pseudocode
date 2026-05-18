/*
 * XREFs of sub_180133B73 @ 0x180133B73
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D249C @ 0x1800D249C (sub_1800D249C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133B73(__int64 a1, __int64 a2)
{
  sub_1800D249C(a2 + 96, *(_QWORD *)(a2 + 32));
  throw;
}
