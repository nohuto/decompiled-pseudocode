/*
 * XREFs of sub_18013B4E0 @ 0x18013B4E0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013B4E0()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025DE70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025DE70 + 1) >= 0x1000 )
    {
      v0 = qword_18025DE58 - *(_QWORD *)(qword_18025DE58 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025DE70 + 40);
        JUMPOUT(0x18013B543LL);
      }
    }
    j_j__o_free();
  }
  unk_18025DE68 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025DE58) = 0;
}
