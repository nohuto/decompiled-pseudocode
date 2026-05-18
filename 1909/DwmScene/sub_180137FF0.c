/*
 * XREFs of sub_180137FF0 @ 0x180137FF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180137FF0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C750 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C750 + 1) >= 0x1000 )
    {
      v0 = qword_18025C738 - *(_QWORD *)(qword_18025C738 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C750 + 40);
        JUMPOUT(0x180138053LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C748 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025C738) = 0;
}
