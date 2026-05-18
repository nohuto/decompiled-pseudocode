/*
 * XREFs of sub_1801350D0 @ 0x1801350D0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801350D0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180259888 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180259888 + 1) >= 0x1000 )
    {
      v0 = qword_180259870 - *(_QWORD *)(qword_180259870 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180259888 + 40);
        JUMPOUT(0x180135133LL);
      }
    }
    j_j__o_free();
  }
  unk_180259880 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_180259870) = 0;
}
