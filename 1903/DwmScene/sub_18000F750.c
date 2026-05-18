/*
 * XREFs of sub_18000F750 @ 0x18000F750
 * Callers:
 *     sub_18012795E @ 0x18012795E (sub_18012795E.c)
 *     sub_180127A95 @ 0x180127A95 (sub_180127A95.c)
 *     sub_180127B46 @ 0x180127B46 (sub_180127B46.c)
 *     sub_1801281F1 @ 0x1801281F1 (sub_1801281F1.c)
 *     sub_180128CCD @ 0x180128CCD (sub_180128CCD.c)
 *     sub_180128F61 @ 0x180128F61 (sub_180128F61.c)
 *     sub_18012C9A1 @ 0x18012C9A1 (sub_18012C9A1.c)
 *     sub_18012D38D @ 0x18012D38D (sub_18012D38D.c)
 *     sub_18012D5E2 @ 0x18012D5E2 (sub_18012D5E2.c)
 *     sub_180132922 @ 0x180132922 (sub_180132922.c)
 *     sub_180132E5B @ 0x180132E5B (sub_180132E5B.c)
 *     sub_180132F4F @ 0x180132F4F (sub_180132F4F.c)
 *     sub_18013426F @ 0x18013426F (sub_18013426F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000F750(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(16 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x18000F791LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
