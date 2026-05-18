/*
 * XREFs of sub_180139A00 @ 0x180139A00
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180139A00()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C270 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C270 + 1) >= 0x1000 )
    {
      v0 = qword_18025C258 - *(_QWORD *)(qword_18025C258 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C270 + 40);
        JUMPOUT(0x180139A63LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C268 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C258) = 0;
}
