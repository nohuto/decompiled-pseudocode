/*
 * XREFs of sub_18012CEF3 @ 0x18012CEF3
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DFCC @ 0x18006DFCC (sub_18006DFCC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CEF3(__int64 a1, __int64 a2)
{
  sub_18006DFCC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
