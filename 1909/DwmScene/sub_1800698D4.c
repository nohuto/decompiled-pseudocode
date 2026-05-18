/*
 * XREFs of sub_1800698D4 @ 0x1800698D4
 * Callers:
 *     sub_1800671B0 @ 0x1800671B0 (sub_1800671B0.c)
 *     sub_1800672C8 @ 0x1800672C8 (sub_1800672C8.c)
 *     sub_180068CE0 @ 0x180068CE0 (sub_180068CE0.c)
 *     ??1?$_Func_impl@U?$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V?$allocator@V?$_Func_class@V?$task@_N@Concurrency@@_N@std@@@2@V?$task@_N@Concurrency@@_N@std@@UEAA@XZ @ 0x1800D6704 (--1-$_Func_impl@U-$_Callable_obj@V_lambda_8b695f9820225e821433c25f6ed27cb8_@@$0A@@std@@V-$alloca.c)
 * Callees:
 *     sub_180069F04 @ 0x180069F04 (sub_180069F04.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 */

__int64 __fastcall sub_1800698D4(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v3; // rbp
  unsigned __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 result; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = *a1;
  if ( *a1 )
  {
    v3 = a1[1];
    if ( v1 != v3 )
    {
      do
      {
        sub_180069F04(v1 + 136, v8, **(_QWORD **)(v1 + 136));
        j_j__o_free(*(_QWORD *)(v1 + 136));
        v1 += 152LL;
      }
      while ( v1 != v3 );
      v1 = *a1;
    }
    v4 = 152 * ((a1[2] - v1) / 152);
    if ( v4 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v1 - 8);
      v6 = v4 + 39;
      if ( (unsigned __int64)(v1 - v5 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v6);
        JUMPOUT(0x1800699B1LL);
      }
      v1 = *(_QWORD *)(v1 - 8);
    }
    result = j_j__o_free(v1);
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
  }
  return result;
}
