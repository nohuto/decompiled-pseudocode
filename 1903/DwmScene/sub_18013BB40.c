/*
 * XREFs of sub_18013BB40 @ 0x18013BB40
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013BB40()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D200 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D200 + 1) >= 0x1000 )
    {
      v0 = qword_18025D1E8 - *(_QWORD *)(qword_18025D1E8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D200 + 40);
        JUMPOUT(0x18013BBA3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D1F8 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D1E8) = 0;
}
