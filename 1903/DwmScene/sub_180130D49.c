/*
 * XREFs of sub_180130D49 @ 0x180130D49
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA02C @ 0x1800DA02C (sub_1800DA02C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130D49(__int64 a1, __int64 a2)
{
  sub_1800DA02C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
