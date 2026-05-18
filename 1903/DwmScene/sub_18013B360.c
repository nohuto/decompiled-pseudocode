/*
 * XREFs of sub_18013B360 @ 0x18013B360
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013B360()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025CED0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CED0 + 1) >= 0x1000 )
    {
      v0 = qword_18025CEB8 - *(_QWORD *)(qword_18025CEB8 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CED0 + 40);
        JUMPOUT(0x18013B3C3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CEC8 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025CEB8) = 0;
}
