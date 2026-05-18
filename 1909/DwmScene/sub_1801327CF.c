/*
 * XREFs of sub_1801327CF @ 0x1801327CF
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800264AC @ 0x1800264AC (sub_1800264AC.c)
 *     sub_1800F3BE0 @ 0x1800F3BE0 (sub_1800F3BE0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_1801327CF(__int64 a1, __int64 *a2)
{
  sub_1800F3BE0(a2[16], a2[19], a2[5]);
  sub_1800264AC(a2[16], a2[6], a2[4]);
  throw;
}
