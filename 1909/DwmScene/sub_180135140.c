/*
 * XREFs of sub_180135140 @ 0x180135140
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180135140()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180259868 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180259868 + 1) >= 0x1000 )
    {
      v0 = qword_180259850 - *(_QWORD *)(qword_180259850 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180259868 + 40);
        JUMPOUT(0x1801351A3LL);
      }
    }
    j_j__o_free();
  }
  unk_180259860 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_180259850) = 0;
}
