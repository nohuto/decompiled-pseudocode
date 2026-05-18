/*
 * XREFs of sub_18013CAC0 @ 0x18013CAC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013CAC0()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18025E898 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18025E898 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_18025E888 - *((_QWORD *)qword_18025E888 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18025E898 + 1) + 40LL);
        JUMPOUT(0x18013CB23LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18025E898 = (__int128)_mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E888) = 0;
}
