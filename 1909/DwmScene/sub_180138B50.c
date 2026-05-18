/*
 * XREFs of sub_180138B50 @ 0x180138B50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138B50()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025D710 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D710 + 1) >= 0x1000 )
    {
      v0 = qword_18025D6F8 - *(_QWORD *)(qword_18025D6F8 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D710 + 40);
        JUMPOUT(0x180138BB3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D708 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D6F8) = 0;
}
