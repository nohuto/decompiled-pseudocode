/*
 * XREFs of sub_180134F50 @ 0x180134F50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180134F50()
{
  __int64 v0; // rcx

  if ( *((_QWORD *)&xmmword_180258710 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_180258710 + 1) + 1LL) >= 0x1000 )
    {
      v0 = qword_180258700 - *(_QWORD *)(qword_180258700 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_180258710 + 1) + 40LL);
        JUMPOUT(0x180134FB3LL);
      }
    }
    j_j__o_free();
  }
  xmmword_180258710 = (__int128)_mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_180258700) = 0;
}
