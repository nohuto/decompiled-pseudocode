/*
 * XREFs of sub_18013A910 @ 0x18013A910
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_18013A910()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_18026BB38 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_18026BB38 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_18026BB20 - 8);
      if ( (unsigned __int64)(qword_18026BB20 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_18026BB38 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_18026BB30 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_18026BB20) = 0;
}
