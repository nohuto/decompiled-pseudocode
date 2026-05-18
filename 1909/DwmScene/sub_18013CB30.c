/*
 * XREFs of sub_18013CB30 @ 0x18013CB30
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013CB30()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025E8C0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025E8C0 + 1) >= 0x1000 )
    {
      v0 = qword_18025E8A8 - *(_QWORD *)(qword_18025E8A8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025E8C0 + 40);
        JUMPOUT(0x18013CB93LL);
      }
    }
    j_j__o_free();
  }
  unk_18025E8B8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E8A8) = 0;
}
