/*
 * XREFs of sub_18009DEA4 @ 0x18009DEA4
 * Callers:
 *     sub_18002D0C8 @ 0x18002D0C8 (sub_18002D0C8.c)
 * Callees:
 *     sub_18009E870 @ 0x18009E870 (sub_18009E870.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18009DEA4(__int64 a1, __int64 a2)
{
  __int64 v4; // r9
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // [rsp+28h] [rbp-40h] BYREF
  __int64 v10; // [rsp+40h] [rbp-28h]
  __int64 v11; // [rsp+50h] [rbp-18h]

  v4 = sub_18009E870(&v9, a2, 0LL, 0LL, -2LL);
  result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, a2, v4);
  v6 = v10;
  if ( v10 )
  {
    v7 = (v11 - v10) & 0xFFFFFFFFFFFFFFE0uLL;
    if ( v7 >= 0x1000 )
    {
      v8 = v7 + 39;
      v6 = *(_QWORD *)(v10 - 8);
      if ( (unsigned __int64)(v10 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, v8);
        __debugbreak();
      }
    }
    return j_j__o_free(v6);
  }
  return result;
}
