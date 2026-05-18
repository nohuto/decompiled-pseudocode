/*
 * XREFs of sub_180130E59 @ 0x180130E59
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800DA13C @ 0x1800DA13C (sub_1800DA13C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180130E59(__int64 a1, __int64 a2)
{
  sub_1800DA13C(*(_QWORD *)(a2 + 64), *(_QWORD *)(a2 + 56));
  throw;
}
