/*
 * XREFs of sub_18003D930 @ 0x18003D930
 * Callers:
 *     sub_1801293F3 @ 0x1801293F3 (sub_1801293F3.c)
 *     sub_180132839 @ 0x180132839 (sub_180132839.c)
 *     sub_180132F3B @ 0x180132F3B (sub_180132F3B.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003D930(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(4 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 4 * a3 + 39);
      JUMPOUT(0x18003D971LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
