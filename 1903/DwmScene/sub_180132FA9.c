/*
 * XREFs of sub_180132FA9 @ 0x180132FA9
 * Callers:
 *     <none>
 * Callees:
 *     sub_18010A3A0 @ 0x18010A3A0 (sub_18010A3A0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132FA9(__int64 a1, __int64 a2)
{
  sub_18010A3A0(*(_QWORD *)(a2 + 80), *(_QWORD *)(a2 + 88));
  throw;
}
