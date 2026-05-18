/*
 * XREFs of sub_18013CA90 @ 0x18013CA90
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013CA90()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18025D858 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18025D858 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_18025D848 - *((_QWORD *)qword_18025D848 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18025D858 + 1) + 40LL);
        JUMPOUT(0x18013CAF3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18025D858 = (__int128)_mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D848) = 0;
}
