/*
 * XREFs of sub_18013B860 @ 0x18013B860
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013B860()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025E280 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025E280 + 1) >= 0x1000 )
    {
      v0 = qword_18025E268 - *(_QWORD *)(qword_18025E268 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025E280 + 40);
        JUMPOUT(0x18013B8C3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025E278 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025E268) = 0;
}
