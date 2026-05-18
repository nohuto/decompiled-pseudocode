/*
 * XREFs of sub_18003D6F0 @ 0x18003D6F0
 * Callers:
 *     sub_18003C314 @ 0x18003C314 (sub_18003C314.c)
 *     sub_1800F164C @ 0x1800F164C (sub_1800F164C.c)
 *     sub_18010352C @ 0x18010352C (sub_18010352C.c)
 * Callees:
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_18003D6F0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
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
    v9 = (a1[2] - v6) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v9 >= 0x1000 )
    {
      v10 = *(_QWORD *)(v6 - 8);
      v11 = v9 + 39;
      v12 = v6 - v10;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v11);
        JUMPOUT(0x18003D777LL);
      }
      v6 = v10;
    }
    j_j__o_free(v6);
  }
  *a1 = a2;
  a1[1] = a2 + 4 * a3;
  result = a2 + 4 * a4;
  a1[2] = result;
  return result;
}
