/*
 * XREFs of sub_180137650 @ 0x180137650
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180137650()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C950 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C950 + 1) >= 0x1000 )
    {
      v0 = qword_18025C938 - *(_QWORD *)(qword_18025C938 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C950 + 40);
        JUMPOUT(0x1801376B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C948 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025C938) = 0;
}
