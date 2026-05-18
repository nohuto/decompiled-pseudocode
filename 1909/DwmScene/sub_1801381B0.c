/*
 * XREFs of sub_1801381B0 @ 0x1801381B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801381B0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C5F0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C5F0 + 1) >= 0x1000 )
    {
      v0 = qword_18025C5D8 - *(_QWORD *)(qword_18025C5D8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C5F0 + 40);
        JUMPOUT(0x180138213LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C5E8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025C5D8) = 0;
}
