/*
 * XREFs of sub_18013A410 @ 0x18013A410
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013A410()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025C510 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C510 + 1) >= 0x1000 )
    {
      v0 = qword_18025C4F8 - *(_QWORD *)(qword_18025C4F8 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C510 + 40);
        JUMPOUT(0x18013A473LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C508 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C4F8) = 0;
}
