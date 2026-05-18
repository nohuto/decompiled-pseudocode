/*
 * XREFs of sub_180139B10 @ 0x180139B10
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180139B10()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D270 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D270 + 1) >= 0x1000 )
    {
      v0 = qword_18025D258 - *(_QWORD *)(qword_18025D258 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D270 + 40);
        JUMPOUT(0x180139B73LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D268 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D258) = 0;
}
