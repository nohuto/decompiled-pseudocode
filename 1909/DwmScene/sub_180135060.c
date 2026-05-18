/*
 * XREFs of sub_180135060 @ 0x180135060
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180135060()
{
  __int64 v0; // rcx

  if ( *((_QWORD *)&xmmword_180259710 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180259710 + 1) + 1LL) >= 0x1000 )
    {
      v0 = qword_180259700 - *(_QWORD *)(qword_180259700 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180259710 + 1) + 40LL);
        JUMPOUT(0x1801350C3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180259710 = (__int128)_mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_180259700) = 0;
}
