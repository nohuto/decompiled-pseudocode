/*
 * XREFs of sub_1800DA2DC @ 0x1800DA2DC
 * Callers:
 *     sub_1800D8B58 @ 0x1800D8B58 (sub_1800D8B58.c)
 *     sub_1800D9558 @ 0x1800D9558 (sub_1800D9558.c)
 * Callees:
 *     sub_1800676B8 @ 0x1800676B8 (sub_1800676B8.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 *__fastcall sub_1800DA2DC(_QWORD *a1)
{
  __int64 i; // rcx
  __int64 *result; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // rcx

  for ( i = a1[4]; i; i = a1[4] )
  {
    result = sub_1800676B8(*(__int64 **)(a1[1] + 8 * ((a1[2] - 1LL) & (i + a1[3] - 1LL))), 0);
    if ( a1[4]-- == 1LL )
      a1[3] = 0LL;
  }
  v5 = a1[2];
  while ( v5 )
  {
    result = (__int64 *)a1[1];
    v6 = result[--v5];
    if ( v6 )
      result = (__int64 *)j_j__o_free(v6);
  }
  v7 = a1[1];
  if ( v7 )
  {
    v8 = 8LL * a1[2];
    if ( v8 >= 0x1000 )
    {
      v9 = *(_QWORD *)(v7 - 8);
      v10 = v8 + 39;
      v11 = v7 - v9;
      if ( (unsigned __int64)(v11 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v11, v10);
        JUMPOUT(0x1800DA39ELL);
      }
      v7 = v9;
    }
    result = (__int64 *)j_j__o_free(v7);
  }
  a1[2] = 0LL;
  a1[1] = 0LL;
  return result;
}
