/*
 * XREFs of sub_1801392C0 @ 0x1801392C0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801392C0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025CC90 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CC90 + 1) >= 0x1000 )
    {
      v0 = qword_18025CC78 - *(_QWORD *)(qword_18025CC78 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CC90 + 40);
        JUMPOUT(0x180139323LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CC88 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025CC78) = 0;
}
