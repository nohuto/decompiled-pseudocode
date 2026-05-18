/*
 * XREFs of sub_180038DEC @ 0x180038DEC
 * Callers:
 *     sub_18012923B @ 0x18012923B (sub_18012923B.c)
 *     sub_1801296D9 @ 0x1801296D9 (sub_1801296D9.c)
 *     sub_180131F40 @ 0x180131F40 (sub_180131F40.c)
 *     sub_18013278D @ 0x18013278D (sub_18013278D.c)
 *     sub_180133528 @ 0x180133528 (sub_180133528.c)
 *     sub_180133AED @ 0x180133AED (sub_180133AED.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038DEC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(56 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 56 * a3 + 39);
      JUMPOUT(0x180038E2ALL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
