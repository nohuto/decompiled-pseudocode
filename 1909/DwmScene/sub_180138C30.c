/*
 * XREFs of sub_180138C30 @ 0x180138C30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138C30()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025D670 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D670 + 1) >= 0x1000 )
    {
      v0 = qword_18025D658[0] - *(_QWORD *)(qword_18025D658[0] - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D670 + 40);
        JUMPOUT(0x180138C93LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D668 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D658[0]) = 0;
}
