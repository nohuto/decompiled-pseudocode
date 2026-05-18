/*
 * XREFs of sub_18013A670 @ 0x18013A670
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013A670()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D470 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D470 + 1) >= 0x1000 )
    {
      v0 = qword_18025D458 - *(_QWORD *)(qword_18025D458 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D470 + 40);
        JUMPOUT(0x18013A6D3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D468 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D458) = 0;
}
