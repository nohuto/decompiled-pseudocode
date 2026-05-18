/*
 * XREFs of sub_18013A980 @ 0x18013A980
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013A980()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18026BB68 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18026BB68 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18026BB50 - 8);
      if ( (unsigned __int64)(qword_18026BB50 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18026BB68 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18026BB60 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18026BB50) = 0;
}
