/*
 * XREFs of sub_180132E8B @ 0x180132E8B
 * Callers:
 *     <none>
 * Callees:
 *     sub_18002E10C @ 0x18002E10C (sub_18002E10C.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180132E8B(__int64 a1, __int64 a2)
{
  sub_18002E10C(*(__int64 **)(a2 + 64));
  throw;
}
