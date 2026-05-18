/*
 * XREFs of sub_180138AE0 @ 0x180138AE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138AE0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D630 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D630 + 1) >= 0x1000 )
    {
      v0 = qword_18025D618 - *(_QWORD *)(qword_18025D618 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D630 + 40);
        JUMPOUT(0x180138B43LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D628 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025D618) = 0;
}
