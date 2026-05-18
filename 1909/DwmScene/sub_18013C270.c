/*
 * XREFs of sub_18013C270 @ 0x18013C270
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013C270()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025E380 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025E380 + 1) >= 0x1000 )
    {
      v0 = qword_18025E368 - *(_QWORD *)(qword_18025E368 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025E380 + 40);
        JUMPOUT(0x18013C2D3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025E378 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E368) = 0;
}
