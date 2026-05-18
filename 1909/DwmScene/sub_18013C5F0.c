/*
 * XREFs of sub_18013C5F0 @ 0x18013C5F0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013C5F0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025E630 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025E630 + 1) >= 0x1000 )
    {
      v0 = qword_18025E618 - *(_QWORD *)(qword_18025E618 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025E630 + 40);
        JUMPOUT(0x18013C653LL);
      }
    }
    j_j__o_free();
  }
  unk_18025E628 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E618) = 0;
}
