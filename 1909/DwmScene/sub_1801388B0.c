/*
 * XREFs of sub_1801388B0 @ 0x1801388B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801388B0()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025D5D0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D5D0 + 1) >= 0x1000 )
    {
      v0 = qword_18025D5B8 - *(_QWORD *)(qword_18025D5B8 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D5D0 + 40);
        JUMPOUT(0x180138913LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D5C8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D5B8) = 0;
}
