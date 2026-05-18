/*
 * XREFs of sub_1801234C4 @ 0x1801234C4
 * Callers:
 *     sub_180134AC5 @ 0x180134AC5 (sub_180134AC5.c)
 *     sub_180134B19 @ 0x180134B19 (sub_180134B19.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1801234C4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(192 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 192 * a3 + 39);
      JUMPOUT(0x180123506LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
