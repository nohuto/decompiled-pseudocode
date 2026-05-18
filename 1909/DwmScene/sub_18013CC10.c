/*
 * XREFs of sub_18013CC10 @ 0x18013CC10
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013CC10()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18025E878 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18025E878 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_18025E868 - *((_QWORD *)qword_18025E868 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18025E878 + 1) + 40LL);
        JUMPOUT(0x18013CC73LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18025E878 = (__int128)_mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E868) = 0;
}
