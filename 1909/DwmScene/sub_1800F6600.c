/*
 * XREFs of sub_1800F6600 @ 0x1800F6600
 * Callers:
 *     sub_1800F49FC @ 0x1800F49FC (sub_1800F49FC.c)
 *     sub_1800FBAB0 @ 0x1800FBAB0 (sub_1800FBAB0.c)
 *     sub_1800FC0C4 @ 0x1800FC0C4 (sub_1800FC0C4.c)
 *     sub_180116CF8 @ 0x180116CF8 (sub_180116CF8.c)
 *     sub_18011746C @ 0x18011746C (sub_18011746C.c)
 *     sub_180132BD6 @ 0x180132BD6 (sub_180132BD6.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800F6600(__int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    v3 = 12 * ((a1[2] - v2) / 12);
    if ( v3 >= 0x1000 )
    {
      v4 = *(_QWORD *)(v2 - 8);
      v5 = v3 + 39;
      v6 = v2 - v4;
      if ( (unsigned __int64)(v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v5);
        JUMPOUT(0x1800F667ALL);
      }
      v2 = v4;
    }
    result = j_j__o_free(v2);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
