/*
 * XREFs of sub_18013B550 @ 0x18013B550
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013B550()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025DE90 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025DE90 + 1) >= 0x1000 )
    {
      v0 = qword_18025DE78 - *(_QWORD *)(qword_18025DE78 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025DE90 + 40);
        JUMPOUT(0x18013B5B3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025DE88 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025DE78) = 0;
}
