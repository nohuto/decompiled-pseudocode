/*
 * XREFs of sub_180134664 @ 0x180134664
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D568 @ 0x18008D568 (sub_18008D568.c)
 *     sub_180121D9C @ 0x180121D9C (sub_180121D9C.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_180134664(__int64 a1, __int64 *a2)
{
  sub_18008D568(a2[4], a2 + 6, a2[21]);
  sub_180121D9C(a2[4], (__int64)(a2 + 7));
  throw;
}
