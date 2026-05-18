/*
 * XREFs of sub_180138760 @ 0x180138760
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138760()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C890 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C890 + 1) >= 0x1000 )
    {
      v0 = qword_18025C878 - *(_QWORD *)(qword_18025C878 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C890 + 40);
        JUMPOUT(0x1801387C3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C888 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025C878) = 0;
}
