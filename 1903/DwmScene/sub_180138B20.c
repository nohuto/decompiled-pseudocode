/*
 * XREFs of sub_180138B20 @ 0x180138B20
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180138B20()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025C670 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C670 + 1) >= 0x1000 )
    {
      v0 = qword_18025C658[0] - *(_QWORD *)(qword_18025C658[0] - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C670 + 40);
        JUMPOUT(0x180138B83LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C668 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C658[0]) = 0;
}
