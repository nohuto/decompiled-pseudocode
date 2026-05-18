/*
 * XREFs of sub_180069D8C @ 0x180069D8C
 * Callers:
 *     sub_18010DDE0 @ 0x18010DDE0 (sub_18010DDE0.c)
 *     sub_18012CD52 @ 0x18012CD52 (sub_18012CD52.c)
 *     sub_18012D24A @ 0x18012D24A (sub_18012D24A.c)
 *     sub_18012D29E @ 0x18012D29E (sub_18012D29E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069D8C(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(a3 << 6) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, a2);
      JUMPOUT(0x180069DCDLL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
