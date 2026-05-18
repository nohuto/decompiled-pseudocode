/*
 * XREFs of sub_1800F65DC @ 0x1800F65DC
 * Callers:
 *     sub_1801328F2 @ 0x1801328F2 (sub_1801328F2.c)
 *     sub_180132A76 @ 0x180132A76 (sub_180132A76.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800F65DC(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx

  v3 = a2;
  if ( (unsigned __int64)(12 * a3) >= 0x1000 )
  {
    v4 = *(_QWORD *)(a2 - 8);
    if ( (unsigned __int64)(a2 - v4 - 8) > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v4, 12 * a3 + 39);
      JUMPOUT(0x1800F661ELL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
