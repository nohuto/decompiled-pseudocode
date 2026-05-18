/*
 * XREFs of sub_18013470B @ 0x18013470B
 * Callers:
 *     <none>
 * Callees:
 *     sub_1801231E4 @ 0x1801231E4 (sub_1801231E4.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013470B(__int64 a1, __int64 a2)
{
  sub_1801231E4(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
