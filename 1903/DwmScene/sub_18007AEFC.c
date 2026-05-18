/*
 * XREFs of sub_18007AEFC @ 0x18007AEFC
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_1800779BC @ 0x1800779BC (sub_1800779BC.c)
 *     sub_180078BEC @ 0x180078BEC (sub_180078BEC.c)
 *     sub_1800B4084 @ 0x1800B4084 (sub_1800B4084.c)
 *     sub_1800B42F0 @ 0x1800B42F0 (sub_1800B42F0.c)
 *     sub_180114E54 @ 0x180114E54 (sub_180114E54.c)
 *     sub_180115050 @ 0x180115050 (sub_180115050.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_18007AEFC(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  _QWORD *v7; // rdi
  _QWORD *i; // rbx
  __int128 v10; // [rsp+48h] [rbp-69h] BYREF
  __int64 v11; // [rsp+58h] [rbp-59h] BYREF
  volatile signed __int32 *v12; // [rsp+60h] [rbp-51h]
  __int64 v13; // [rsp+68h] [rbp-49h] BYREF
  char v14; // [rsp+76h] [rbp-3Bh]
  __m128i si128; // [rsp+78h] [rbp-39h]
  __int64 v16[4]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v17; // [rsp+A8h] [rbp-9h] BYREF
  volatile signed __int32 *v18; // [rsp+B0h] [rbp-1h]
  _BYTE v19[64]; // [rsp+B8h] [rbp+7h] BYREF

  v16[3] = -2LL;
  memset(v19, 0, sizeof(v19));
  v10 = 0LL;
  v2 = a1[59];
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = a1[59];
  }
  *(_QWORD *)&v10 = a1[58];
  *((_QWORD *)&v10 + 1) = v2;
  sub_180114E54(
    (unsigned int)v19,
    (unsigned int)&v10,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    898,
    (__int64)"RenderDisplays",
    (__int64)"RenderDisplays",
    1);
  memset(v16, 0, 24);
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v13) = 0;
  si128.m128i_i64[0] = 14LL;
  memmove(&v13, "RenderDisplays", 0xEuLL);
  v14 = 0;
  v3 = sub_1800779BC((__int64)a1, &v17);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v11 = *v3;
  v12 = v4;
  sub_180073974(v16, &v11, (__int64)&v13);
  if ( v12 && !_InterlockedDecrement(v12 + 3) )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
  v5 = v18;
  if ( v18 )
  {
    if ( !_InterlockedDecrement(v18 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( !_InterlockedDecrement(v5 + 3) )
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
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v13) = 0;
  v7 = (_QWORD *)a1[21];
  for ( i = (_QWORD *)*v7; i != v7; i = (_QWORD *)*i )
  {
    if ( (unsigned int)sub_1800B4084(i[2]) == 1 )
      sub_1800B42F0(i[2]);
  }
  sub_180078BEC((__int64)a1);
  sub_180074840(v16);
  return sub_180115050(v19);
}
