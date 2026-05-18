/*
 * XREFs of sub_180138960 @ 0x180138960
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180138960()
{
  size_t v0; // rcx

  if ( (unsigned __int64)qword_18025C690 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025C690 + 1) >= 0x1000 )
    {
      v0 = qword_18025C678 - *(_QWORD *)(qword_18025C678 - 8);
      if ( v0 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025C690 + 40);
        JUMPOUT(0x1801389C3LL);
      }
    }
    j_j__o_free();
  }
  unk_18025C688 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025C678) = 0;
}
