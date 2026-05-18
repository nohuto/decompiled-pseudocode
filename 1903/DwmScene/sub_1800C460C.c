/*
 * XREFs of sub_1800C460C @ 0x1800C460C
 * Callers:
 *     sub_1800BE5E0 @ 0x1800BE5E0 (sub_1800BE5E0.c)
 *     sub_1800C3080 @ 0x1800C3080 (sub_1800C3080.c)
 * Callees:
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180077600 @ 0x180077600 (sub_180077600.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_18008633C @ 0x18008633C (sub_18008633C.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_180087414 @ 0x180087414 (sub_180087414.c)
 *     sub_1800B1004 @ 0x1800B1004 (sub_1800B1004.c)
 *     sub_1800BC84C @ 0x1800BC84C (sub_1800BC84C.c)
 *     sub_1800C20F0 @ 0x1800C20F0 (sub_1800C20F0.c)
 *     sub_1800C78DC @ 0x1800C78DC (sub_1800C78DC.c)
 *     sub_1800CB1C4 @ 0x1800CB1C4 (sub_1800CB1C4.c)
 *     sub_1800FE3B4 @ 0x1800FE3B4 (sub_1800FE3B4.c)
 *     sub_1800FE3C0 @ 0x1800FE3C0 (sub_1800FE3C0.c)
 *     sub_1800FE3C8 @ 0x1800FE3C8 (sub_1800FE3C8.c)
 *     sub_1800FE3D4 @ 0x1800FE3D4 (sub_1800FE3D4.c)
 *     sub_1800FE3E0 @ 0x1800FE3E0 (sub_1800FE3E0.c)
 *     sub_1800FE3EC @ 0x1800FE3EC (sub_1800FE3EC.c)
 *     sub_1800FE424 @ 0x1800FE424 (sub_1800FE424.c)
 *     sub_1800FE430 @ 0x1800FE430 (sub_1800FE430.c)
 *     sub_1800FE43C @ 0x1800FE43C (sub_1800FE43C.c)
 *     sub_1800FE474 @ 0x1800FE474 (sub_1800FE474.c)
 *     sub_1800FE4A4 @ 0x1800FE4A4 (sub_1800FE4A4.c)
 *     sub_1800FE4B0 @ 0x1800FE4B0 (sub_1800FE4B0.c)
 *     sub_1800FE4BC @ 0x1800FE4BC (sub_1800FE4BC.c)
 *     sub_1800FE4C8 @ 0x1800FE4C8 (sub_1800FE4C8.c)
 *     sub_1800FE4D4 @ 0x1800FE4D4 (sub_1800FE4D4.c)
 *     sub_1800FE524 @ 0x1800FE524 (sub_1800FE524.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_1800C460C(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  int v8; // xmm7_4
  int v9; // xmm8_4
  int v10; // xmm9_4
  float v11; // xmm6_4
  __int64 v12; // r8
  __int64 v13; // rdx
  signed __int32 v14; // eax
  __int64 v15; // rbx
  __int64 v16; // rbx
  __m128 v17; // xmm2
  _QWORD *v18; // rax
  __int64 v19; // rcx
  double v20; // xmm0_8
  _QWORD *v21; // rax
  __int64 v22; // rcx
  double v23; // xmm0_8
  _QWORD *v24; // rax
  __int64 v25; // rcx
  double v26; // xmm0_8
  _QWORD *v27; // rax
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // rax
  __int64 v34; // rcx
  _QWORD *v35; // rax
  __int64 v36; // rcx
  double v37; // xmm0_8
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  __int64 v40; // r8
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  _QWORD *v43; // rax
  __int64 v44; // rcx
  _QWORD *v45; // rax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  __int64 v48; // rcx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  _QWORD *v51; // rax
  __int64 v52; // rcx
  _QWORD *v53; // rax
  __int64 v54; // rcx
  _QWORD *v55; // rax
  __int64 v56; // rcx
  _QWORD *v57; // rax
  __int64 v58; // rcx
  _QWORD *v59; // rax
  __int64 v60; // rcx
  _QWORD *v61; // rax
  __int64 v62; // rcx
  _QWORD *v63; // rax
  __int64 v64; // rcx
  _QWORD *v65; // rax
  __int64 v66; // rcx
  _QWORD *v67; // rax
  __int64 v68; // rcx
  _QWORD *v69; // rax
  __int64 v70; // rcx
  unsigned int v71; // eax
  _QWORD *v72; // rax
  __int64 v73; // rcx
  unsigned int v74; // eax
  _QWORD *v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  _QWORD *v78; // rax
  __int64 v79; // rbx
  __int64 v80; // r8
  _QWORD *v81; // rax
  __int64 v82; // rdx
  __int64 v83; // rbx
  volatile signed __int32 *v84; // rbx
  volatile signed __int32 *v85; // rbx
  __int128 v86; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v87; // [rsp+38h] [rbp-D0h]
  __int64 v88; // [rsp+40h] [rbp-C8h]
  __int64 v89; // [rsp+48h] [rbp-C0h] BYREF
  volatile signed __int32 *v90; // [rsp+50h] [rbp-B8h]
  __int128 v91; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v92; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD *v93; // [rsp+78h] [rbp-90h] BYREF
  _QWORD *v94; // [rsp+80h] [rbp-88h]
  _QWORD *v95; // [rsp+88h] [rbp-80h] BYREF
  _QWORD *v96; // [rsp+90h] [rbp-78h]
  _QWORD *v97; // [rsp+98h] [rbp-70h] BYREF
  _QWORD *v98; // [rsp+A0h] [rbp-68h]
  _QWORD *v99; // [rsp+A8h] [rbp-60h] BYREF
  _QWORD *v100; // [rsp+B0h] [rbp-58h]
  _QWORD *v101; // [rsp+B8h] [rbp-50h] BYREF
  _QWORD *v102; // [rsp+C0h] [rbp-48h]
  _QWORD *v103; // [rsp+C8h] [rbp-40h] BYREF
  _QWORD *v104; // [rsp+D0h] [rbp-38h]
  _QWORD *v105; // [rsp+D8h] [rbp-30h] BYREF
  _QWORD *v106; // [rsp+E0h] [rbp-28h]
  _QWORD *v107; // [rsp+E8h] [rbp-20h] BYREF
  _QWORD *v108; // [rsp+F0h] [rbp-18h]
  _QWORD *v109; // [rsp+F8h] [rbp-10h] BYREF
  _QWORD *v110; // [rsp+100h] [rbp-8h]
  _QWORD *v111; // [rsp+108h] [rbp+0h] BYREF
  _QWORD *v112; // [rsp+110h] [rbp+8h]
  _QWORD *v113; // [rsp+118h] [rbp+10h] BYREF
  _QWORD *v114; // [rsp+120h] [rbp+18h]
  _QWORD *v115; // [rsp+128h] [rbp+20h] BYREF
  _QWORD *v116; // [rsp+130h] [rbp+28h]
  _QWORD *v117; // [rsp+138h] [rbp+30h] BYREF
  _QWORD *v118; // [rsp+140h] [rbp+38h]
  _QWORD *v119; // [rsp+148h] [rbp+40h] BYREF
  _QWORD *v120; // [rsp+150h] [rbp+48h]
  _QWORD *v121; // [rsp+158h] [rbp+50h] BYREF
  _QWORD *v122; // [rsp+160h] [rbp+58h]
  _QWORD *v123; // [rsp+168h] [rbp+60h] BYREF
  _QWORD *v124; // [rsp+170h] [rbp+68h]
  _QWORD *v125; // [rsp+178h] [rbp+70h] BYREF
  _QWORD *v126; // [rsp+180h] [rbp+78h]
  _QWORD *v127; // [rsp+188h] [rbp+80h] BYREF
  _QWORD *v128; // [rsp+190h] [rbp+88h]
  _QWORD *v129; // [rsp+198h] [rbp+90h] BYREF
  _QWORD *v130; // [rsp+1A0h] [rbp+98h]
  _QWORD *v131; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD *v132; // [rsp+1B0h] [rbp+A8h]
  _QWORD *v133; // [rsp+1B8h] [rbp+B0h] BYREF
  _QWORD *v134; // [rsp+1C0h] [rbp+B8h]
  _QWORD *v135; // [rsp+1C8h] [rbp+C0h] BYREF
  _QWORD *v136; // [rsp+1D0h] [rbp+C8h]
  _QWORD *v137; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD *v138; // [rsp+1E0h] [rbp+D8h]
  _QWORD *v139; // [rsp+1E8h] [rbp+E0h] BYREF
  _QWORD *v140; // [rsp+1F0h] [rbp+E8h]
  _QWORD v141[2]; // [rsp+1F8h] [rbp+F0h] BYREF
  _QWORD v142[4]; // [rsp+208h] [rbp+100h] BYREF
  __m128 v143; // [rsp+228h] [rbp+120h] BYREF
  __int128 v144; // [rsp+238h] [rbp+130h] BYREF
  __int64 v145; // [rsp+248h] [rbp+140h] BYREF
  volatile signed __int32 *v146; // [rsp+250h] [rbp+148h]

  v142[2] = -2LL;
  if ( *(_QWORD *)(a3 + 16) )
  {
    v6 = sub_18007797C(a1, *(_DWORD *)(*a2 + 112LL));
    v145 = 0LL;
    v146 = 0LL;
    v92 = 0LL;
    v7 = a2[1];
    if ( v7 )
    {
      _InterlockedAdd((volatile signed __int32 *)(v7 + 8), 1u);
      v7 = a2[1];
    }
    *(_QWORD *)&v92 = *a2;
    *((_QWORD *)&v92 + 1) = v7;
    sub_180077600(a1, &v145, 0LL, &v92);
    if ( (*(_DWORD *)(v145 + 440) & 0x2000000) != 0 )
    {
      v89 = 0LL;
      v90 = 0LL;
      sub_1800BC84C(&v89, &v145);
      v8 = qword_18026B298;
      v9 = HIDWORD(qword_18026B298);
      v10 = dword_18026B2A0;
      v144 = xmmword_18025E020;
      v11 = 0.0;
      v86 = 0LL;
      v12 = v145;
      if ( v145 )
      {
        v91 = 0LL;
        v13 = *(_QWORD *)(v145 + 64);
        if ( v13 )
        {
          while ( 1 )
          {
            v14 = *(_DWORD *)(v13 + 8);
            if ( !v14 )
              break;
            if ( v14 == _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 8), v14 + 1, v14) )
            {
              v91 = *(_OWORD *)(v12 + 56);
              break;
            }
          }
        }
        std::shared_ptr<__ExceptionPtr>::operator=(&v86, (__int64 *)&v91);
        if ( *((_QWORD *)&v91 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v91 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v15 = *((_QWORD *)&v91 + 1);
            (***((void (__fastcall ****)(_QWORD))&v91 + 1))(*((_QWORD *)&v91 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v15 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v91 + 1) + 8LL))(*((_QWORD *)&v91 + 1));
          }
        }
        v11 = *(float *)(v145 + 328);
        v16 = v86;
        if ( (_QWORD)v86 )
        {
          sub_180087340(v86);
          v87 = *(_QWORD *)(v16 + 144);
          LODWORD(v88) = *(_DWORD *)(v16 + 152);
          v8 = v87;
          v9 = HIDWORD(v87);
          v10 = v88;
          sub_180087340(v16);
          v17 = (__m128)_mm_loadu_si128((const __m128i *)(v16 + 156));
          LODWORD(v144) = v17.m128_i32[0];
          DWORD1(v144) = _mm_shuffle_ps(v17, v17, 85).m128_u32[0];
          DWORD2(v144) = _mm_shuffle_ps(v17, v17, 170).m128_u32[0];
          HIDWORD(v144) = _mm_shuffle_ps(v17, v17, 255).m128_u32[0];
        }
      }
      else
      {
        v16 = v86;
      }
      sub_1800CB1C4(a3, &v99, &unk_18025ACF8);
      v18 = v99;
      v19 = 0LL;
      if ( v99 != v100 )
      {
        do
        {
          ++v19;
          v18 = (_QWORD *)*v18;
        }
        while ( v18 != v100 );
        if ( v19 )
        {
          v20 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025ACF8);
          v8 = LODWORD(v20);
        }
      }
      sub_1800CB1C4(a3, &v101, &unk_18025AD18);
      v21 = v101;
      v22 = 0LL;
      if ( v101 != v102 )
      {
        do
        {
          ++v22;
          v21 = (_QWORD *)*v21;
        }
        while ( v21 != v102 );
        if ( v22 )
        {
          v23 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AD18);
          v9 = LODWORD(v23);
        }
      }
      sub_1800CB1C4(a3, &v103, &unk_18025AD38);
      v24 = v103;
      v25 = 0LL;
      if ( v103 != v104 )
      {
        do
        {
          ++v25;
          v24 = (_QWORD *)*v24;
        }
        while ( v24 != v104 );
        if ( v25 )
        {
          v26 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AD38);
          v10 = LODWORD(v26);
        }
      }
      sub_1800CB1C4(a3, &v105, &unk_18025AD58);
      v27 = v105;
      v28 = 0LL;
      if ( v105 != v106 )
      {
        do
        {
          ++v28;
          v27 = (_QWORD *)*v27;
        }
        while ( v27 != v106 );
        if ( v28 )
          LODWORD(v144) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AD58);
      }
      sub_1800CB1C4(a3, &v107, &unk_18025AD78);
      v29 = v107;
      v30 = 0LL;
      if ( v107 != v108 )
      {
        do
        {
          ++v30;
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != v108 );
        if ( v30 )
          DWORD1(v144) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AD78);
      }
      sub_1800CB1C4(a3, &v109, &unk_18025AD98);
      v31 = v109;
      v32 = 0LL;
      if ( v109 != v110 )
      {
        do
        {
          ++v32;
          v31 = (_QWORD *)*v31;
        }
        while ( v31 != v110 );
        if ( v32 )
          DWORD2(v144) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AD98);
      }
      sub_1800CB1C4(a3, &v111, &unk_18025ADB8);
      v33 = v111;
      v34 = 0LL;
      if ( v111 != v112 )
      {
        do
        {
          ++v34;
          v33 = (_QWORD *)*v33;
        }
        while ( v33 != v112 );
        if ( v34 )
          HIDWORD(v144) = (*(float (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025ADB8);
      }
      sub_1800CB1C4(a3, &v113, &unk_18025ADD8);
      v35 = v113;
      v36 = 0LL;
      if ( v113 != v114 )
      {
        do
        {
          ++v36;
          v35 = (_QWORD *)*v35;
        }
        while ( v35 != v114 );
        if ( v36 )
        {
          v37 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025ADD8);
          v11 = *(float *)&v37;
        }
      }
      sub_1800C20F0((__m128 *)&v144);
      v38 = v145;
      if ( v145 && v11 != *(float *)(v145 + 328) )
      {
        *(float *)(v145 + 328) = v11;
        sub_1800B1004(v38, 2);
      }
      if ( v16 )
      {
        sub_180087414(v16);
        *(_DWORD *)(v16 + 144) = v8;
        *(_DWORD *)(v16 + 148) = v9;
        *(_DWORD *)(v16 + 152) = v10;
        v39 = _InterlockedIncrement64(&qword_180258748);
        v40 = v86;
        *(_QWORD *)(v86 + 208) = v39;
        v41 = *(_QWORD *)(v40 + 216);
        if ( v39 >= v41 )
          v41 = v39;
        *(_QWORD *)(v40 + 216) = v41;
        v143 = (__m128)v144;
        sub_18008633C(v40, &v143);
      }
      v42 = v89;
      if ( v89 )
      {
        sub_1800CB1C4(a3, &v115, &unk_18025B018);
        v43 = v115;
        v44 = 0LL;
        if ( v115 != v116 )
        {
          do
          {
            ++v44;
            v43 = (_QWORD *)*v43;
          }
          while ( v43 != v116 );
          if ( v44 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025B018);
            sub_1800FE3E0(v42);
          }
        }
        sub_1800CB1C4(a3, &v93, &unk_18025AFF8);
        v45 = v93;
        v46 = 0LL;
        if ( v93 != v94 )
        {
          do
          {
            ++v46;
            v45 = (_QWORD *)*v45;
          }
          while ( v45 != v94 );
          if ( v46 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AFF8);
            sub_1800FE3B4(v42);
          }
        }
        sub_1800CB1C4(a3, &v97, &unk_18025B078);
        v47 = v97;
        v48 = 0LL;
        if ( v97 != v98 )
        {
          do
          {
            ++v48;
            v47 = (_QWORD *)*v47;
          }
          while ( v47 != v98 );
          if ( v48 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025B078);
            sub_1800FE3D4(v42);
          }
        }
        sub_1800CB1C4(a3, &v95, &unk_18025AF18);
        v49 = v95;
        v50 = 0LL;
        if ( v95 != v96 )
        {
          do
          {
            ++v50;
            v49 = (_QWORD *)*v49;
          }
          while ( v49 != v96 );
          if ( v50 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AF18);
            sub_1800FE424(v42);
          }
        }
        sub_1800CB1C4(a3, &v117, &unk_18025AEF8);
        v51 = v117;
        v52 = 0LL;
        if ( v117 != v118 )
        {
          do
          {
            ++v52;
            v51 = (_QWORD *)*v51;
          }
          while ( v51 != v118 );
          if ( v52 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AEF8);
            sub_1800FE430(v42);
          }
        }
        sub_1800CB1C4(a3, &v119, &unk_18025AF58);
        v53 = v119;
        v54 = 0LL;
        if ( v119 != v120 )
        {
          do
          {
            ++v54;
            v53 = (_QWORD *)*v53;
          }
          while ( v53 != v120 );
          if ( v54 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AF58);
            sub_1800FE43C(v42);
          }
        }
        sub_1800CB1C4(a3, &v121, &unk_18025AF78);
        v55 = v121;
        v56 = 0LL;
        if ( v121 != v122 )
        {
          do
          {
            ++v56;
            v55 = (_QWORD *)*v55;
          }
          while ( v55 != v122 );
          if ( v56 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AF78);
            sub_1800FE3EC(v42);
          }
        }
        sub_1800CB1C4(a3, &v123, &unk_18025AF38);
        v57 = v123;
        v58 = 0LL;
        if ( v123 != v124 )
        {
          do
          {
            ++v58;
            v57 = (_QWORD *)*v57;
          }
          while ( v57 != v124 );
          if ( v58 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AF38);
            sub_1800FE3C8(v42);
          }
        }
        sub_1800CB1C4(a3, &v125, &unk_18025AF98);
        v59 = v125;
        v60 = 0LL;
        if ( v125 != v126 )
        {
          do
          {
            ++v60;
            v59 = (_QWORD *)*v59;
          }
          while ( v59 != v126 );
          if ( v60 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AF98);
            sub_1800FE4A4(v42);
          }
        }
        sub_1800CB1C4(a3, &v127, &unk_18025AFB8);
        v61 = v127;
        v62 = 0LL;
        if ( v127 != v128 )
        {
          do
          {
            ++v62;
            v61 = (_QWORD *)*v61;
          }
          while ( v61 != v128 );
          if ( v62 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AFB8);
            sub_1800FE4BC(v42);
          }
        }
        sub_1800CB1C4(a3, &v129, &unk_18025AFD8);
        v63 = v129;
        v64 = 0LL;
        if ( v129 != v130 )
        {
          do
          {
            ++v64;
            v63 = (_QWORD *)*v63;
          }
          while ( v63 != v130 );
          if ( v64 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025AFD8);
            sub_1800FE4B0(v42);
          }
        }
        sub_1800CB1C4(a3, &v131, &unk_18025B098);
        v65 = v131;
        v66 = 0LL;
        if ( v131 != v132 )
        {
          do
          {
            ++v66;
            v65 = (_QWORD *)*v65;
          }
          while ( v65 != v132 );
          if ( v66 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025B098);
            sub_1800FE4D4(v42);
          }
        }
        sub_1800CB1C4(a3, &v133, &unk_18025B0B8);
        v67 = v133;
        v68 = 0LL;
        if ( v133 != v134 )
        {
          do
          {
            ++v68;
            v67 = (_QWORD *)*v67;
          }
          while ( v67 != v134 );
          if ( v68 )
          {
            (*(void (__fastcall **)(__int64, void *))(*(_QWORD *)v6 + 88LL))(v6, &unk_18025B0B8);
            sub_1800FE4C8(v42);
          }
        }
        sub_1800CB1C4(a3, &v135, &unk_18025AED8);
        v69 = v135;
        v70 = 0LL;
        if ( v135 != v136 )
        {
          do
          {
            ++v70;
            v69 = (_QWORD *)*v69;
          }
          while ( v69 != v136 );
          if ( v70 )
          {
            v71 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_18025AED8, 0LL);
            sub_1800FE3C0(v42, v71);
          }
        }
        sub_1800CB1C4(a3, &v137, &unk_18025B0D8);
        v72 = v137;
        v73 = 0LL;
        if ( v137 != v138 )
        {
          do
          {
            ++v73;
            v72 = (_QWORD *)*v72;
          }
          while ( v72 != v138 );
          if ( v73 )
          {
            v74 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 72LL))(v6, &unk_18025B0D8, 0LL);
            sub_1800FE474(v42, v74);
          }
        }
        sub_1800CB1C4(a3, &v139, &unk_18025B058);
        v75 = v139;
        v76 = 0LL;
        if ( v139 != v140 )
        {
          do
          {
            ++v76;
            v75 = (_QWORD *)*v75;
          }
          while ( v75 != v140 );
          if ( v76 )
          {
            LOBYTE(v77) = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v6 + 64LL))(
                            v6,
                            &unk_18025B058,
                            0LL);
            sub_1800FE524(v42, v77);
          }
        }
        sub_1800CB1C4(a3, v141, &unk_18025AE38);
        v78 = (_QWORD *)v141[0];
        v79 = 0LL;
        while ( v78 != (_QWORD *)v141[1] )
        {
          ++v79;
          v78 = (_QWORD *)*v78;
        }
        sub_1800CB1C4(a3, v142, &unk_18025B038);
        v81 = (_QWORD *)v142[0];
        v82 = 0LL;
        while ( v81 != (_QWORD *)v142[1] )
        {
          ++v82;
          v81 = (_QWORD *)*v81;
        }
        LOBYTE(v80) = v82 != 0;
        sub_1800C78DC(a1, &v89, v80);
      }
      if ( *((_QWORD *)&v86 + 1) )
      {
        if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL)) )
        {
          v83 = *((_QWORD *)&v86 + 1);
          (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
          if ( !_InterlockedDecrement((volatile signed __int32 *)(v83 + 12)) )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
        }
      }
      if ( v90 )
      {
        if ( !_InterlockedDecrement(v90 + 2) )
        {
          v84 = v90;
          (**(void (__fastcall ***)(volatile signed __int32 *))v90)(v90);
          if ( !_InterlockedDecrement(v84 + 3) )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v90 + 8LL))(v90);
        }
      }
    }
    v85 = v146;
    if ( v146 && !_InterlockedDecrement(v146 + 2) )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v85)(v85);
      if ( !_InterlockedDecrement(v85 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v85 + 8LL))(v85);
    }
  }
}
