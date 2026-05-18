/*
 * XREFs of sub_180139AE0 @ 0x180139AE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180139AE0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C230 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C230 + 1) >= 0x1000 )
    {
      v0 = qword_18025C218 - *(_QWORD *)(qword_18025C218 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C230 + 40);
        JUMPOUT(0x180139B43LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C228 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C218) = 0;
}
