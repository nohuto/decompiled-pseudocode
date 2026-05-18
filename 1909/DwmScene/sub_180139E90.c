/*
 * XREFs of sub_180139E90 @ 0x180139E90
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180139E90()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D3F0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D3F0 + 1) >= 0x1000 )
    {
      v0 = qword_18025D3D8 - *(_QWORD *)(qword_18025D3D8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D3F0 + 40);
        JUMPOUT(0x180139EF3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D3E8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D3D8) = 0;
}
