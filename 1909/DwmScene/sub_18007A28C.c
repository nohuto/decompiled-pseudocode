/*
 * XREFs of sub_18007A28C @ 0x18007A28C
 * Callers:
 *     sub_1800773B0 @ 0x1800773B0 (sub_1800773B0.c)
 * Callees:
 *     sub_18000E168 @ 0x18000E168 (sub_18000E168.c)
 *     sub_1800113D8 @ 0x1800113D8 (sub_1800113D8.c)
 *     sub_1800632D0 @ 0x1800632D0 (sub_1800632D0.c)
 *     sub_180063778 @ 0x180063778 (sub_180063778.c)
 *     sub_1800739B4 @ 0x1800739B4 (sub_1800739B4.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_180076718 @ 0x180076718 (sub_180076718.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     sub_18011DA98 @ 0x18011DA98 (sub_18011DA98.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
__int64 __fastcall sub_18007A28C(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int128 v10; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v11; // [rsp+58h] [rbp-B0h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp-A8h]
  __int64 v13; // [rsp+68h] [rbp-A0h] BYREF
  __m128i si128; // [rsp+78h] [rbp-90h]
  __int64 v15[4]; // [rsp+88h] [rbp-80h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-60h] BYREF
  volatile signed __int32 *v17; // [rsp+B0h] [rbp-58h]
  __int64 v18; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v19; // [rsp+C0h] [rbp-48h]
  __int64 v20; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v21; // [rsp+D0h] [rbp-38h]
  _QWORD *v22; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD *v23; // [rsp+E0h] [rbp-28h]
  __int64 v24; // [rsp+E8h] [rbp-20h]
  _BYTE v25[64]; // [rsp+F8h] [rbp-10h] BYREF

  v15[3] = -2LL;
  memset(v25, 0, sizeof(v25));
  v10 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v10 = a1[58];
  *((_QWORD *)&v10 + 1) = v2;
  sub_180114F64(
    (unsigned int)v25,
    (unsigned int)&v10,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    1719,
    (__int64)"RemoveInvalidDevices",
    (__int64)"RemoveInvalidDevices",
    1);
  memset(v15, 0, 24);
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v13) = 0;
  sub_18000E168(&v13, 0x14uLL, 0LL, "RemoveInvalidDevices");
  v3 = sub_180077ACC((__int64)a1, &v16);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v11 = *v3;
  v12 = v4;
  sub_180073A84(v15, &v11, (__int64)&v13);
  if ( v12 && _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  v5 = v17;
  if ( v17 )
  {
    if ( _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v13;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v13 - 8);
      if ( (unsigned __int64)(v13 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v13) = 0;
  v20 = 0LL;
  v21 = 0LL;
  sub_1800632D0((__int64)(a1 + 14), &v20);
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  sub_1800739B4(&v22, a1 + 11);
  v7 = v22;
  v8 = v23;
  while ( v7 != v8 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v7 + 16LL))(*v7) )
    {
      sub_18011DA98(&unk_1802596D8, 3LL, "==============================");
      sub_18011DA98(&unk_1802596D8, 3LL, "INVALID RENDER DEVICE DETECTED");
      v18 = 0LL;
      v19 = 0LL;
      sub_1800632D0(*v7 + 24LL, &v18);
      if ( dword_1802596F8 == 1 )
        sub_180076718((__int64)a1, v7);
      sub_18011DA98(&unk_1802596D8, 3LL, "==============================");
      if ( (_BYTE)v19 )
        sub_180063778(v18);
    }
    v7 += 2;
  }
  sub_1800113D8((__int64 *)&v22);
  if ( (_BYTE)v21 )
    sub_180063778(v20);
  sub_180074950(v15);
  return sub_180115160(v25);
}
