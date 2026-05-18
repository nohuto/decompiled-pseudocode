/*
 * XREFs of sub_18013BC20 @ 0x18013BC20
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_18013BC20()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025D420 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025D420 + 1) >= 0x1000 )
    {
      v0 = qword_18025D408 - *(_QWORD *)(qword_18025D408 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025D420 + 40);
        JUMPOUT(0x18013BC83LL);
      }
    }
    j_j__o_free();
  }
  unk_18025D418 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_18025D408) = 0;
}
