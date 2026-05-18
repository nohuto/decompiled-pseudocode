/*
 * XREFs of sub_180136820 @ 0x180136820
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180136820()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025BE50 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025BE50 + 1) >= 0x1000 )
    {
      v0 = qword_18025BE38 - *(_QWORD *)(qword_18025BE38 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025BE50 + 40);
        JUMPOUT(0x180136883LL);
      }
    }
    j_j__o_free();
  }
  unk_18025BE48 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025BE38) = 0;
}
