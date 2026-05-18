/*
 * XREFs of sub_180132BD6 @ 0x180132BD6
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800F6600 @ 0x1800F6600 (sub_1800F6600.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132BD6(__int64 a1, __int64 a2)
{
  sub_1800F6600(*(__int64 **)(a2 + 64));
  throw;
}
