/*
 * XREFs of sub_18012CB91 @ 0x18012CB91
 * Callers:
 *     <none>
 * Callees:
 *     sub_180069798 @ 0x180069798 (sub_180069798.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012CB91(__int64 a1, __int64 a2)
{
  sub_180069798(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
