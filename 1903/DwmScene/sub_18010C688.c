/*
 * XREFs of sub_18010C688 @ 0x18010C688
 * Callers:
 *     sub_18010C4D8 @ 0x18010C4D8 (sub_18010C4D8.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_1800813D0 @ 0x1800813D0 (sub_1800813D0.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     sub_180081F80 @ 0x180081F80 (sub_180081F80.c)
 *     sub_180082210 @ 0x180082210 (sub_180082210.c)
 *     sub_180083644 @ 0x180083644 (sub_180083644.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_1800841D4 @ 0x1800841D4 (sub_1800841D4.c)
 *     sub_180084D64 @ 0x180084D64 (sub_180084D64.c)
 *     sub_18008E5E0 @ 0x18008E5E0 (sub_18008E5E0.c)
 *     sub_1800AE9B8 @ 0x1800AE9B8 (sub_1800AE9B8.c)
 *     sub_1800B1790 @ 0x1800B1790 (sub_1800B1790.c)
 *     sub_1800BAD70 @ 0x1800BAD70 (sub_1800BAD70.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180126540 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     cosf @ 0x1801271E0 (cosf.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
char *__fastcall sub_18010C688(char *a1, __int64 *a2, __int64 a3)
{
  __int64 *v3; // rbx
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // r14
  __int64 v6; // r13
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rsi
  __int64 v9; // xmm8_8
  __int64 v10; // rdi
  __int64 v11; // xmm11_8
  int v12; // r15d
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  double v16; // xmm10_8
  __int64 v17; // rdx
  signed __int32 v18; // eax
  __int64 v19; // rbx
  __int64 v20; // rdx
  signed __int32 v21; // eax
  float *v22; // rax
  float v23; // xmm2_4
  float v24; // xmm1_4
  __int64 v25; // rbx
  __m128 v26; // xmm2
  int v27; // eax
  __int64 v28; // rbx
  double v29; // xmm1_8
  int v30; // xmm6_4
  float v31; // xmm6_4
  double v32; // xmm0_8
  double v33; // xmm7_8
  __m128 v34; // xmm2
  _DWORD *v35; // rax
  __int64 v36; // rax
  _DWORD *v37; // rax
  __int64 v38; // rax
  unsigned __int32 v39; // xmm1_4
  unsigned __int32 v40; // xmm2_4
  __int64 v41; // rax
  __int64 *v42; // r15
  __int64 v43; // rdx
  signed __int32 v44; // eax
  __int64 *v45; // rax
  volatile signed __int32 *v46; // rbx
  __int64 v47; // rbx
  volatile signed __int32 *v48; // rbx
  __int64 v49; // rdi
  __int64 v50; // r15
  __int64 v51; // r13
  _OWORD *v52; // rax
  float v53; // xmm1_4
  int v54; // xmm4_4
  float v55; // xmm0_4
  int v56; // eax
  int v57; // xmm3_4
  int v58; // xmm5_4
  int v59; // xmm2_4
  __int64 v60; // rax
  _DWORD *v61; // rax
  unsigned __int64 v64; // [rsp+50h] [rbp-B8h] BYREF
  unsigned __int32 v65; // [rsp+58h] [rbp-B0h]
  __int128 v66; // [rsp+60h] [rbp-A8h]
  __int128 v67; // [rsp+70h] [rbp-98h]
  __int128 v68; // [rsp+80h] [rbp-88h]
  __int128 v69; // [rsp+90h] [rbp-78h]
  int v70; // [rsp+A0h] [rbp-68h]
  __int64 v71; // [rsp+A8h] [rbp-60h]
  volatile signed __int32 *v72; // [rsp+B0h] [rbp-58h]
  __int64 v73; // [rsp+B8h] [rbp-50h]
  int v74; // [rsp+C0h] [rbp-48h]
  __int64 v75; // [rsp+C8h] [rbp-40h]
  int v76; // [rsp+D0h] [rbp-38h]
  char *v77; // [rsp+D8h] [rbp-30h]
  _BYTE *v78; // [rsp+E0h] [rbp-28h]
  __int64 *v79; // [rsp+E8h] [rbp-20h]
  __int64 v80; // [rsp+F0h] [rbp-18h]
  volatile signed __int32 *v81; // [rsp+F8h] [rbp-10h]
  __int64 v82; // [rsp+100h] [rbp-8h]
  char *v83; // [rsp+108h] [rbp+0h]
  __int64 v84; // [rsp+110h] [rbp+8h] BYREF
  volatile signed __int32 *v85; // [rsp+118h] [rbp+10h]
  int v86[3]; // [rsp+120h] [rbp+18h] BYREF
  int v87[3]; // [rsp+12Ch] [rbp+24h] BYREF
  __m128 v88; // [rsp+138h] [rbp+30h]
  char v89[64]; // [rsp+148h] [rbp+40h] BYREF
  char v90[64]; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v91; // [rsp+1C8h] [rbp+C0h] BYREF
  float v92; // [rsp+1D0h] [rbp+C8h]
  __m128 v93; // [rsp+1D8h] [rbp+D0h]
  __int32 v94; // [rsp+1E8h] [rbp+E0h] BYREF
  unsigned __int32 v95; // [rsp+1ECh] [rbp+E4h]
  unsigned __int32 v96; // [rsp+1F0h] [rbp+E8h]
  unsigned __int64 v97; // [rsp+1F8h] [rbp+F0h] BYREF
  __int32 v98; // [rsp+200h] [rbp+F8h]
  int v99; // [rsp+208h] [rbp+100h] BYREF
  float v100; // [rsp+218h] [rbp+110h]
  __m128 v101[4]; // [rsp+228h] [rbp+120h] BYREF

  v82 = -2LL;
  v3 = a2;
  v79 = a2;
  v77 = a1;
  v83 = a1;
  `eh vector constructor iterator'(
    a1,
    0x10uLL,
    3uLL,
    (void (*)(void *))_Stl_critical_section::_Stl_critical_section,
    (void (*)(void *))unknown_libname_110);
  v70 = 1;
  v4 = (v3[1] - *v3) >> 4;
  if ( v4 > 3 )
  {
    v4 = 3LL;
LABEL_4:
    v5 = 0LL;
    while ( 1 )
    {
      v71 = 0LL;
      v72 = 0LL;
      v6 = 16 * v5;
      v7 = *v3;
      v8 = *(volatile signed __int32 **)(*v3 + 16 * v5 + 8);
      if ( v8 )
      {
        _InterlockedIncrement(v8 + 2);
        v8 = *(volatile signed __int32 **)(v7 + v6 + 8);
      }
      v71 = *(_QWORD *)(v7 + 16 * v5);
      v72 = v8;
      v88 = (__m128)_mm_loadu_si128((const __m128i *)(v71 + 88));
      v93 = _mm_mul_ps(
              _mm_shuffle_ps((__m128)*(unsigned int *)(v71 + 104), (__m128)*(unsigned int *)(v71 + 104), 0),
              v88);
      v9 = 0LL;
      v78 = (_BYTE *)(v71 + 72);
      if ( !*(_BYTE *)(v71 + 72) )
      {
        v93.m128_u64[0] = xmmword_18025E030;
        v93.m128_i32[2] = DWORD2(xmmword_18025E030);
      }
      v10 = v71;
      v11 = *(unsigned int *)(v71 + 116);
      v12 = *(_DWORD *)(v71 + 120);
      v66 = 0LL;
      v13 = *(_QWORD *)(v71 + 64);
      if ( v13 )
      {
        while ( 1 )
        {
          v14 = *(_DWORD *)(v13 + 8);
          if ( !v14 )
            break;
          if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
          {
            v66 = *(_OWORD *)(v10 + 56);
            break;
          }
        }
      }
      sub_1800841D4(v66, (float *)&v99);
      if ( *((_QWORD *)&v66 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v66 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v15 = *((_QWORD *)&v66 + 1);
          (***((void (__fastcall ****)(_QWORD))&v66 + 1))(*((_QWORD *)&v66 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v66 + 1) + 8LL))(*((_QWORD *)&v66 + 1));
        }
      }
      v16 = o_cbrtf();
      v67 = 0LL;
      v17 = *(_QWORD *)(v10 + 64);
      if ( v17 )
      {
        while ( 1 )
        {
          v18 = *(_DWORD *)(v17 + 8);
          if ( !v18 )
            break;
          if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v18 + 1, v18) )
          {
            v67 = *(_OWORD *)(v10 + 56);
            break;
          }
        }
      }
      sub_180083DF0(v67, (__int64)&v94);
      if ( *((_QWORD *)&v67 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v67 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v19 = *((_QWORD *)&v67 + 1);
          (***((void (__fastcall ****)(_QWORD))&v67 + 1))(*((_QWORD *)&v67 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v19 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v67 + 1) + 8LL))(*((_QWORD *)&v67 + 1));
        }
      }
      v68 = 0LL;
      v20 = *(_QWORD *)(v10 + 64);
      if ( v20 )
      {
        while ( 1 )
        {
          v21 = *(_DWORD *)(v20 + 8);
          if ( !v21 )
            break;
          if ( v21 == _InterlockedCompareExchange((volatile signed __int32 *)(v20 + 8), v21 + 1, v21) )
          {
            v68 = *(_OWORD *)(v10 + 56);
            break;
          }
        }
      }
      v22 = (float *)sub_180083644(v68, (__int64)v89);
      v23 = -v22[10];
      v24 = -v22[9];
      *(float *)&v91 = -v22[8];
      *((float *)&v91 + 1) = v24;
      v92 = v23;
      if ( *((_QWORD *)&v68 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v68 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v25 = *((_QWORD *)&v68 + 1);
          (***((void (__fastcall ****)(_QWORD))&v68 + 1))(*((_QWORD *)&v68 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v68 + 1) + 8LL))(*((_QWORD *)&v68 + 1));
        }
      }
      sub_180084D64(&v91);
      if ( v12 == 2 )
      {
        v26 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v91, (__m128)LODWORD(v92)));
        v94 = v26.m128_i32[0];
        v95 = _mm_shuffle_ps(v26, v26, 85).m128_u32[0];
        v96 = _mm_shuffle_ps(v26, v26, 170).m128_u32[0];
      }
      v27 = sub_18008E5E0(v71);
      if ( !v27 )
      {
        if ( v12 == 2 )
          goto LABEL_48;
        v27 = 2;
      }
      if ( v12 >= 0 )
      {
        if ( v12 <= 1 )
        {
          switch ( v27 )
          {
            case 1:
              v9 = 1034090883LL;
              break;
            case 2:
              v9 = 1065353216LL;
              break;
            case 4:
              HIDWORD(v9) = HIDWORD(v11);
              *(float *)&v9 = *(float *)&v11 * *(float *)&v11;
              break;
          }
        }
        else if ( v12 == 2 )
        {
          if ( v27 != 3 )
          {
            if ( v27 == 4 )
            {
              v100 = fmaxf(0.001, *(float *)&v11);
              HIDWORD(v9) = 0;
              *(float *)&v9 = (float)(1.0 - cosf(v100)) * 6.2831855;
            }
            goto LABEL_49;
          }
LABEL_48:
          v9 = 1065353216LL;
          goto LABEL_49;
        }
      }
      if ( v12 == 1 )
      {
        v31 = cosf((float)(fmaxf(1.0, *(float *)(v71 + 112)) * 0.017453292) * 0.5);
        v32 = o_log2f();
        HIDWORD(v33) = HIDWORD(v32);
        *(float *)&v33 = *(float *)&v32 / (float)(v31 - 1.0);
        v34 = _mm_sub_ps((__m128)0LL, _mm_movelh_ps((__m128)v91, (__m128)LODWORD(v92)));
        LODWORD(v64) = v34.m128_i32[0];
        HIDWORD(v64) = _mm_shuffle_ps(v34, v34, 85).m128_u32[0];
        v65 = _mm_shuffle_ps(v34, v34, 170).m128_u32[0];
        v35 = sub_180081F80(v86, &v64, v33);
        v73 = *(_QWORD *)v35;
        v74 = v35[2];
        v28 = a3;
        v36 = *(_QWORD *)(a3 + 64) + 16 * (v5 + 25);
        *(_QWORD *)v36 = v73;
        *(_DWORD *)(v36 + 8) = v74;
        *(float *)(v36 + 12) = -*(float *)&v33;
        goto LABEL_50;
      }
LABEL_49:
      v28 = a3;
      *(_OWORD *)(*(_QWORD *)(a3 + 64) + 16 * (v5 + 25)) = xmmword_18026B270;
LABEL_50:
      v97 = v93.m128_u64[0];
      v98 = v93.m128_i32[2];
      if ( v12 == 2 )
      {
        v30 = 0;
      }
      else
      {
        HIDWORD(v29) = HIDWORD(v16);
        *(float *)&v29 = *(float *)&v16 * *(float *)&v16;
        sub_180082210(&v97, v29);
        v30 = 1065353216;
      }
      v37 = sub_180081F80(v87, &v97, *(double *)&v9);
      v75 = *(_QWORD *)v37;
      v76 = v37[2];
      v38 = *(_QWORD *)(v28 + 64) + 16 * (v5 + 28);
      *(_QWORD *)v38 = v75;
      *(_DWORD *)(v38 + 8) = v76;
      *(_DWORD *)(v38 + 12) = v30;
      v39 = v95;
      v40 = v96;
      v41 = *(_QWORD *)(v28 + 64) + 16 * (v5 + 22);
      *(_DWORD *)v41 = v94;
      *(_DWORD *)(v41 + 4) = v39;
      *(_DWORD *)(v41 + 8) = v40;
      *(float *)(v41 + 12) = *(float *)&v16 * *(float *)&v11;
      if ( v5 < 3 )
      {
        v42 = (__int64 *)&v77[v6];
        if ( !*(_QWORD *)&v77[v6] )
        {
          v69 = 0LL;
          v43 = *(_QWORD *)(v10 + 64);
          if ( v43 )
          {
            while ( 1 )
            {
              v44 = *(_DWORD *)(v43 + 8);
              if ( !v44 )
                break;
              if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 8), v44 + 1, v44) )
              {
                v69 = *(_OWORD *)(v10 + 56);
                break;
              }
            }
          }
          v45 = sub_1800BAD70(v69, &v84);
          std::shared_ptr<__ExceptionPtr>::operator=(v42, v45);
          v46 = v85;
          if ( v85 )
          {
            if ( _InterlockedExchangeAdd(v85 + 2, 0xFFFFFFFF) == 1 )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v46)(v46);
              if ( _InterlockedExchangeAdd(v46 + 3, 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v46 + 8LL))(v46);
            }
          }
          if ( *((_QWORD *)&v69 + 1) )
          {
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v69 + 1) + 8LL), 0xFFFFFFFF) == 1 )
            {
              v47 = *((_QWORD *)&v69 + 1);
              (***((void (__fastcall ****)(_QWORD))&v69 + 1))(*((_QWORD *)&v69 + 1));
              if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v47 + 12), 0xFFFFFFFF) == 1 )
                (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v69 + 1) + 8LL))(*((_QWORD *)&v69 + 1));
            }
          }
        }
        v80 = 0LL;
        v81 = 0LL;
        v48 = (volatile signed __int32 *)v42[1];
        if ( v48 )
        {
          _InterlockedIncrement(v48 + 2);
          v48 = (volatile signed __int32 *)v42[1];
        }
        v49 = *v42;
        v80 = v49;
        v81 = v48;
        if ( v49 )
        {
          v50 = v71;
          if ( *(_BYTE *)(v71 + 124) )
          {
            sub_1800AE9B8(v49, v101);
            v51 = a3;
            sub_1800B1790(v101, (_OWORD *)(*(_QWORD *)(a3 + 64) + (v5 << 6)));
          }
          else
          {
            v52 = (_OWORD *)sub_1800813D0(
                              (__int64)v90,
                              (int *)&xmmword_18026B270,
                              &xmmword_18026B270,
                              &xmmword_18026B270,
                              &xmmword_18026B270);
            v51 = a3;
            sub_180081CAC((_OWORD *)(*(_QWORD *)(a3 + 64) + (v5 << 6)), v52);
          }
          v53 = 1.0 / (float)*(int *)(v49 + 1940);
          if ( *(_BYTE *)(v49 + 1952) )
            v54 = 1065353216;
          else
            v54 = 0;
          v55 = *(float *)(v49 + 1948);
          v56 = *(_DWORD *)(v49 + 316);
          if ( v56 == 2 || v56 == 4 )
            v55 = -v55;
          if ( *(_DWORD *)(v49 + 1960) == 1 )
            v57 = 1065353216;
          else
            v57 = 0;
          v58 = *(_DWORD *)(v49 + 1968);
          if ( *v78 && *(_BYTE *)(v50 + 124) )
            v59 = 1065353216;
          else
            v59 = 0;
          v60 = *(_QWORD *)(v51 + 64) + 16 * (v5 + 31);
          *(float *)v60 = v53;
          *(float *)(v60 + 4) = v53;
          *(_DWORD *)(v60 + 8) = v54;
          *(float *)(v60 + 12) = v55;
          v61 = (_DWORD *)(*(_QWORD *)(v51 + 64) + 16 * (v5 + 34));
          *v61 = *(_DWORD *)(v49 + 1956);
          v61[1] = v57;
          v61[2] = v58;
          v61[3] = v59;
        }
        if ( v48 )
        {
          if ( _InterlockedExchangeAdd(v48 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          }
        }
      }
      if ( v8 )
      {
        if ( _InterlockedExchangeAdd(v8 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v8)(v8);
          if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
        }
      }
      ++v5;
      v3 = v79;
      if ( v5 >= v4 )
        return v77;
    }
  }
  if ( v4 )
    goto LABEL_4;
  return v77;
}
