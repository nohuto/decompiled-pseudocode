/*
 * XREFs of sub_1801390D0 @ 0x1801390D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_1801390D0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025BC50 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025BC50 + 1) >= 0x1000 )
    {
      v0 = qword_18025BC38 - *(_QWORD *)(qword_18025BC38 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025BC50 + 40);
        JUMPOUT(0x180139133LL);
      }
    }
    j_j__o_free();
  }
  unk_18025BC48 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025BC38) = 0;
}
