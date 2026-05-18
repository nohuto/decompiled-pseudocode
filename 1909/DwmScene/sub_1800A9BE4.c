/*
 * XREFs of sub_1800A9BE4 @ 0x1800A9BE4
 * Callers:
 *     sub_180091AE8 @ 0x180091AE8 (sub_180091AE8.c)
 *     sub_180092F50 @ 0x180092F50 (sub_180092F50.c)
 *     sub_180093744 @ 0x180093744 (sub_180093744.c)
 *     sub_180093EB8 @ 0x180093EB8 (sub_180093EB8.c)
 *     sub_180093FEC @ 0x180093FEC (sub_180093FEC.c)
 *     sub_1800A8CC8 @ 0x1800A8CC8 (sub_1800A8CC8.c)
 *     sub_1800EA350 @ 0x1800EA350 (sub_1800EA350.c)
 *     sub_1800EC240 @ 0x1800EC240 (sub_1800EC240.c)
 *     sub_1800EC790 @ 0x1800EC790 (sub_1800EC790.c)
 *     sub_1800F0450 @ 0x1800F0450 (sub_1800F0450.c)
 * Callees:
 *     sub_18000E4E8 @ 0x18000E4E8 (sub_18000E4E8.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z @ 0x18000F6AC (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@QEBD_K@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180027880 @ 0x180027880 (sub_180027880.c)
 *     sub_180064338 @ 0x180064338 (sub_180064338.c)
 *     sub_1800A560C @ 0x1800A560C (sub_1800A560C.c)
 *     get_srw_lock @ 0x1800F3028 (get_srw_lock.c)
 *     sub_1800F3520 @ 0x1800F3520 (sub_1800F3520.c)
 *     _CxxThrowException @ 0x180125B88 (_CxxThrowException.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800A9BE4(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v6; // r8
  _QWORD *v7; // rax
  __m128i *v8; // rax
  const void *v9; // rdx
  __m128i *v10; // rax
  _QWORD *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  volatile signed __int32 *v16; // rbx
  signed __int32 v17; // eax
  bool v18; // zf
  __int64 *v19; // rax
  __m128i v20; // [rsp+38h] [rbp-D0h] BYREF
  __m128i si128; // [rsp+48h] [rbp-C0h]
  __m128i Src_8; // [rsp+58h] [rbp-B0h] BYREF
  __m128i v23; // [rsp+68h] [rbp-A0h]
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  __m128i v25; // [rsp+88h] [rbp-80h]
  __int64 v26; // [rsp+98h] [rbp-70h]
  __int64 *v27; // [rsp+A0h] [rbp-68h]
  __int64 v28[4]; // [rsp+B0h] [rbp-58h] BYREF
  _QWORD v29[5]; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+F8h] [rbp-10h] BYREF
  __int128 v31; // [rsp+138h] [rbp+30h] BYREF
  __int128 v32; // [rsp+148h] [rbp+40h]

  v26 = -2LL;
  v27 = a2;
  if ( *(_DWORD *)(a1 + 432) )
  {
    sub_18000E4E8(v29);
    v19 = sub_18000E4E8(v28);
    sub_180027880(pExceptionObject, v19, 278, (__int64)v29, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  v4 = (unsigned int)sub_180064338(*a2);
  std::shared_ptr<__ExceptionPtr>::operator=((_QWORD *)(a1 + 16 * (v4 + 6)), a2);
  result = get_srw_lock(*a2);
  if ( !*(_QWORD *)(result + 16) )
  {
    v7 = sub_1800A560C(&v24, v4, v6);
    v8 = (__m128i *)std::string::append(v7, " (", 2uLL);
    v23 = 0LL;
    Src_8 = *v8;
    v23 = v8[1];
    v8[1].m128i_i64[0] = 0LL;
    v8[1].m128i_i64[1] = 15LL;
    v8->m128i_i8[0] = 0;
    v9 = (const void *)(a1 + 16);
    if ( *(_QWORD *)(a1 + 40) >= 0x10uLL )
      v9 = *(const void **)(a1 + 16);
    v10 = (__m128i *)std::string::append(&Src_8, v9, *(_QWORD *)(a1 + 32));
    si128 = 0LL;
    v20 = *v10;
    si128 = v10[1];
    v10[1].m128i_i64[0] = 0LL;
    v10[1].m128i_i64[1] = 15LL;
    v10->m128i_i8[0] = 0;
    v11 = std::string::append(&v20, ")", 1uLL);
    v32 = 0LL;
    v31 = *(_OWORD *)v11;
    v32 = *((_OWORD *)v11 + 1);
    v11[2] = 0LL;
    v11[3] = 15LL;
    *(_BYTE *)v11 = 0;
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v12 = v20.m128i_i64[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v12 = *(_QWORD *)(v20.m128i_i64[0] - 8);
        if ( (unsigned __int64)(v20.m128i_i64[0] - v12 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v12);
    }
    si128 = _mm_load_si128(xmmword_180145F90);
    v20.m128i_i8[0] = 0;
    if ( v23.m128i_i64[1] >= 0x10uLL )
    {
      v13 = Src_8.m128i_i64[0];
      if ( (unsigned __int64)(v23.m128i_i64[1] + 1) >= 0x1000 )
      {
        v13 = *(_QWORD *)(Src_8.m128i_i64[0] - 8);
        if ( (unsigned __int64)(Src_8.m128i_i64[0] - v13 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v13, v23.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v13);
    }
    v23 = _mm_load_si128(xmmword_180145F90);
    Src_8.m128i_i8[0] = 0;
    if ( v25.m128i_i64[1] >= 0x10uLL )
    {
      v14 = v24;
      if ( (unsigned __int64)(v25.m128i_i64[1] + 1) >= 0x1000 )
      {
        v14 = *(_QWORD *)(v24 - 8);
        if ( (unsigned __int64)(v24 - v14 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v14, v25.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v14);
    }
    v25 = _mm_load_si128(xmmword_180145F90);
    LOBYTE(v24) = 0;
    result = sub_1800F3520(*a2, &v31);
    if ( *((_QWORD *)&v32 + 1) >= 0x10uLL )
    {
      v15 = v31;
      if ( (unsigned __int64)(*((_QWORD *)&v32 + 1) + 1LL) >= 0x1000 )
      {
        v15 = *(_QWORD *)(v31 - 8);
        if ( (unsigned __int64)(v31 - v15 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v15, *((_QWORD *)&v32 + 1) + 40LL);
          __debugbreak();
        }
      }
      result = j_j__o_free(v15);
    }
  }
  v16 = (volatile signed __int32 *)a2[1];
  if ( v16 )
  {
    v17 = _InterlockedExchangeAdd(v16 + 2, 0xFFFFFFFF);
    v18 = v17 == 1;
    result = (unsigned int)(v17 - 1);
    if ( v18 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v16)(v16);
      result = (unsigned int)_InterlockedDecrement(v16 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
    }
  }
  return result;
}
