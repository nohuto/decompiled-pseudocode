/*
 * XREFs of sub_18012CBB5 @ 0x18012CBB5
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002B79C @ 0x18002B79C (sub_18002B79C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CBB5(__int64 a1, __int64 a2)
{
  sub_18002B79C(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
