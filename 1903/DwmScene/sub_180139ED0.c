/*
 * XREFs of sub_180139ED0 @ 0x180139ED0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180139ED0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C530 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C530 + 1) >= 0x1000 )
    {
      v0 = qword_18025C518 - *(_QWORD *)(qword_18025C518 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C530 + 40);
        JUMPOUT(0x180139F33LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C528 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C518) = 0;
}
