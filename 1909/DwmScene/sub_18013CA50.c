/*
 * XREFs of sub_18013CA50 @ 0x18013CA50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013CA50()
{
  char *v0; // rcx

  if ( *((_QWORD *)&xmmword_18025E838 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18025E838 + 1) + 1LL) >= 0x1000 )
    {
      v0 = (char *)qword_18025E828 - *((_QWORD *)qword_18025E828 - 1);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18025E838 + 1) + 40LL);
        JUMPOUT(0x18013CAB3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18025E838 = (__int128)_mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E828) = 0;
}
