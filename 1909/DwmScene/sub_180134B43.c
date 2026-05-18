/*
 * XREFs of sub_180134B43 @ 0x180134B43
 * Callers:
 *     <none>
 * Callees:
 *     sub_180123340 @ 0x180123340 (sub_180123340.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134B43(__int64 a1, __int64 a2)
{
  sub_180123340(*(_QWORD **)(a2 + 64));
  throw;
}
