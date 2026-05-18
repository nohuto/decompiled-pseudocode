/*
 * XREFs of sub_18013C5C0 @ 0x18013C5C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013C5C0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D718 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D718 + 1) >= 0x1000 )
    {
      v0 = qword_18025D700 - *(_QWORD *)(qword_18025D700 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D718 + 40);
        JUMPOUT(0x18013C623LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D710 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D700) = 0;
}
