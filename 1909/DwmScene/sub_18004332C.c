/*
 * XREFs of sub_18004332C @ 0x18004332C
 * Callers:
 *     sub_180042480 @ 0x180042480 (sub_180042480.c)
 *     sub_1800433BC @ 0x1800433BC (sub_1800433BC.c)
 *     sub_18009CE24 @ 0x18009CE24 (sub_18009CE24.c)
 * Callees:
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_18004332C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r8
  unsigned __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 result; // rax

  v6 = *a1;
  if ( v6 )
  {
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800433B9LL);
      }
      v6 = v10;
    }
    result = j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 32 * a3;
  a1[2] = a2 + 32 * a4;
  return result;
}
