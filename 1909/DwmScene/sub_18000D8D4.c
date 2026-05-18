/*
 * XREFs of sub_18000D8D4 @ 0x18000D8D4
 * Callers:
 *     sub_1801282D9 @ 0x1801282D9 (sub_1801282D9.c)
 *     sub_18012EA82 @ 0x18012EA82 (sub_18012EA82.c)
 *     sub_180132811 @ 0x180132811 (sub_180132811.c)
 *     sub_1801329D2 @ 0x1801329D2 (sub_1801329D2.c)
 *     sub_180132B5E @ 0x180132B5E (sub_180132B5E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18000D8D4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(8 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 8 * a3 + 39);
      JUMPOUT(0x18000D915LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
