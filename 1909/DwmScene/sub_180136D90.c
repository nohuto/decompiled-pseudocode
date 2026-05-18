/*
 * XREFs of sub_180136D90 @ 0x180136D90
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180136D90()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025CE90 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CE90 + 1) >= 0x1000 )
    {
      v0 = qword_18025CE78 - *(_QWORD *)(qword_18025CE78 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CE90 + 40);
        JUMPOUT(0x180136DF3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CE88 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025CE78) = 0;
}
