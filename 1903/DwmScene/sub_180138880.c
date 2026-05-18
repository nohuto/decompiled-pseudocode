/*
 * XREFs of sub_180138880 @ 0x180138880
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180138880()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025C5F0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C5F0 + 1) >= 0x1000 )
    {
      v0 = qword_18025C5D8 - *(_QWORD *)(qword_18025C5D8 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C5F0 + 40);
        JUMPOUT(0x1801388E3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C5E8 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C5D8) = 0;
}
