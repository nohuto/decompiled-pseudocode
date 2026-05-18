/*
 * XREFs of sub_18012D28F @ 0x18012D28F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18006DFCC @ 0x18006DFCC (sub_18006DFCC.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012D28F(__int64 a1, __int64 a2)
{
  sub_18006DFCC(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 88));
  throw;
}
