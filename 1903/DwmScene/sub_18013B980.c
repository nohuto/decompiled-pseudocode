/*
 * XREFs of sub_18013B980 @ 0x18013B980
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013B980()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D300 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D300 + 1) >= 0x1000 )
    {
      v0 = qword_18025D2E8 - *(_QWORD *)(qword_18025D2E8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D300 + 40);
        JUMPOUT(0x18013B9E3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D2F8 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D2E8) = 0;
}
