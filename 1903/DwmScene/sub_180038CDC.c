/*
 * XREFs of sub_180038CDC @ 0x180038CDC
 * Callers:
 *     sub_18012912B @ 0x18012912B (sub_18012912B.c)
 *     sub_1801295C9 @ 0x1801295C9 (sub_1801295C9.c)
 *     sub_180131E30 @ 0x180131E30 (sub_180131E30.c)
 *     sub_18013267D @ 0x18013267D (sub_18013267D.c)
 *     sub_180133418 @ 0x180133418 (sub_180133418.c)
 *     sub_1801339DD @ 0x1801339DD (sub_1801339DD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180038CDC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(56 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 56 * a3 + 39);
      JUMPOUT(0x180038D1ALL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
