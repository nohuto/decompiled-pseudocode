/*
 * XREFs of sub_180133A63 @ 0x180133A63
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800D238C @ 0x1800D238C (sub_1800D238C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180133A63(__int64 a1, __int64 a2)
{
  sub_1800D238C(a2 + 96, *(_QWORD *)(a2 + 32));
  throw;
}
