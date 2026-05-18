/*
 * XREFs of sub_180138920 @ 0x180138920
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138920()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025D5B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D5B0 + 1) >= 0x1000 )
    {
      v0 = qword_18025D598 - *(_QWORD *)(qword_18025D598 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D5B0 + 40);
        JUMPOUT(0x180138983LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D5A8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D598) = 0;
}
