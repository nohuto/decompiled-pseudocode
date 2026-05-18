/*
 * XREFs of sub_1800DD73C @ 0x1800DD73C
 * Callers:
 *     sub_1800AC720 @ 0x1800AC720 (sub_1800AC720.c)
 *     sub_1800C9428 @ 0x1800C9428 (sub_1800C9428.c)
 * Callees:
 *     sub_18000DC70 @ 0x18000DC70 (sub_18000DC70.c)
 *     sub_18000E00C @ 0x18000E00C (sub_18000E00C.c)
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F65C (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180056944 @ 0x180056944 (sub_180056944.c)
 *     sub_1800644E4 @ 0x1800644E4 (sub_1800644E4.c)
 *     sub_180064C9C @ 0x180064C9C (sub_180064C9C.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ceilf @ 0x1801271CE (ceilf.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall sub_1800DD73C(__int64 a1, __int64 *a2, int a3)
{
  __int64 v5; // r15
  __int64 *v6; // rsi
  __int64 v7; // rax
  volatile signed __int32 *v8; // rbx
  float v9; // xmm6_4
  int v10; // ebx
  int v11; // r12d
  const void **v12; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 Src_8; // [rsp+40h] [rbp-91h] BYREF
  __m128i si128; // [rsp+50h] [rbp-81h]
  __int64 v21; // [rsp+60h] [rbp-71h] BYREF
  volatile signed __int32 *v22; // [rsp+68h] [rbp-69h]
  _QWORD v23[2]; // [rsp+70h] [rbp-61h] BYREF
  __m128i v24; // [rsp+80h] [rbp-51h]
  __int64 v25[5]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v26; // [rsp+B8h] [rbp-19h] BYREF
  __int128 v27; // [rsp+C8h] [rbp-9h]

  v25[4] = -2LL;
  v5 = a3;
  v6 = (__int64 *)(a1 + 16 * (a3 + 5LL));
  if ( !*v6 )
  {
    v7 = sub_18006CD84(*(_QWORD *)(a1 + 32));
    sub_18000DC70(v7, &v21, 0);
    std::shared_ptr<__ExceptionPtr>::operator=(v6, &v21);
    v8 = v22;
    if ( v22 )
    {
      if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
        if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      }
    }
    v9 = (float)*(int *)(a1 + 12) / flt_1801F8038[v5];
    v10 = (int)ceilf((float)*(int *)(a1 + 8) / flt_1801F8038[v5]);
    v11 = (int)ceilf(v9);
    if ( v10 < 1 )
      v10 = 1;
    if ( v11 < 1 )
      v11 = 1;
    sub_18000E00C(v23, (int)flt_1801F8038[v5]);
    v12 = sub_180056944(v23, 0LL, "ImageProcessing Scaled ", 0x17uLL);
    si128 = 0LL;
    Src_8 = *(_OWORD *)v12;
    si128 = *((__m128i *)v12 + 1);
    v12[2] = 0LL;
    v12[3] = (const void *)15;
    *(_BYTE *)v12 = 0;
    v13 = std::string::append(&Src_8, "x", 1uLL);
    v26 = *(_OWORD *)v13;
    v27 = *((_OWORD *)v13 + 1);
    v13[2] = 0LL;
    v13[3] = 15LL;
    *(_BYTE *)v13 = 0;
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v14 = Src_8;
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = *(_QWORD *)(Src_8 - 8);
        if ( (unsigned __int64)(Src_8 - v14 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v14, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v14);
    }
    si128 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(Src_8) = 0;
    if ( v24.m128i_i64[1] >= 0x10uLL )
    {
      v15 = v23[0];
      if ( (unsigned __int64)(v24.m128i_i64[1] + 1) >= 0x1000 )
      {
        v15 = *(_QWORD *)(v23[0] - 8LL);
        if ( (unsigned __int64)(v23[0] - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, v24.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v15);
    }
    v24 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v23[0]) = 0;
    v25[2] = 0LL;
    v25[3] = 0LL;
    sub_18000F3F4(v25, (__int64)&v26);
    sub_1800644E4(*v6, v25);
    sub_180064C9C(*v6, v10, v11, *(_DWORD *)(a1 + 20), *(_DWORD *)(a1 + 28) & 0xFFFFFFBF, *(_QWORD *)(a1 + 32));
    if ( *((_QWORD *)&v27 + 1) >= 0x10uLL )
    {
      v16 = v26;
      if ( (unsigned __int64)(*((_QWORD *)&v27 + 1) + 1LL) >= 0x1000 )
      {
        v16 = *(_QWORD *)(v26 - 8);
        if ( (unsigned __int64)(v26 - v16 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v16, *((_QWORD *)&v27 + 1) + 40LL);
          __debugbreak();
        }
      }
      j_j__o_free(v16);
    }
  }
  *a2 = 0LL;
  a2[1] = 0LL;
  v17 = v6[1];
  if ( v17 )
    _InterlockedAdd((volatile signed __int32 *)(v17 + 8), 1u);
  *a2 = *v6;
  a2[1] = v6[1];
  return a2;
}
