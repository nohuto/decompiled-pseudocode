/*
 * XREFs of sub_180139990 @ 0x180139990
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180139990()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C250 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C250 + 1) >= 0x1000 )
    {
      v0 = qword_18025C238 - *(_QWORD *)(qword_18025C238 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C250 + 40);
        JUMPOUT(0x1801399F3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C248 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C238) = 0;
}
