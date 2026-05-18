/*
 * XREFs of sub_18013B400 @ 0x18013B400
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013B400()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025DEB0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025DEB0 + 1) >= 0x1000 )
    {
      v0 = qword_18025DE98 - *(_QWORD *)(qword_18025DE98 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025DEB0 + 40);
        JUMPOUT(0x18013B463LL);
      }
    }
    j_j__o_free();
  }
  unk_18025DEA8 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025DE98) = 0;
}
