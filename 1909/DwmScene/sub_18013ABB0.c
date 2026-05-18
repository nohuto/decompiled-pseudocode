/*
 * XREFs of sub_18013ABB0 @ 0x18013ABB0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013ABB0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025E110 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025E110 + 1) >= 0x1000 )
    {
      v0 = qword_18025E0F8 - *(_QWORD *)(qword_18025E0F8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025E110 + 40);
        JUMPOUT(0x18013AC13LL);
      }
    }
    j_j__o_free();
  }
  unk_18025E108 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E0F8) = 0;
}
