/*
 * XREFs of sub_1800FC5E0 @ 0x1800FC5E0
 * Callers:
 *     sub_1800FB7A0 @ 0x1800FB7A0 (sub_1800FB7A0.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800FC5E0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
    v9 = 2 * ((a1[2] - v6) >> 1);
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x1800FC669LL);
      }
      v6 = v10;
    }
    j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 2 * a3;
  result = a2 + 2 * a4;
  a1[2] = result;
  return result;
}
