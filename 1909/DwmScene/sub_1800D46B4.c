/*
 * XREFs of sub_1800D46B4 @ 0x1800D46B4
 * Callers:
 *     sub_180045920 @ 0x180045920 (sub_180045920.c)
 *     sub_180056E7C @ 0x180056E7C (sub_180056E7C.c)
 *     sub_180057878 @ 0x180057878 (sub_180057878.c)
 *     sub_18005DBD8 @ 0x18005DBD8 (sub_18005DBD8.c)
 *     sub_18005DFE4 @ 0x18005DFE4 (sub_18005DFE4.c)
 *     sub_18005E510 @ 0x18005E510 (sub_18005E510.c)
 *     sub_18006079C @ 0x18006079C (sub_18006079C.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     sub_1800D4190 @ 0x1800D4190 (sub_1800D4190.c)
 *     sub_1800D43B0 @ 0x1800D43B0 (sub_1800D43B0.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall sub_1800D46B4(__int64 *a1, __int64 a2)
{
  __int64 v4; // rax
  size_t v5; // rcx
  volatile signed __int32 *v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-60h] BYREF
  volatile signed __int32 *v15; // [rsp+28h] [rbp-58h]
  size_t *v16; // [rsp+30h] [rbp-50h]
  size_t v17[3]; // [rsp+38h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+58h] [rbp-28h]
  _QWORD v20[3]; // [rsp+60h] [rbp-20h] BYREF

  v19 = -2LL;
  v20[2] = a1;
  v14 = 0LL;
  v15 = 0LL;
  sub_1800D43B0(&v14, *(_DWORD *)(a2 + 20));
  v17[2] = 0LL;
  v18 = 0LL;
  sub_18000F444(v17, (__int64)a1);
  v16 = v17;
  sub_1800D4190((__int64 *)(v14 + 16), (__int64)v20, v17);
  v4 = v20[0];
  *(_OWORD *)(v20[0] + 64LL) = *(_OWORD *)a2;
  *(_OWORD *)(v4 + 80) = *(_OWORD *)(a2 + 16);
  if ( v18 >= 0x10 )
  {
    v5 = v17[0];
    if ( v18 + 1 >= 0x1000 )
    {
      v5 = *(_QWORD *)(v17[0] - 8);
      if ( v17[0] - v5 - 8 > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v5, v18 + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v5);
  }
  if ( v15 )
  {
    if ( _InterlockedExchangeAdd(v15 + 2, 0xFFFFFFFF) == 1 )
    {
      v6 = v15;
      (**(void (__fastcall ***)(volatile signed __int32 *))v15)(v15);
      if ( _InterlockedExchangeAdd(v6 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v15 + 8LL))(v15);
    }
  }
  v7 = a1[3];
  if ( v7 >= 0x10 )
  {
    v8 = v7 + 1;
    v9 = *a1;
    if ( v8 >= 0x1000 )
    {
      v10 = v8 + 39;
      v11 = *(_QWORD *)(v9 - 8);
      v12 = v9 - v11;
      if ( (unsigned __int64)(v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, v10);
        JUMPOUT(0x1800D483DLL);
      }
      v9 = v11;
    }
    j_j__o_free(v9);
  }
  a1[2] = 0LL;
  a1[3] = 15LL;
  *(_BYTE *)a1 = 0;
  return 1;
}
