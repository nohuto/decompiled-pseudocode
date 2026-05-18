/*
 * XREFs of sub_180139170 @ 0x180139170
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180139170()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025CCF0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CCF0 + 1) >= 0x1000 )
    {
      v0 = qword_18025CCD8 - *(_QWORD *)(qword_18025CCD8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CCF0 + 40);
        JUMPOUT(0x1801391D3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CCE8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025CCD8) = 0;
}
