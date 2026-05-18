/*
 * XREFs of sub_18013036F @ 0x18013036F
 * Callers:
 *     <none>
 * Callees:
 *     sub_18008D458 @ 0x18008D458 (sub_18008D458.c)
 *     sub_1800CB3A0 @ 0x1800CB3A0 (sub_1800CB3A0.c)
 *     _CxxThrowException @ 0x180125A78 (_CxxThrowException.c)
 */

void __fastcall __noreturn sub_18013036F(__int64 a1, __int64 *a2)
{
  __int64 **v3; // rax

  v3 = (__int64 **)sub_18008D458(a2[4], a2 + 5, a2[5]);
  sub_1800CB3A0((_QWORD *)a2[4], a2 + 7, *v3);
  throw;
}
