/*
 * XREFs of sub_180139B50 @ 0x180139B50
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180139B50()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C1B0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C1B0 + 1) >= 0x1000 )
    {
      v0 = qword_18025C198 - *(_QWORD *)(qword_18025C198 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C1B0 + 40);
        JUMPOUT(0x180139BB3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C1A8 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C198) = 0;
}
