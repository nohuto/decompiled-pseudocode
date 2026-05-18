/*
 * XREFs of sub_1801385A0 @ 0x1801385A0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801385A0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C830 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C830 + 1) >= 0x1000 )
    {
      v0 = qword_18025C818 - *(_QWORD *)(qword_18025C818 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C830 + 40);
        JUMPOUT(0x180138603LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C828 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025C818) = 0;
}
