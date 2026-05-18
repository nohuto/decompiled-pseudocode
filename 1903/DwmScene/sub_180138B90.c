/*
 * XREFs of sub_180138B90 @ 0x180138B90
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180138B90()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025C650 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C650 + 1) >= 0x1000 )
    {
      v0 = qword_18025C638[0] - *(_QWORD *)(qword_18025C638[0] - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C650 + 40);
        JUMPOUT(0x180138BF3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C648 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C638[0]) = 0;
}
