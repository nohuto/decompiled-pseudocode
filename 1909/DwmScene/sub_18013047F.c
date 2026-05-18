/*
 * XREFs of sub_18013047F @ 0x18013047F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D568 @ 0x18008D568 (sub_18008D568.c)
 *     sub_1800CB4B0 @ 0x1800CB4B0 (sub_1800CB4B0.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013047F(__int64 a1, __int64 *a2)
{
  __int64 **v3; // rax

  v3 = (__int64 **)sub_18008D568(a2[4], a2 + 5, a2[5]);
  sub_1800CB4B0((_QWORD *)a2[4], a2 + 7, *v3);
  throw;
}
