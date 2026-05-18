/*
 * XREFs of sub_180134FF0 @ 0x180134FF0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

void __fastcall sub_180134FF0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802596A0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802596A0 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_180259688 - 8);
      if ( (unsigned __int64)(qword_180259688 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802596A0 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_180259698 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(qword_180259688) = 0;
}
