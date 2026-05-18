/*
 * XREFs of sub_18004321C @ 0x18004321C
 * Callers:
 *     sub_180042370 @ 0x180042370 (sub_180042370.c)
 *     sub_1800432AC @ 0x1800432AC (sub_1800432AC.c)
 *     sub_18009CD14 @ 0x18009CD14 (sub_18009CD14.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18004321C(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
        JUMPOUT(0x1800432A9LL);
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
