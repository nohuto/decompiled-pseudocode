/*
 * XREFs of sub_18013BA60 @ 0x18013BA60
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013BA60()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D340 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D340 + 1) >= 0x1000 )
    {
      v0 = qword_18025D328 - *(_QWORD *)(qword_18025D328 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D340 + 40);
        JUMPOUT(0x18013BAC3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D338 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D328) = 0;
}
