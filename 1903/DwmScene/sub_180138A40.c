/*
 * XREFs of sub_180138A40 @ 0x180138A40
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180138A40()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025C710 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C710 + 1) >= 0x1000 )
    {
      v0 = qword_18025C6F8 - *(_QWORD *)(qword_18025C6F8 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C710 + 40);
        JUMPOUT(0x180138AA3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C708 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C6F8) = 0;
}
