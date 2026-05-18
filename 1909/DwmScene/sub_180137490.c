/*
 * XREFs of sub_180137490 @ 0x180137490
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180137490()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D050 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D050 + 1) >= 0x1000 )
    {
      v0 = qword_18025D038 - *(_QWORD *)(qword_18025D038 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D050 + 40);
        JUMPOUT(0x1801374F3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D048 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D038) = 0;
}
