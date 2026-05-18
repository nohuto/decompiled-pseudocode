/*
 * XREFs of sub_1800C8208 @ 0x1800C8208
 * Callers:
 *     sub_1800C2770 @ 0x1800C2770 (sub_1800C2770.c)
 *     sub_1800C2D50 @ 0x1800C2D50 (sub_1800C2D50.c)
 * Callees:
 *     sub_18000F444 @ 0x18000F444 (sub_18000F444.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001007C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_180077710 @ 0x180077710 (sub_180077710.c)
 *     sub_180077A8C @ 0x180077A8C (sub_180077A8C.c)
 *     sub_180078228 @ 0x180078228 (sub_180078228.c)
 *     sub_180087EB0 @ 0x180087EB0 (sub_180087EB0.c)
 *     sub_180090E9C @ 0x180090E9C (sub_180090E9C.c)
 *     sub_1800A41D0 @ 0x1800A41D0 (sub_1800A41D0.c)
 *     sub_1800A4B48 @ 0x1800A4B48 (sub_1800A4B48.c)
 *     sub_1800A5214 @ 0x1800A5214 (sub_1800A5214.c)
 *     sub_1800A5238 @ 0x1800A5238 (sub_1800A5238.c)
 *     sub_1800A527C @ 0x1800A527C (sub_1800A527C.c)
 *     sub_1800A52C0 @ 0x1800A52C0 (sub_1800A52C0.c)
 *     sub_1800A9A84 @ 0x1800A9A84 (sub_1800A9A84.c)
 *     sub_1800B1948 @ 0x1800B1948 (sub_1800B1948.c)
 *     sub_1800B8A28 @ 0x1800B8A28 (sub_1800B8A28.c)
 *     sub_1800B8B00 @ 0x1800B8B00 (sub_1800B8B00.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_1800C1D70 @ 0x1800C1D70 (sub_1800C1D70.c)
 *     sub_1800C36BC @ 0x1800C36BC (sub_1800C36BC.c)
 *     sub_1800C4490 @ 0x1800C4490 (sub_1800C4490.c)
 *     sub_1800C6A88 @ 0x1800C6A88 (sub_1800C6A88.c)
 *     sub_1800C6BB0 @ 0x1800C6BB0 (sub_1800C6BB0.c)
 *     sub_1800C6BF0 @ 0x1800C6BF0 (sub_1800C6BF0.c)
 *     sub_1800F5E1C @ 0x1800F5E1C (sub_1800F5E1C.c)
 *     sub_1800F638C @ 0x1800F638C (sub_1800F638C.c)
 *     sub_18010490C @ 0x18010490C (sub_18010490C.c)
 *     sub_180104938 @ 0x180104938 (sub_180104938.c)
 *     sub_18010616C @ 0x18010616C (sub_18010616C.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127740 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall sub_1800C8208(__int64 a1, __int64 a2, __int64 a3, __int64 *a4)
{
  __m128 v4; // xmm0
  __int64 v7; // r14
  __m128 v8; // xmm13
  int v9; // r13d
  __int64 v10; // r8
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  _QWORD *v15; // rbx
  int v16; // esi
  __int64 **v17; // rax
  __int64 i; // rax
  __int64 *j; // rcx
  __int64 v20; // r13
  __int128 *v21; // rcx
  char v22; // di
  __int64 v23; // rbx
  volatile signed __int32 *v24; // rbx
  int v25; // xmm12_4
  int v26; // ebx
  int *v27; // rax
  double v28; // xmm0_8
  unsigned int v29; // xmm9_4
  double v30; // xmm0_8
  int v31; // xmm8_4
  double v32; // xmm0_8
  unsigned int v33; // xmm7_4
  double v34; // xmm0_8
  unsigned int v35; // xmm6_4
  double v36; // xmm0_8
  __m128 v37; // xmm0
  float v38; // xmm6_4
  __int64 v39; // rax
  char v40; // al
  char v41; // bl
  __int64 v42; // r8
  __int64 v43; // rdx
  bool v44; // bl
  __int64 v45; // rcx
  __int64 *v46; // rbx
  __int64 v47; // rcx
  _QWORD *v48; // rdi
  int v49; // esi
  __int64 v50; // rbx
  float v51; // xmm14_4
  float v52; // xmm13_4
  double v53; // xmm0_8
  int v54; // xmm12_4
  double v55; // xmm0_8
  int v56; // xmm11_4
  double v57; // xmm0_8
  int v58; // xmm10_4
  double v59; // xmm0_8
  int v60; // xmm9_4
  double v61; // xmm0_8
  int v62; // xmm8_4
  double v63; // xmm0_8
  int v64; // xmm7_4
  float v65; // xmm7_4
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  volatile signed __int32 *v69; // rbx
  volatile signed __int32 *v70; // rbx
  double v71; // xmm0_8
  float v72; // xmm8_4
  double v73; // xmm0_8
  float v74; // xmm7_4
  double v75; // xmm0_8
  float v76; // xmm6_4
  double v77; // xmm0_8
  double v78; // xmm0_8
  float v79; // xmm8_4
  double v80; // xmm0_8
  float v81; // xmm7_4
  double v82; // xmm0_8
  float v83; // xmm6_4
  double v84; // xmm0_8
  double v85; // xmm0_8
  float v86; // xmm8_4
  double v87; // xmm0_8
  float v88; // xmm7_4
  double v89; // xmm0_8
  float v90; // xmm6_4
  double v91; // xmm0_8
  double v92; // xmm0_8
  float v93; // xmm7_4
  double v94; // xmm0_8
  float v95; // xmm6_4
  double v96; // xmm0_8
  __int64 v97; // rbx
  int v98; // edi
  unsigned int v99; // eax
  unsigned int v100; // eax
  unsigned int v101; // eax
  unsigned int v102; // eax
  __int64 result; // rax
  volatile signed __int32 *v104; // rbx
  volatile signed __int32 *v105; // rbx
  volatile signed __int32 *v106; // rbx
  volatile signed __int32 *v107; // rbx
  __int64 v108; // rbx
  int X; // [rsp+28h] [rbp-100h]
  __int128 v110; // [rsp+B8h] [rbp-70h] BYREF
  __int128 v111; // [rsp+C8h] [rbp-60h] BYREF
  float v112; // [rsp+D8h] [rbp-50h]
  int v113; // [rsp+E0h] [rbp-48h]
  __int32 v114; // [rsp+E4h] [rbp-44h]
  __int32 v115; // [rsp+E8h] [rbp-40h]
  float v116; // [rsp+ECh] [rbp-3Ch]
  __int32 v117; // [rsp+F0h] [rbp-38h]
  __int32 v118; // [rsp+F4h] [rbp-34h]
  __int32 v119; // [rsp+F8h] [rbp-30h]
  __int32 v120; // [rsp+FCh] [rbp-2Ch]
  __int32 v121; // [rsp+100h] [rbp-28h]
  __int32 v122; // [rsp+104h] [rbp-24h]
  __int64 v123; // [rsp+108h] [rbp-20h]
  __int128 v124; // [rsp+110h] [rbp-18h] BYREF
  __int128 v125; // [rsp+120h] [rbp-8h] BYREF
  __int128 v126; // [rsp+130h] [rbp+8h] BYREF
  float v127; // [rsp+140h] [rbp+18h]
  float v128; // [rsp+144h] [rbp+1Ch]
  int v129; // [rsp+148h] [rbp+20h]
  int v130; // [rsp+14Ch] [rbp+24h]
  size_t v131[6]; // [rsp+150h] [rbp+28h] BYREF
  __int64 v132; // [rsp+180h] [rbp+58h] BYREF
  volatile signed __int32 *v133; // [rsp+188h] [rbp+60h]
  __m128 v134; // [rsp+198h] [rbp+70h]
  __int128 v135; // [rsp+1A8h] [rbp+80h]
  __int64 v136; // [rsp+1B8h] [rbp+90h] BYREF
  volatile signed __int32 *v137; // [rsp+1C0h] [rbp+98h]
  __int64 v138; // [rsp+1C8h] [rbp+A0h] BYREF
  volatile signed __int32 *v139; // [rsp+1D0h] [rbp+A8h]
  __m128 v140; // [rsp+1D8h] [rbp+B0h] BYREF
  __m128 v141; // [rsp+1E8h] [rbp+C0h] BYREF
  __m128 v142; // [rsp+1F8h] [rbp+D0h] BYREF
  __m128 v143[2]; // [rsp+208h] [rbp+E0h] BYREF
  __m128 v144; // [rsp+228h] [rbp+100h] BYREF
  __m128 v145; // [rsp+238h] [rbp+110h] BYREF
  __m128 v146; // [rsp+248h] [rbp+120h] BYREF
  __m128 v147; // [rsp+258h] [rbp+130h] BYREF
  __int64 v148; // [rsp+268h] [rbp+140h] BYREF
  volatile signed __int32 *v149; // [rsp+270h] [rbp+148h]
  __int128 v150; // [rsp+278h] [rbp+150h] BYREF
  __int128 v151; // [rsp+288h] [rbp+160h] BYREF
  __m128 v152; // [rsp+298h] [rbp+170h]
  __int64 v153; // [rsp+2A8h] [rbp+180h] BYREF
  volatile signed __int32 *v154; // [rsp+2B0h] [rbp+188h]
  __int128 v155; // [rsp+2B8h] [rbp+190h] BYREF
  __m128 v156; // [rsp+2C8h] [rbp+1A0h] BYREF

  v131[4] = -2LL;
  v7 = sub_180077A8C(a1, *(_DWORD *)(*a4 + 112));
  v8 = 0LL;
  v9 = 0;
  LOBYTE(v10) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025AE98, v10) )
    (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AEB8);
  LOBYTE(v11) = 1;
  if ( (*(unsigned __int8 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025AF38, v11) )
  {
    *(double *)v4.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AF58);
    v8 = v4;
  }
  if ( (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_18025B038, 0LL) )
    v9 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_18025B038, 0LL);
  v111 = 0LL;
  v13 = sub_1800BB1FC(*a4, v12);
  v123 = v13;
  v14 = *(_QWORD **)(v13 + 104);
  v15 = (_QWORD *)*v14;
  if ( (_QWORD *)*v14 != v14 )
  {
    do
    {
      v16 = *((_DWORD *)v15 + 8);
      sub_1800B8B00(v15[5], v16 == v9);
      if ( v16 == v9 )
        std::shared_ptr<__ExceptionPtr>::operator=(&v111, v15 + 5);
      v17 = (__int64 **)v15[2];
      if ( *((_BYTE *)v17 + 25) )
      {
        for ( i = v15[1]; !*(_BYTE *)(i + 25) && v15 == *(_QWORD **)(i + 16); i = *(_QWORD *)(i + 8) )
          v15 = (_QWORD *)i;
        v15 = (_QWORD *)i;
      }
      else
      {
        v15 = (_QWORD *)v15[2];
        for ( j = *v17; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v15 = j;
      }
    }
    while ( v15 != v14 );
    v13 = v123;
  }
  v20 = sub_180078228(a1);
  v151 = 0uLL;
  if ( (_QWORD)v111 )
  {
    v21 = (__int128 *)sub_1800B8A28(v111, &v132);
    v22 = 1;
  }
  else
  {
    v124 = 0LL;
    v21 = &v124;
    v22 = 2;
  }
  v151 = 0LL;
  v151 = *v21;
  *(_QWORD *)v21 = 0LL;
  *((_QWORD *)v21 + 1) = 0LL;
  if ( (v22 & 2) != 0 )
  {
    v22 &= ~2u;
    if ( *((_QWORD *)&v124 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v124 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v23 = *((_QWORD *)&v124 + 1);
        (***((void (__fastcall ****)(_QWORD))&v124 + 1))(*((_QWORD *)&v124 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v23 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v124 + 1) + 8LL))(*((_QWORD *)&v124 + 1));
      }
    }
  }
  if ( (v22 & 1) != 0 )
  {
    v24 = v133;
    if ( v133 )
    {
      if ( _InterlockedExchangeAdd(v133 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v24)(v24);
        if ( _InterlockedExchangeAdd(v24 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
  }
  if ( (_QWORD)v111 )
    v25 = *(_DWORD *)(v111 + 528);
  else
    v25 = 1065353216;
  v26 = 0;
  if ( (_QWORD)v151 )
  {
    v27 = *(int **)(v151 + 128);
    if ( v27 )
      v26 = *v27;
  }
  sub_1800A5238(v20, (__int64)&qword_18025D138, &v151);
  sub_1800A527C(v20, (__int64)&qword_18025D138, (_QWORD *)(v13 + 248));
  v28 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B058);
  v29 = LODWORD(v28);
  v30 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B078);
  v31 = LODWORD(v30);
  v32 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AF78);
  v33 = LODWORD(v32);
  v34 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AF98);
  v35 = LODWORD(v34);
  *(float *)&v34 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AFB8);
  v152.m128_u64[0] = __PAIR64__(v35, v33);
  v152.m128_u64[1] = LODWORD(v34) | 0x3F80000000000000LL;
  v152 = _mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v152);
  v134 = v152;
  sub_1800A5214(v20);
  *(float *)&v110 = (float)v26;
  *(_QWORD *)((char *)&v110 + 4) = __PAIR64__(v29, v25);
  HIDWORD(v110) = v31;
  v135 = v110;
  sub_1800A52C0(v20);
  v36 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AED8);
  v113 = LODWORD(v36);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AFD8);
  v37 = _mm_movelh_ps((__m128)(unsigned __int64)qword_18025EF08, (__m128)(unsigned int)dword_18025EF10);
  v155 = xmmword_1801E48A0;
  sub_180087EB0(*(double *)v37.m128_u64);
  v155 = (__int128)v37;
  sub_1800C36BC(a1, &v155, a4);
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AEF8);
  v115 = v37.m128_i32[0];
  v116 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AF18);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025BE98, 0LL);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025BEB8);
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025C0F8);
  v114 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025ADD8);
  v117 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025ADF8);
  v118 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AE18);
  v119 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AE38);
  v120 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AE58);
  v121 = v37.m128_i32[0];
  *(double *)v37.m128_u64 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025AFF8);
  v38 = v37.m128_f32[0];
  v122 = v37.m128_i32[0];
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B018);
  if ( v38 > 0.0 )
    *(_BYTE *)(a1 + 1457) = 1;
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025B0B8, 0LL);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025C138, 0LL);
  v148 = 0LL;
  v149 = 0LL;
  v39 = sub_180078228(a1);
  sub_1800A41D0(v39, &v148);
  (*(void (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 64LL))(v7, &unk_18025BE78, 0LL);
  v41 = v40;
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025BE58);
  LOBYTE(v42) = v41;
  sub_1800C6BB0(a1, v43, v42, &v148, (__int64)&qword_18025CC38);
  v44 = (*(unsigned int (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_18025A0F8, 0LL) != 0;
  v150 = 0uLL;
  v131[2] = 0LL;
  v131[3] = 0LL;
  sub_18000F444(v131, (__int64)&qword_18025E1E8);
  sub_1800A4B48(v20, &v150, v131);
  if ( v44 )
    v112 = 0.0;
  else
    v112 = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B2F8);
  v131[5] = (size_t)&v110;
  v110 = 0LL;
  if ( *((_QWORD *)&v150 + 1) )
    _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)&v150 + 1) + 8LL));
  v110 = v150;
  v125 = 0LL;
  v45 = a4[1];
  if ( v45 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v45 + 8));
    v45 = a4[1];
  }
  *(_QWORD *)&v125 = *a4;
  *((_QWORD *)&v125 + 1) = v45;
  v46 = sub_180077710(a1, &v138, 0LL, &v125);
  v126 = 0LL;
  v47 = a4[1];
  if ( v47 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v47 + 8));
    v47 = a4[1];
  }
  *(_QWORD *)&v126 = *a4;
  *((_QWORD *)&v126 + 1) = v47;
  v48 = sub_180077710(a1, &v136, 0LL, &v126);
  v49 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_18025B3F8, 0LL);
  v50 = *v46;
  sub_1800B1948(v50);
  v51 = *(float *)(v50 + 332);
  v52 = *(float *)(*v48 + 328LL);
  v53 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B3B8);
  v54 = LODWORD(v53);
  v55 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B398);
  v56 = LODWORD(v55);
  v57 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B378);
  v58 = LODWORD(v57);
  v59 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B358);
  v60 = LODWORD(v59);
  v61 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B338);
  v62 = LODWORD(v61);
  v63 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B318);
  v64 = LODWORD(v63);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180259C78);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_180259C58);
  X = v64;
  v65 = v112;
  sub_1800C6BF0(a1, v66, v67, v68, X, v62, v60, v58, v56, v54, v52, v51, v49, (__int64)&v110, &v148);
  v69 = v137;
  if ( v137 )
  {
    if ( _InterlockedExchangeAdd(v137 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v69)(v69);
      if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
    }
  }
  v70 = v139;
  if ( v139 )
  {
    if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v70)(v70);
      if ( _InterlockedExchangeAdd(v70 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v70 + 8LL))(v70);
    }
  }
  sub_1800A9A84(v150, &qword_18025E348, v65 > 0.0);
  sub_1800A9A84(v150, &qword_18025E2A8, 1);
  sub_1800A9A84(v150, &qword_18025E2C8, 1);
  sub_1800A9A84(v150, &qword_18025E308, 1);
  sub_1800A9A84(v150, &qword_18025E328, 1);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  sub_1800F5E1C(v148);
  v71 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B5F8);
  v72 = *(float *)&v71;
  v73 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B598);
  v74 = *(float *)&v73;
  v75 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B518);
  v76 = *(float *)&v75;
  v77 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B498);
  v140 = *sub_1800C1D70(&v144, *(float *)&v77, v76, v74, v72);
  v78 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B618);
  v79 = *(float *)&v78;
  v80 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B5B8);
  v81 = *(float *)&v80;
  v82 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B538);
  v83 = *(float *)&v82;
  v84 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B4B8);
  v141 = *sub_1800C1D70(&v145, *(float *)&v84, v83, v81, v79);
  v85 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B638);
  v86 = *(float *)&v85;
  v87 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B5D8);
  v88 = *(float *)&v87;
  v89 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B558);
  v90 = *(float *)&v89;
  v91 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B4D8);
  v142 = *sub_1800C1D70(&v146, *(float *)&v91, v90, v88, v86);
  v92 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B578);
  v93 = *(float *)&v92;
  v94 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B4F8);
  v95 = *(float *)&v94;
  v96 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B478);
  v143[0] = *sub_1800C1D70(&v147, *(float *)&v96, v95, v93, 0.0);
  sub_1800C6A88(a1, v143, &v142, &v141, &v140, &v148);
  (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v7 + 88LL))(v7, &unk_18025B458);
  v97 = v123;
  sub_18010616C(*(_QWORD *)(v123 + 120));
  v153 = 0LL;
  v154 = 0LL;
  sub_18010490C(*(_QWORD *)(v97 + 120), &v153);
  sub_180104938(*(_QWORD *)(v97 + 120), &v156);
  sub_1800A5238(v20, (__int64)&qword_18025E4E8, &v153);
  sub_1800A527C(v20, (__int64)&qword_18025E4E8, (_QWORD *)(v97 + 232));
  v143[1] = v156;
  sub_1800A52C0(v20);
  LODWORD(v97) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259EF8, 0LL);
  v98 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259F18, 0LL);
  v99 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259F58, 0LL);
  sub_180090E9C(0, v99);
  v100 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259F78, 1LL);
  sub_180090E9C(1, v100);
  v101 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259FB8, 2LL);
  sub_180090E9C(2, v101);
  v102 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v7 + 72LL))(v7, &unk_180259F98, 3LL);
  sub_180090E9C(3, v102);
  v127 = (float)(int)v97;
  v128 = (float)v98;
  v129 = 0;
  v130 = 0;
  sub_1800F638C(v148);
  if ( (_DWORD)v97 || v98 )
    *(_BYTE *)(a1 + 1457) = 1;
  result = sub_1800C4490(a1, (__int64)a4);
  v104 = v154;
  if ( v154 )
  {
    result = (unsigned int)_InterlockedDecrement(v154 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v104)(v104);
      result = (unsigned int)_InterlockedDecrement(v104 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v104 + 8LL))(v104);
    }
  }
  v105 = (volatile signed __int32 *)*((_QWORD *)&v150 + 1);
  if ( *((_QWORD *)&v150 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v150 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v105)(v105);
      result = (unsigned int)_InterlockedDecrement(v105 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v105 + 8LL))(v105);
    }
  }
  v106 = v149;
  if ( v149 )
  {
    result = (unsigned int)_InterlockedDecrement(v149 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v106)(v106);
      result = (unsigned int)_InterlockedDecrement(v106 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v106 + 8LL))(v106);
    }
  }
  v107 = (volatile signed __int32 *)*((_QWORD *)&v151 + 1);
  if ( *((_QWORD *)&v151 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v151 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v107)(v107);
      result = (unsigned int)_InterlockedDecrement(v107 + 3);
      if ( !(_DWORD)result )
        result = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v107 + 8LL))(v107);
    }
  }
  if ( *((_QWORD *)&v111 + 1) )
  {
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v111 + 1) + 8LL));
    if ( !(_DWORD)result )
    {
      v108 = *((_QWORD *)&v111 + 1);
      (***((void (__fastcall ****)(_QWORD))&v111 + 1))(*((_QWORD *)&v111 + 1));
      result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v108 + 12));
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v111 + 1) + 8LL))(*((_QWORD *)&v111 + 1));
    }
  }
  return result;
}
