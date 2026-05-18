/*
 * XREFs of sub_18012D2B3 @ 0x18012D2B3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B79C @ 0x18002B79C (sub_18002B79C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D2B3(__int64 a1, __int64 a2)
{
  sub_18002B79C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
