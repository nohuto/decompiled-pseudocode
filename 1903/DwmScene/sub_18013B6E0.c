/*
 * XREFs of sub_18013B6E0 @ 0x18013B6E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013B6E0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D260 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D260 + 1) >= 0x1000 )
    {
      v0 = qword_18025D248 - *(_QWORD *)(qword_18025D248 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D260 + 40);
        JUMPOUT(0x18013B743LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D258 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D248) = 0;
}
