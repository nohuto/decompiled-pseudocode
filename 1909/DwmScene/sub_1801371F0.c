/*
 * XREFs of sub_1801371F0 @ 0x1801371F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801371F0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D130 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D130 + 1) >= 0x1000 )
    {
      v0 = qword_18025D118 - *(_QWORD *)(qword_18025D118 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D130 + 40);
        JUMPOUT(0x180137253LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D118) = 0;
}
