/*
 * XREFs of sub_180110C10 @ 0x180110C10
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     sub_18006CD84 @ 0x18006CD84 (sub_18006CD84.c)
 *     sub_18006D308 @ 0x18006D308 (sub_18006D308.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180078118 @ 0x180078118 (sub_180078118.c)
 *     sub_1800909E0 @ 0x1800909E0 (sub_1800909E0.c)
 *     sub_1800909EC @ 0x1800909EC (sub_1800909EC.c)
 *     sub_1800909F8 @ 0x1800909F8 (sub_1800909F8.c)
 *     sub_180090B58 @ 0x180090B58 (sub_180090B58.c)
 *     sub_180090D7C @ 0x180090D7C (sub_180090D7C.c)
 *     sub_180090D84 @ 0x180090D84 (sub_180090D84.c)
 *     sub_180090D9C @ 0x180090D9C (sub_180090D9C.c)
 *     sub_180090E54 @ 0x180090E54 (sub_180090E54.c)
 *     sub_1800910E0 @ 0x1800910E0 (sub_1800910E0.c)
 *     sub_180091120 @ 0x180091120 (sub_180091120.c)
 *     sub_1800A4188 @ 0x1800A4188 (sub_1800A4188.c)
 *     sub_1800BCDD0 @ 0x1800BCDD0 (sub_1800BCDD0.c)
 *     sub_1800E2580 @ 0x1800E2580 (sub_1800E2580.c)
 *     sub_18010FED4 @ 0x18010FED4 (sub_18010FED4.c)
 *     _o_powf @ 0x180125A66 (_o_powf.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180125AC8 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall sub_180110C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  char v8; // r12
  int v9; // ebx
  int v10; // edx
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rax
  __int16 v14; // cx
  char v15; // r15
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 **v18; // rax
  __int64 v19; // rbx
  int v20; // r14d
  double v21; // xmm0_8
  __int32 v22; // xmm7_4
  double v23; // xmm0_8
  unsigned int v24; // edx
  __int64 v25; // rax
  volatile signed __int32 *v26; // rbx
  double v27; // xmm0_8
  __int32 v28; // xmm7_4
  double v29; // xmm0_8
  unsigned int v30; // edx
  __int64 v31; // rax
  volatile signed __int32 *v32; // rbx
  unsigned int v33; // edx
  __int64 v34; // rax
  volatile signed __int32 *v35; // rbx
  __int128 *v36; // rax
  unsigned int v37; // edx
  __int64 v38; // rax
  volatile signed __int32 *v39; // rbx
  double v40; // xmm0_8
  __int32 v41; // xmm7_4
  double v42; // xmm0_8
  unsigned int v43; // edx
  __int64 v44; // rax
  volatile signed __int32 *v45; // rbx
  char v47; // [rsp+28h] [rbp-E0h]
  _DWORD v49[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v50; // [rsp+50h] [rbp-B8h]
  _QWORD v51[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v52; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v53[3]; // [rsp+70h] [rbp-98h]
  __int64 v54; // [rsp+88h] [rbp-80h] BYREF
  __m128i v55; // [rsp+98h] [rbp-70h] BYREF
  __int64 *v56; // [rsp+A8h] [rbp-60h] BYREF
  __m128 v57; // [rsp+B8h] [rbp-50h]
  __m128 v58; // [rsp+C8h] [rbp-40h]
  __m128 v59; // [rsp+D8h] [rbp-30h]
  __m128i v60; // [rsp+E8h] [rbp-20h] BYREF
  __int64 v61; // [rsp+F8h] [rbp-10h] BYREF
  volatile signed __int32 *v62; // [rsp+100h] [rbp-8h]
  __int64 v63; // [rsp+108h] [rbp+0h] BYREF
  volatile signed __int32 *v64; // [rsp+110h] [rbp+8h]
  __int64 v65; // [rsp+118h] [rbp+10h] BYREF
  volatile signed __int32 *v66; // [rsp+120h] [rbp+18h]
  __int64 v67; // [rsp+128h] [rbp+20h] BYREF
  volatile signed __int32 *v68; // [rsp+130h] [rbp+28h]
  __int128 v69; // [rsp+138h] [rbp+30h]

  v54 = -2LL;
  v8 = *(_BYTE *)(a3 + 162);
  v9 = 1;
  switch ( v8 )
  {
    case 0:
      sub_180090D84(a2, 1);
      v10 = 0;
LABEL_9:
      sub_180090D7C(a2, v10);
      break;
    case 2:
      v10 = 1;
      goto LABEL_9;
    case 3:
      v10 = 3;
      goto LABEL_9;
    case 4:
      v10 = 2;
      goto LABEL_9;
  }
  *(_WORD *)(a2 + 112) = *(_WORD *)(a3 + 160);
  v11 = sub_18006D308(a4);
  v12 = sub_18006CD84(a4);
  v13 = sub_18007797C(v12, 1);
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v13 + 64LL))(v13, &unk_180258F38, 0LL)
    || (v14 = *(_WORD *)(a2 + 112), (v14 & 0x10) == 0) )
  {
    v15 = 0;
    goto LABEL_15;
  }
  v15 = 1;
  if ( (v14 & 0x20) != 0 )
  {
LABEL_15:
    v47 = 1;
    goto LABEL_16;
  }
  v47 = 0;
LABEL_16:
  if ( !v15 || (*(_BYTE *)(a2 + 112) & 1) == 0 )
    v9 = 0;
  sub_1800909F8(a2);
  if ( !v9 )
  {
    *(_WORD *)(a2 + 112) &= ~1u;
    *(_WORD *)(a2 + 112) |= 2u;
  }
  v16 = sub_18006CD84(a4);
  v17 = sub_180078118(v16);
  *(_OWORD *)&v53[1] = 0LL;
  sub_18000F3F4(&v52, (__int64)&qword_18025C6F8);
  v60.m128i_i64[0] = (__int64)&v52;
  v60.m128i_i64[1] = (__int64)&v54;
  v55 = v60;
  v18 = sub_1800BCDD0(&v56, &v55);
  v19 = sub_1800A4188(v17, v18);
  `eh vector destructor iterator'(&v52, 0x20uLL, 1uLL, (void (*)(void *))std::string::_Tidy_deallocate);
  sub_180090B58(a2, v19, v15);
  v20 = *(_DWORD *)(a3 + 4);
  if ( (v20 & 1) != 0 )
  {
    v57 = _mm_mul_ps(
            (__m128)xmmword_18020E000,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps(
                                             (__m128)*(unsigned int *)(a3 + 16),
                                             (__m128)*(unsigned int *)(a3 + 16),
                                             0),
                                           (__m128)xmmword_180142F40),
                                         (__m128)xmmword_180142F20)),
              (__m128)xmmword_180142F30));
    if ( v47 )
    {
      v21 = ((double (*)(void))o_powf)();
      v22 = LODWORD(v21);
      v23 = ((double (*)(void))o_powf)();
      v57.m128_u64[0] = __PAIR64__(LODWORD(v23), COERCE_UNSIGNED_INT(o_powf()));
      v57.m128_i32[2] = v22;
    }
    if ( !v15 && v57.m128_f32[3] < 1.0 && !v8 )
      sub_180090D7C(a2, 3);
    v24 = *(_DWORD *)(a3 + 20);
    if ( v24 )
    {
      v25 = sub_1800E2580(v11, v24, a5);
      sub_180090E54(a2, (__int64)&qword_18025B618, v25, v11);
      sub_1800909E0(a2);
      v61 = 0LL;
      v62 = 0LL;
      sub_18010FED4(&v61, a4, *(_BYTE **)(a3 + 24));
      sub_1800910E0(a2, (__int64)&qword_18025B618, &v61);
      if ( v47 )
      {
        v57.m128_u64[0] = xmmword_18025E040;
        v57.m128_i32[2] = DWORD2(xmmword_18025E040);
      }
      v26 = v62;
      if ( v62 )
      {
        if ( _InterlockedExchangeAdd(v62 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
          if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
        }
      }
    }
    sub_1800909EC(a2);
  }
  if ( (v20 & 2) != 0 )
  {
    v58 = _mm_mul_ps(
            (__m128)xmmword_18020E000,
            _mm_add_ps(
              _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                         _mm_and_ps(
                                           _mm_shuffle_ps(
                                             (__m128)*(unsigned int *)(a3 + 36),
                                             (__m128)*(unsigned int *)(a3 + 36),
                                             0),
                                           (__m128)xmmword_180142F40),
                                         (__m128)xmmword_180142F20)),
              (__m128)xmmword_180142F30));
    if ( v47 )
    {
      v27 = ((double (*)(void))o_powf)();
      v28 = LODWORD(v27);
      v29 = ((double (*)(void))o_powf)();
      v58.m128_u64[0] = __PAIR64__(LODWORD(v29), COERCE_UNSIGNED_INT(o_powf()));
      v58.m128_i32[2] = v28;
    }
    v30 = *(_DWORD *)(a3 + 40);
    if ( v30 )
    {
      v31 = sub_1800E2580(v11, v30, a5);
      sub_180090E54(a2, (__int64)&qword_18025B658, v31, v11);
      sub_1800909E0(a2);
      v63 = 0LL;
      v64 = 0LL;
      sub_18010FED4(&v63, a4, *(_BYTE **)(a3 + 48));
      sub_1800910E0(a2, (__int64)&qword_18025B658, &v63);
      if ( v47 )
        v58 = (__m128)xmmword_18025E040;
      v32 = v64;
      if ( v64 )
      {
        if ( _InterlockedExchangeAdd(v64 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v32)(v32);
          if ( _InterlockedExchangeAdd(v32 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
        }
      }
    }
    sub_1800909EC(a2);
    v20 = *(_DWORD *)(a3 + 4);
  }
  if ( (v20 & 4) != 0 )
  {
    v33 = *(_DWORD *)(a3 + 84);
    if ( v33 )
    {
      v34 = sub_1800E2580(v11, v33, a5);
      sub_180090E54(a2, (__int64)&qword_18025B638, v34, v11);
      sub_1800909E0(a2);
      v65 = 0LL;
      v66 = 0LL;
      sub_18010FED4(&v65, a4, *(_BYTE **)(a3 + 88));
      sub_1800910E0(a2, (__int64)&qword_18025B638, &v65);
      v35 = v66;
      if ( v66 )
      {
        if ( _InterlockedExchangeAdd(v66 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v35)(v35);
          if ( _InterlockedExchangeAdd(v35 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v35 + 8LL))(v35);
        }
      }
    }
    if ( v15 )
    {
      v49[0] = *(_DWORD *)(a3 + 96);
      v49[1] = v49[0];
      v50 = 0x3F8000003F800000LL;
      v36 = (__int128 *)v49;
    }
    else
    {
      v51[0] = 0x3F8000003F800000LL;
      v51[1] = 0x3F8000003F800000LL;
      v20 = *(_DWORD *)(a3 + 4);
      v36 = (__int128 *)v51;
    }
    v69 = *v36;
    sub_180091120(a2);
  }
  if ( (v20 & 0x10) != 0 )
  {
    v37 = *(_DWORD *)(a3 + 68);
    if ( v37 )
    {
      v38 = sub_1800E2580(v11, v37, a5);
      sub_180090E54(a2, (__int64)&qword_18025B678, v38, v11);
      sub_1800909E0(a2);
      v67 = 0LL;
      v68 = 0LL;
      sub_18010FED4(&v67, a4, *(_BYTE **)(a3 + 72));
      sub_1800910E0(a2, (__int64)&qword_18025B678, &v67);
      v39 = v68;
      if ( v68 )
      {
        if ( _InterlockedExchangeAdd(v68 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v39)(v39);
          if ( _InterlockedExchangeAdd(v39 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v39 + 8LL))(v39);
        }
      }
    }
    if ( v15 )
    {
      v59 = _mm_mul_ps(
              (__m128)xmmword_18020E000,
              _mm_add_ps(
                _mm_cvtepi32_ps((__m128i)_mm_xor_ps(
                                           _mm_and_ps(
                                             _mm_shuffle_ps(
                                               (__m128)*(unsigned int *)(a3 + 60),
                                               (__m128)*(unsigned int *)(a3 + 60),
                                               0),
                                             (__m128)xmmword_180142F40),
                                           (__m128)xmmword_180142F20)),
                (__m128)xmmword_180142F30));
      if ( v47 )
      {
        v40 = ((double (*)(void))o_powf)();
        v41 = LODWORD(v40);
        v42 = ((double (*)(void))o_powf)();
        v59.m128_u64[0] = __PAIR64__(LODWORD(v42), COERCE_UNSIGNED_INT(o_powf()));
        v59.m128_i32[2] = v41;
      }
      sub_1800909EC(a2);
    }
  }
  if ( (v20 & 0x20) != 0 )
  {
    v43 = *(_DWORD *)(a3 + 120);
    if ( v43 )
    {
      v44 = sub_1800E2580(v11, v43, a5);
      sub_180090E54(a2, (__int64)&qword_18025B6B8, v44, v11);
      sub_1800909E0(a2);
      v60 = 0uLL;
      sub_18010FED4(&v60, a4, *(_BYTE **)(a3 + 128));
      sub_1800910E0(a2, (__int64)&qword_18025B6B8, &v60);
      v45 = (volatile signed __int32 *)v60.m128i_i64[1];
      if ( v60.m128i_i64[1] )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v60.m128i_i64[1] + 8), 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
          if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
        }
      }
    }
    if ( v15 )
      sub_180090D9C(a2);
  }
  return sub_180090D9C(a2);
}
