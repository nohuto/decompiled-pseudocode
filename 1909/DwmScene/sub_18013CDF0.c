/*
 * XREFs of sub_18013CDF0 @ 0x18013CDF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013CDF0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025EA48 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025EA48 + 1) >= 0x1000 )
    {
      v0 = qword_18025EA30 - *(_QWORD *)(qword_18025EA30 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025EA48 + 40);
        JUMPOUT(0x18013CE53LL);
      }
    }
    j_j__o_free();
  }
  unk_18025EA40 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025EA30) = 0;
}
