/*
 * XREFs of sub_180139950 @ 0x180139950
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180139950()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D590 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D590 + 1) >= 0x1000 )
    {
      v0 = qword_18025D578 - *(_QWORD *)(qword_18025D578 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D590 + 40);
        JUMPOUT(0x1801399B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D588 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D578) = 0;
}
