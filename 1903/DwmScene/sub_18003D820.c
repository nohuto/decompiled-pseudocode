/*
 * XREFs of sub_18003D820 @ 0x18003D820
 * Callers:
 *     sub_1801292E3 @ 0x1801292E3 (sub_1801292E3.c)
 *     sub_180132729 @ 0x180132729 (sub_180132729.c)
 *     sub_180132E2B @ 0x180132E2B (sub_180132E2B.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_18003D820(__int64 a1, __int64 a2, __int64 a3)
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
      JUMPOUT(0x18003D861LL);
    }
    v3 = *(_QWORD *)(a2 - 8);
  }
  return j_j__o_free(v3);
}
