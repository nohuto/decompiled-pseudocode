/*
 * XREFs of sub_180134FC0 @ 0x180134FC0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180134FC0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_180258888 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_180258888 + 1) >= 0x1000 )
    {
      v0 = qword_180258870 - *(_QWORD *)(qword_180258870 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_180258888 + 40);
        JUMPOUT(0x180135023LL);
      }
    }
    j_j__o_free();
  }
  unk_180258880 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_180258870) = 0;
}
