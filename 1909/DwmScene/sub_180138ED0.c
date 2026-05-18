/*
 * XREFs of sub_180138ED0 @ 0x180138ED0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180138ED0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18025CD90 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18025CD90 + 1) >= 0x1000 )
    {
      v0 = qword_18025CD78 - *(_QWORD *)(qword_18025CD78 - 8);
      if ( (unsigned __int64)(v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18025CD90 + 40);
        JUMPOUT(0x180138F33LL);
      }
    }
    j_j__o_free();
  }
  unk_18025CD88 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18025CD78) = 0;
}
