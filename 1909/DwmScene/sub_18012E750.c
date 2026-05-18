/*
 * XREFs of sub_18012E750 @ 0x18012E750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008900C @ 0x18008900C (sub_18008900C.c)
 *     sub_18008D568 @ 0x18008D568 (sub_18008D568.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18012E750(__int64 a1, __int64 *a2)
{
  sub_18008D568(a2[4], a2 + 5, a2[17]);
  sub_18008900C(a2[4], (__int64)(a2 + 7));
  throw;
}
