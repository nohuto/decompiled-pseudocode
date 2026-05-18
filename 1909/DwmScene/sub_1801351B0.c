/*
 * XREFs of sub_1801351B0 @ 0x1801351B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801351B0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180259848 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180259848 + 1) >= 0x1000 )
    {
      v0 = qword_180259830 - *(_QWORD *)(qword_180259830 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180259848 + 40);
        JUMPOUT(0x180135213LL);
      }
    }
    j_j__o_free();
  }
  unk_180259840 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_180259830) = 0;
}
