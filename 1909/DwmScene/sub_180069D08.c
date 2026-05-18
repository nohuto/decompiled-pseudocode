/*
 * XREFs of sub_180069D08 @ 0x180069D08
 * Callers:
 *     sub_18012CF71 @ 0x18012CF71 (sub_18012CF71.c)
 *     sub_18012CF9B @ 0x18012CF9B (sub_18012CF9B.c)
 *     sub_18012F3FE @ 0x18012F3FE (sub_18012F3FE.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069D08(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x180069D46LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
