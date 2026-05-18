/*
 * XREFs of sub_18002B854 @ 0x18002B854
 * Callers:
 *     sub_180027EA8 @ 0x180027EA8 (sub_180027EA8.c)
 * Callees:
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18002B854(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  _QWORD *v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-40h]
  __int64 v11; // [rsp+40h] [rbp-38h]
  _QWORD *v12; // [rsp+48h] [rbp-30h]

  v11 = -2LL;
  v12 = a3;
  if ( a3[2] )
    std::string::append(a3, &unk_18014B9E8, 2uLL);
  (*(void (__fastcall **)(_QWORD, _QWORD *, _QWORD))(**((_QWORD **)a2 + 1) + 16LL))(*((_QWORD *)a2 + 1), v9, *a2);
  v6 = v9;
  if ( v10 >= 0x10 )
    v6 = (_QWORD *)v9[0];
  std::string::append(a3, v6, v9[2]);
  if ( v10 >= 0x10 )
  {
    v7 = v9[0];
    if ( v10 + 1 >= 0x1000 )
    {
      v7 = *(_QWORD *)(v9[0] - 8LL);
      if ( (unsigned __int64)(v9[0] - v7 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v7, v10 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v7);
  }
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_OWORD *)a1 = *(_OWORD *)a3;
  *(_OWORD *)(a1 + 16) = *((_OWORD *)a3 + 1);
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  a3[2] = 0LL;
  a3[3] = 15LL;
  *(_BYTE *)a3 = 0;
  return a1;
}
