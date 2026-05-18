/*
 * XREFs of sub_18013B080 @ 0x18013B080
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013B080()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025DF70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025DF70 + 1) >= 0x1000 )
    {
      v0 = qword_18025DF58 - *(_QWORD *)(qword_18025DF58 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025DF70 + 40);
        JUMPOUT(0x18013B0E3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025DF68 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025DF58) = 0;
}
