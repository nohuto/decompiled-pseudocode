/*
 * XREFs of sub_1800A29F4 @ 0x1800A29F4
 * Callers:
 *     sub_1800A148C @ 0x1800A148C (sub_1800A148C.c)
 *     sub_1800A5ABC @ 0x1800A5ABC (sub_1800A5ABC.c)
 *     sub_1800A5B04 @ 0x1800A5B04 (sub_1800A5B04.c)
 *     sub_1800A5C38 @ 0x1800A5C38 (sub_1800A5C38.c)
 *     sub_1800A5E9C @ 0x1800A5E9C (sub_1800A5E9C.c)
 * Callees:
 *     sub_1800A2BC0 @ 0x1800A2BC0 (sub_1800A2BC0.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800A29F4(__int64 *a1)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx

  result = sub_1800A2BC0(a1 + 4);
  v3 = a1[3];
  if ( v3 >= 0x10 )
  {
    v4 = *a1;
    v5 = v3 + 1;
    if ( v5 >= 0x1000 )
    {
      v6 = *(_QWORD *)(v4 - 8);
      v7 = v5 + 39;
      v8 = v4 - v6;
      if ( (unsigned __int64)(v8 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v8, v7);
        JUMPOUT(0x1800A2A58LL);
      }
      v4 = v6;
    }
    result = j_j__o_free(v4);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
