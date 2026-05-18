/*
 * XREFs of sub_1800773B0 @ 0x1800773B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000D790 (_guard_check_icall_nop.c)
 *     sub_180063538 @ 0x180063538 (sub_180063538.c)
 *     sub_180073A84 @ 0x180073A84 (sub_180073A84.c)
 *     sub_180074950 @ 0x180074950 (sub_180074950.c)
 *     sub_18007589C @ 0x18007589C (sub_18007589C.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180077ACC @ 0x180077ACC (sub_180077ACC.c)
 *     sub_180077BAC @ 0x180077BAC (sub_180077BAC.c)
 *     sub_180077C8C @ 0x180077C8C (sub_180077C8C.c)
 *     sub_180079FDC @ 0x180079FDC (sub_180079FDC.c)
 *     sub_18007A28C @ 0x18007A28C (sub_18007A28C.c)
 *     sub_18007B00C @ 0x18007B00C (sub_18007B00C.c)
 *     sub_18007B248 @ 0x18007B248 (sub_18007B248.c)
 *     sub_18007C254 @ 0x18007C254 (sub_18007C254.c)
 *     sub_18007CB28 @ 0x18007CB28 (sub_18007CB28.c)
 *     sub_18007DC74 @ 0x18007DC74 (sub_18007DC74.c)
 *     sub_18007DDDC @ 0x18007DDDC (sub_18007DDDC.c)
 *     sub_180114F64 @ 0x180114F64 (sub_180114F64.c)
 *     sub_180115160 @ 0x180115160 (sub_180115160.c)
 *     memmove @ 0x180125BAC (memmove.c)
 *     j_j__o_free @ 0x180126094 (j_j__o_free.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     memset @ 0x1801272D8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall sub_1800773B0(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 v8; // rbx
  __int64 v9; // r9
  unsigned int v10; // eax
  volatile signed __int32 *v11; // rbx
  __int64 v12; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v13; // [rsp+50h] [rbp-B8h]
  __int128 v14; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v16; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+78h] [rbp-90h] BYREF
  char v18; // [rsp+81h] [rbp-87h]
  __m128i si128; // [rsp+88h] [rbp-80h]
  __int64 v20[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v21[8]; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v22; // [rsp+C0h] [rbp-48h]
  _BYTE v23[64]; // [rsp+C8h] [rbp-40h] BYREF

  v20[3] = -2LL;
  sub_180063538((__int64)(a1 + 1));
  sub_18007DDDC(a1);
  sub_18007589C((__int64)a1);
  memset(v23, 0, sizeof(v23));
  v14 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v14 = a1[58];
  *((_QWORD *)&v14 + 1) = v2;
  sub_180114F64(
    (unsigned int)v23,
    (unsigned int)&v14,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    819,
    (__int64)"FrameTick",
    (__int64)"FrameTick",
    1);
  memset(v20, 0, 24);
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v17) = 0;
  si128.m128i_i64[0] = 9LL;
  memmove(&v17, "FrameTick", 9uLL);
  v18 = 0;
  v3 = (__int64 *)sub_180077ACC(a1, v21);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v15 = *v3;
  v16 = v4;
  sub_180073A84(v20, &v15, (__int64)&v17);
  if ( v16 && _InterlockedExchangeAdd(v16 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v16 + 8LL))(v16);
  v5 = v22;
  if ( v22 )
  {
    if ( _InterlockedExchangeAdd(v22 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v17;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v17 - 8);
      if ( (unsigned __int64)(v17 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128(xmmword_180145F90);
  LOBYTE(v17) = 0;
  sub_180079FDC(a1);
  if ( (unsigned int)sub_180077C8C(a1) > 1 )
  {
    v12 = 0LL;
    v13 = 0LL;
    sub_180077BAC(a1, &v12, 1LL);
    v8 = v12;
    if ( v12 )
    {
      v9 = sub_180077A8C(a1, 1LL);
      v10 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v9 + 72LL))(v9, &unk_180259C98, 1LL);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 224LL))(v8, v10);
    }
    if ( v13 && !_InterlockedDecrement(v13 + 2) )
    {
      v11 = v13;
      (**(void (__fastcall ***)(volatile signed __int32 *))v13)(v13);
      if ( !_InterlockedDecrement(v11 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v13 + 8LL))(v13);
    }
    sub_18007DC74(a1);
    sub_18007C254(a1);
    (*(void (__fastcall **)(_QWORD *))(*a1 + 72LL))(a1);
    sub_18007B248(a1);
    sub_18007B00C(a1);
    sub_18007A28C(a1);
    sub_180074950(v20);
    sub_180115160(v23);
    return sub_18007CB28(a1);
  }
  else
  {
    sub_180074950(v20);
    return sub_180115160(v23);
  }
}
