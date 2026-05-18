/*
 * XREFs of sub_1800C2770 @ 0x1800C2770
 * Callers:
 *     <none>
 * Callees:
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_1800794F0 @ 0x1800794F0 (sub_1800794F0.c)
 *     sub_1800BE208 @ 0x1800BE208 (sub_1800BE208.c)
 *     sub_1800C8208 @ 0x1800C8208 (sub_1800C8208.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_1800C2770(_QWORD *a1, __int64 a2, __int64 *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 *v9; // rax
  volatile signed __int32 *v10; // rcx
  volatile signed __int32 *v11; // rbx
  __int64 v12; // rcx
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int32 *v16; // [rsp+58h] [rbp-A8h]
  __int64 v17; // [rsp+60h] [rbp-A0h] BYREF
  char v18; // [rsp+6Fh] [rbp-91h]
  __m128i si128; // [rsp+70h] [rbp-90h]
  __int64 v20[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v21; // [rsp+A0h] [rbp-60h] BYREF
  volatile signed __int32 *v22; // [rsp+A8h] [rbp-58h]
  _BYTE v23[64]; // [rsp+B0h] [rbp-50h] BYREF

  v20[3] = -2LL;
  memset(v23, 0, sizeof(v23));
  v14 = 0LL;
  v8 = a1[59];
  if ( v8 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
    v8 = a1[59];
  }
  *(_QWORD *)&v14 = a1[58];
  *((_QWORD *)&v14 + 1) = v8;
  sub_180114F64(
    (unsigned int)v23,
    (unsigned int)&v14,
    (unsigned int)"..\\Source\\Engine\\ViewerEngine.cpp",
    1484,
    (__int64)"PostRenderScene",
    (__int64)"PostRenderScene",
    1);
  memset(v20, 0, 24);
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v17) = 0;
  si128.m128i_i64[0] = 15LL;
  memmove(&v17, "PostRenderScene", 0xFuLL);
  v18 = 0;
  v9 = sub_180077ACC((__int64)a1, &v21);
  v10 = (volatile signed __int32 *)v9[1];
  if ( v10 )
  {
    _InterlockedIncrement(v10 + 3);
    v10 = (volatile signed __int32 *)v9[1];
  }
  v15 = *v9;
  v16 = v10;
  sub_180073A84(v20, &v15, (__int64)&v17);
  if ( v16 && _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
  v11 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v12 = v17;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v12 = *(_QWORD *)(v17 - 8);
      if ( (unsigned __int64)(v17 - v12 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v12, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v12);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v17) = 0;
  sub_1800794F0(a1, a2, a3, a4);
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*a4 + 280LL))(*a4) )
  {
    sub_1800C8208(a1, a3, a4, a2);
    sub_1800BE208((__int64)a1, a2, a3, a4);
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)*a3 + 128LL))(*a3);
  sub_180074950(v20);
  return sub_180115160(v23);
}
