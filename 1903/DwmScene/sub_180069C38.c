/*
 * XREFs of sub_180069C38 @ 0x180069C38
 * Callers:
 *     sub_18012CBFD @ 0x18012CBFD (sub_18012CBFD.c)
 *     sub_18012CC87 @ 0x18012CC87 (sub_18012CC87.c)
 *     sub_180130C62 @ 0x180130C62 (sub_180130C62.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180069C38(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(152 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 152 * a3 + 39);
      JUMPOUT(0x180069C79LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
