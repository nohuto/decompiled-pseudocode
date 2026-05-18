/*
 * XREFs of sub_18013B7C0 @ 0x18013B7C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013B7C0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D240 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D240 + 1) >= 0x1000 )
    {
      v0 = qword_18025D228 - *(_QWORD *)(qword_18025D228 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D240 + 40);
        JUMPOUT(0x18013B823LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D238 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D228) = 0;
}
