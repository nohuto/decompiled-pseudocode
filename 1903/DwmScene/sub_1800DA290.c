/*
 * XREFs of sub_1800DA290 @ 0x1800DA290
 * Callers:
 *     sub_180130E05 @ 0x180130E05 (sub_180130E05.c)
 *     sub_180130E2F @ 0x180130E2F (sub_180130E2F.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800DA290(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(248 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 248 * a3 + 39);
      JUMPOUT(0x1800DA2D1LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
