/*
 * XREFs of sub_180069BF8 @ 0x180069BF8
 * Callers:
 *     sub_18012CE61 @ 0x18012CE61 (sub_18012CE61.c)
 *     sub_18012CE8B @ 0x18012CE8B (sub_18012CE8B.c)
 *     sub_18012F2EE @ 0x18012F2EE (sub_18012F2EE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069BF8(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(88 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 88 * a3 + 39);
      JUMPOUT(0x180069C36LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
