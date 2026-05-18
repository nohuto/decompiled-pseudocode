/*
 * XREFs of sub_1800D49D8 @ 0x1800D49D8
 * Callers:
 *     sub_180130C53 @ 0x180130C53 (sub_180130C53.c)
 *     sub_180130C7D @ 0x180130C7D (sub_180130C7D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800D49D8(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x1800D4A16LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
