/*
 * XREFs of sub_1801396B0 @ 0x1801396B0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_1801396B0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025CB70 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CB70 + 1) >= 0x1000 )
    {
      v0 = qword_18025CB58 - *(_QWORD *)(qword_18025CB58 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CB70 + 40);
        JUMPOUT(0x180139713LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CB68 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025CB58) = 0;
}
