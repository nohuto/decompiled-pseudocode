/*
 * XREFs of sub_18013A7C0 @ 0x18013A7C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013A7C0()
{
  __int64 v0; // rcx

  if ( *((_QWORD *)&xmmword_18025DD10 + 1) >= 0x10uLL )
  {
    if ( (unsigned __int64)(*((_QWORD *)&xmmword_18025DD10 + 1) + 1LL) >= 0x1000 )
    {
      v0 = qword_18025DD00 - *(_QWORD *)(qword_18025DD00 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, *((_QWORD *)&xmmword_18025DD10 + 1) + 40LL);
        JUMPOUT(0x18013A823LL);
      }
    }
    j_j__o_free();
  }
  xmmword_18025DD10 = (__int128)_mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025DD00) = 0;
}
