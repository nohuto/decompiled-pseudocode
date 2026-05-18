/*
 * XREFs of sub_18007C144 @ 0x18007C144
 * Callers:
 *     sub_1800772A0 @ 0x1800772A0 (sub_1800772A0.c)
 * Callees:
 *     sub_180011388 @ 0x180011388 (sub_180011388.c)
 *     sub_1800631C0 @ 0x1800631C0 (sub_1800631C0.c)
 *     sub_180063668 @ 0x180063668 (sub_180063668.c)
 *     sub_18006B32C @ 0x18006B32C (sub_18006B32C.c)
 *     sub_18006CDF4 @ 0x18006CDF4 (sub_18006CDF4.c)
 *     sub_18006CE74 @ 0x18006CE74 (sub_18006CE74.c)
 *     sub_180073974 @ 0x180073974 (sub_180073974.c)
 *     sub_180074840 @ 0x180074840 (sub_180074840.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_1800779BC @ 0x1800779BC (sub_1800779BC.c)
 *     sub_180078120 @ 0x180078120 (sub_180078120.c)
 *     sub_180078A1C @ 0x180078A1C (sub_180078A1C.c)
 *     sub_18007B178 @ 0x18007B178 (sub_18007B178.c)
 *     sub_1800E3240 @ 0x1800E3240 (sub_1800E3240.c)
 *     sub_180114E54 @ 0x180114E54 (sub_180114E54.c)
 *     sub_180115050 @ 0x180115050 (sub_180115050.c)
 *     memmove @ 0x180125A9C (memmove.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     memset @ 0x1801271C8 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall sub_18007C144(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rcx
  __int64 *v7; // rbx
  __int64 v8; // rdi
  __int64 *v9; // rax
  __int64 v10; // rdi
  volatile signed __int32 *v11; // rbx
  unsigned __int64 v12; // rdi
  __int64 v13; // rax
  int v14; // ebx
  int v15; // ecx
  float v16; // xmm0_4
  float v17; // xmm1_4
  __int64 v18; // r14
  float v20; // xmm0_4
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int128 v22; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-A0h] BYREF
  volatile signed __int32 *v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+78h] [rbp-90h] BYREF
  char v26; // [rsp+87h] [rbp-81h]
  __m128i si128; // [rsp+88h] [rbp-80h]
  float v28; // [rsp+98h] [rbp-70h]
  __int64 v29[4]; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE v30[8]; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v31; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v32; // [rsp+D0h] [rbp-38h]
  __int64 v33; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v34; // [rsp+E0h] [rbp-28h]
  __int64 v35; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v36; // [rsp+F0h] [rbp-18h]
  __int64 v37[4]; // [rsp+F8h] [rbp-10h] BYREF
  _BYTE v38[64]; // [rsp+118h] [rbp+10h] BYREF

  v29[3] = -2LL;
  memset(v38, 0, sizeof(v38));
  v22 = 0LL;
  v2 = *(_QWORD *)(a1 + 472);
  if ( v2 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
    v2 = *(_QWORD *)(a1 + 472);
  }
  *(_QWORD *)&v22 = *(_QWORD *)(a1 + 464);
  *((_QWORD *)&v22 + 1) = v2;
  sub_180114E54(
    (unsigned int)v38,
    (unsigned int)&v22,
    (unsigned int)"..\\Source\\Engine\\Engine.cpp",
    640,
    (__int64)"UpdateFrameTime",
    (__int64)"UpdateFrameTime",
    1);
  memset(v29, 0, 24);
  si128.m128i_i64[1] = 15LL;
  LOBYTE(v25) = 0;
  si128.m128i_i64[0] = 15LL;
  memmove(&v25, "UpdateFrameTime", 0xFuLL);
  v26 = 0;
  v3 = sub_1800779BC(a1, &v31);
  v4 = (volatile signed __int32 *)v3[1];
  if ( v4 )
  {
    _InterlockedIncrement(v4 + 3);
    v4 = (volatile signed __int32 *)v3[1];
  }
  v23 = *v3;
  v24 = v4;
  sub_180073974(v29, &v23, (__int64)&v25);
  if ( v24 && _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
  v5 = v32;
  if ( v32 )
  {
    if ( _InterlockedExchangeAdd(v32 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
      if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v6 = v25;
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v6 = *(_QWORD *)(v25 - 8);
      if ( (unsigned __int64)(v25 - v6 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v6, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v6);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v25) = 0;
  sub_18007B178(a1, v37);
  v7 = (__int64 *)v37[0];
  v8 = v37[1];
  while ( 1 )
  {
    if ( v7 == (__int64 *)v8 )
    {
      sub_180011388(v37);
      v21 = 0LL;
      v10 = 0LL;
      goto LABEL_32;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*v7 + 32LL))(*v7) )
      break;
LABEL_23:
    v7 += 2;
  }
  v35 = 0LL;
  v36 = 0LL;
  sub_1800631C0(*v7 + 24, &v35);
  if ( !(unsigned int)sub_18006CE74(*v7) )
  {
    if ( (_BYTE)v36 )
      sub_180063668(v35);
    goto LABEL_23;
  }
  v9 = sub_18006CDF4(*v7, &v33, 0);
  v10 = *v9;
  *((_QWORD *)&v21 + 1) = v9[1];
  *v9 = 0LL;
  v9[1] = 0LL;
  v11 = v34;
  if ( v34 )
  {
    if ( _InterlockedExchangeAdd(v34 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      if ( _InterlockedExchangeAdd(v11 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  if ( (_BYTE)v36 )
    sub_180063668(v35);
  sub_180011388(v37);
LABEL_32:
  if ( v10 )
    v12 = *(_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 328LL))(v10, v30);
  else
    v12 = 0x8000000000000000uLL;
  v13 = *(_QWORD *)(a1 + 928);
  if ( v13 == 0x8000000000000000uLL || v12 == 0x8000000000000000uLL )
    v14 = 0;
  else
    v14 = v12 - v13;
  v15 = *(_DWORD *)(a1 + 960);
  if ( v15 )
  {
    if ( v15 == 1 )
      *(_DWORD *)(a1 + 936) = *(_DWORD *)(a1 + 956);
  }
  else
  {
    v16 = (float)v14 / 1000000000.0;
    v28 = v16;
    *(float *)(a1 + 936) = v16;
    v17 = *(float *)(a1 + 952);
    if ( v16 > v17 )
      *(float *)(a1 + 936) = v17;
  }
  v18 = sub_18007797C(a1, 1);
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_180258D18, 0LL)
    || (*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v18 + 64LL))(v18, &unk_180258E38, 0LL) )
  {
    v20 = sub_18006B32C(v14);
    sub_180078A1C(a1 + 992, v20);
    sub_180078120();
  }
  *(_QWORD *)(a1 + 928) = v12;
  sub_1800E3240(a1 + 368);
  if ( *((_QWORD *)&v21 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v21 + 1))(*((_QWORD *)&v21 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v21 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v21 + 1) + 8LL))(*((_QWORD *)&v21 + 1));
    }
  }
  sub_180074840(v29);
  return sub_180115050(v38);
}
