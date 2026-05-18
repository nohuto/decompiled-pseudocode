/*
 * XREFs of sub_18012CCCC @ 0x18012CCCC
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069650 @ 0x180069650 (sub_180069650.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CCCC(__int64 a1, __int64 a2)
{
  sub_180069650(*(_QWORD *)(a2 + 88), *(_QWORD *)(a2 + 80));
  throw;
}
