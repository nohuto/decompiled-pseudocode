/*
 * XREFs of sub_18013A950 @ 0x18013A950
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013A950()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D170 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D170 + 1) >= 0x1000 )
    {
      v0 = qword_18025D158 - *(_QWORD *)(qword_18025D158 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D170 + 40);
        JUMPOUT(0x18013A9B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D168 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D158) = 0;
}
