/*
 * XREFs of sub_18002BB94 @ 0x18002BB94
 * Callers:
 *     sub_180128AEA @ 0x180128AEA (sub_180128AEA.c)
 *     sub_180128B3E @ 0x180128B3E (sub_180128B3E.c)
 *     sub_18012FC1E @ 0x18012FC1E (sub_18012FC1E.c)
 *     sub_18012FCF0 @ 0x18012FCF0 (sub_18012FCF0.c)
 *     sub_180130253 @ 0x180130253 (sub_180130253.c)
 *     sub_18013027D @ 0x18013027D (sub_18013027D.c)
 *     sub_1801307FB @ 0x1801307FB (sub_1801307FB.c)
 *     sub_180130D07 @ 0x180130D07 (sub_180130D07.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18002BB94(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(48 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 48 * a3 + 39);
      JUMPOUT(0x18002BBD6LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
