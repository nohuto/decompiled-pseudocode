/*
 * XREFs of sub_18013090B @ 0x18013090B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002BCA4 @ 0x18002BCA4 (sub_18002BCA4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013090B(__int64 a1, __int64 a2)
{
  sub_18002BCA4(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88), 1LL);
  throw;
}
