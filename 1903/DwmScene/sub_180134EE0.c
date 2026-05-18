/*
 * XREFs of sub_180134EE0 @ 0x180134EE0
 * Callers:
 *     <none>
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

void __fastcall sub_180134EE0()
{
  __int64 v0; // rcx

  if ( (unsigned __int64)qword_1802586A0 >= 0x10 )
  {
    if ( (unsigned __int64)(qword_1802586A0 + 1) >= 0x1000 )
    {
      v0 = *(_QWORD *)(qword_180258688 - 8);
      if ( (unsigned __int64)(qword_180258688 - v0 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v0, qword_1802586A0 + 40);
        __debugbreak();
      }
    }
    j_j__o_free();
  }
  unk_180258698 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(qword_180258688) = 0;
}
