/*
 * XREFs of sub_18012F5B9 @ 0x18012F5B9
 * Callers:
 *     <none>
 * Callees:
 *     sub_180025E98 @ 0x180025E98 (sub_180025E98.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012F5B9(__int64 a1, __int64 a2)
{
  sub_180025E98(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 72));
  throw;
}
