/*
 * XREFs of sub_1800E33E4 @ 0x1800E33E4
 * Callers:
 *     sub_180131256 @ 0x180131256 (sub_180131256.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800E33E4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(168 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 168 * a3 + 39);
      JUMPOUT(0x1800E3425LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
