/*
 * XREFs of sub_180132FF1 @ 0x180132FF1
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A354 @ 0x18010A354 (sub_18010A354.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132FF1(__int64 a1, __int64 a2)
{
  sub_18010A354(*(_QWORD *)(a2 + 72), *(_QWORD *)(a2 + 64));
  throw;
}
