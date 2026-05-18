/*
 * XREFs of sub_1800C9428 @ 0x1800C9428
 * Callers:
 *     sub_1800C2C40 @ 0x1800C2C40 (sub_1800C2C40.c)
 * Callees:
 *     sub_18000F3F4 @ 0x18000F3F4 (sub_18000F3F4.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18001002C (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     sub_18001110C @ 0x18001110C (sub_18001110C.c)
 *     unknown_libname_116 @ 0x18001141C (unknown_libname_116.c)
 *     sub_180017DE8 @ 0x180017DE8 (sub_180017DE8.c)
 *     sub_18001D8F4 @ 0x18001D8F4 (sub_18001D8F4.c)
 *     sub_180025F14 @ 0x180025F14 (sub_180025F14.c)
 *     sub_180026168 @ 0x180026168 (sub_180026168.c)
 *     sub_18007797C @ 0x18007797C (sub_18007797C.c)
 *     sub_180077A9C @ 0x180077A9C (sub_180077A9C.c)
 *     sub_18008365C @ 0x18008365C (sub_18008365C.c)
 *     sub_180083DF0 @ 0x180083DF0 (sub_180083DF0.c)
 *     sub_180084370 @ 0x180084370 (sub_180084370.c)
 *     GsDriverEntry @ 0x180085AAC (GsDriverEntry.c)
 *     sub_180086D28 @ 0x180086D28 (sub_180086D28.c)
 *     sub_180087340 @ 0x180087340 (sub_180087340.c)
 *     sub_18008B2A0 @ 0x18008B2A0 (sub_18008B2A0.c)
 *     sub_1800B0CF4 @ 0x1800B0CF4 (sub_1800B0CF4.c)
 *     sub_1800B0D54 @ 0x1800B0D54 (sub_1800B0D54.c)
 *     sub_1800B0F84 @ 0x1800B0F84 (sub_1800B0F84.c)
 *     sub_1800B1004 @ 0x1800B1004 (sub_1800B1004.c)
 *     sub_1800B1100 @ 0x1800B1100 (sub_1800B1100.c)
 *     sub_1800B1838 @ 0x1800B1838 (sub_1800B1838.c)
 *     sub_1800BB0EC @ 0x1800BB0EC (sub_1800BB0EC.c)
 *     sub_1800BB35C @ 0x1800BB35C (sub_1800BB35C.c)
 *     sub_1800BCBB8 @ 0x1800BCBB8 (sub_1800BCBB8.c)
 *     sub_1800BCE58 @ 0x1800BCE58 (sub_1800BCE58.c)
 *     sub_1800CAC5C @ 0x1800CAC5C (sub_1800CAC5C.c)
 *     sub_1800DB770 @ 0x1800DB770 (sub_1800DB770.c)
 *     sub_1800DD5DC @ 0x1800DD5DC (sub_1800DD5DC.c)
 *     sub_1800DD73C @ 0x1800DD73C (sub_1800DD73C.c)
 *     memcmp @ 0x180125AA8 (memcmp.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall sub_1800C9428(__int64 a1, __int64 *a2, unsigned int a3, _QWORD *a4)
{
  __int128 v4; // xmm2
  __int128 v5; // xmm3
  float v6; // xmm9_4
  float v7; // xmm10_4
  __int64 v10; // rax
  volatile signed __int32 *v11; // rsi
  __int64 v12; // r15
  __int64 v13; // r8
  char v14; // bl
  __int64 v15; // rcx
  char v16; // r13
  __int128 v17; // xmm1
  __int64 v18; // rbx
  volatile signed __int32 *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __m128 v23; // xmm11
  __int64 v24; // rbx
  __int64 *v25; // rdi
  volatile signed __int32 *v26; // r14
  const void **v27; // rax
  void **v28; // rdx
  const void *v29; // rcx
  void *v30; // r8
  bool v31; // bl
  __int64 v32; // rcx
  __int64 v33; // rax
  __int128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm0
  __m128 v37; // xmm1
  __m128 v38; // xmm1
  float v39; // xmm8_4
  __int64 *v40; // rax
  _OWORD *v41; // rax
  __int64 v42; // r8
  __int64 v43; // rdx
  signed __int32 v44; // eax
  __int64 v45; // rbx
  float v46; // xmm0_4
  char v47; // al
  __int64 v48; // rax
  float v49; // xmm0_4
  float v50; // xmm0_4
  double v51; // xmm0_8
  __int64 *v52; // rax
  volatile signed __int32 *v53; // rbx
  __int64 v54; // rbx
  _QWORD *v55; // rdx
  volatile signed __int32 *v56; // rbx
  __int64 v57; // rbx
  char v58; // r12
  unsigned int v59; // ebx
  __int64 *v60; // rax
  __int64 *v61; // rax
  float v62; // xmm8_4
  float v63; // xmm0_4
  float v64; // xmm7_4
  float v65; // xmm6_4
  float v66; // xmm6_4
  float v67; // xmm0_4
  float v68; // xmm0_4
  volatile signed __int32 *v69; // rbx
  __int64 v70; // rbx
  void *v71; // rcx
  __int64 *v72; // rax
  volatile signed __int32 *v73; // rdi
  __int64 v74; // r8
  __int64 v75; // rbx
  volatile signed __int32 *v76; // rbx
  __int64 v77; // rbx
  volatile signed __int32 *v78; // rbx
  __int64 v79; // rcx
  __int64 result; // rax
  __int64 v81; // [rsp+40h] [rbp-C8h]
  __int64 v82; // [rsp+50h] [rbp-B8h]
  __int128 v83; // [rsp+50h] [rbp-B8h]
  __int128 v84; // [rsp+50h] [rbp-B8h]
  __int128 v85; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v86; // [rsp+78h] [rbp-90h]
  __int128 v87; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v88; // [rsp+98h] [rbp-70h]
  __int64 v89; // [rsp+A0h] [rbp-68h]
  volatile signed __int32 *v90; // [rsp+A8h] [rbp-60h]
  __int64 v91; // [rsp+B0h] [rbp-58h] BYREF
  volatile signed __int32 *v92; // [rsp+B8h] [rbp-50h]
  _QWORD *v93; // [rsp+C0h] [rbp-48h]
  _DWORD v94[4]; // [rsp+C8h] [rbp-40h]
  __int128 v95; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v96; // [rsp+E8h] [rbp-20h] BYREF
  int v97; // [rsp+F0h] [rbp-18h]
  __int64 v98; // [rsp+F8h] [rbp-10h]
  volatile signed __int32 *v99; // [rsp+100h] [rbp-8h]
  __int128 v100; // [rsp+108h] [rbp+0h] BYREF
  char v101[16]; // [rsp+118h] [rbp+10h] BYREF
  __int64 v102; // [rsp+128h] [rbp+20h]
  __int64 v103; // [rsp+130h] [rbp+28h]
  char v104[16]; // [rsp+138h] [rbp+30h] BYREF
  __int64 v105; // [rsp+148h] [rbp+40h]
  __int64 v106; // [rsp+150h] [rbp+48h]
  __int128 v107; // [rsp+158h] [rbp+50h] BYREF
  unsigned __int64 v108[2]; // [rsp+168h] [rbp+60h] BYREF
  __int64 v109[4]; // [rsp+178h] [rbp+70h] BYREF
  __int64 v110[4]; // [rsp+198h] [rbp+90h] BYREF
  __int64 v111[4]; // [rsp+1B8h] [rbp+B0h] BYREF
  __int64 v112[4]; // [rsp+1D8h] [rbp+D0h] BYREF
  __int64 v113[4]; // [rsp+1F8h] [rbp+F0h] BYREF
  __int64 v114[4]; // [rsp+218h] [rbp+110h] BYREF
  __int64 v115[4]; // [rsp+238h] [rbp+130h] BYREF
  __int64 v116[5]; // [rsp+258h] [rbp+150h] BYREF
  _BYTE v117[24]; // [rsp+280h] [rbp+178h] BYREF
  __m128 v118; // [rsp+298h] [rbp+190h] BYREF
  __int128 v119; // [rsp+2A8h] [rbp+1A0h] BYREF
  _BYTE v120[16]; // [rsp+2B8h] [rbp+1B0h] BYREF
  __int128 v121; // [rsp+2C8h] [rbp+1C0h] BYREF
  __int128 v122; // [rsp+2D8h] [rbp+1D0h] BYREF
  __int128 v123; // [rsp+2E8h] [rbp+1E0h] BYREF
  _BYTE v124[8]; // [rsp+2F8h] [rbp+1F0h] BYREF
  volatile signed __int32 *v125; // [rsp+300h] [rbp+1F8h]
  __int64 v126; // [rsp+308h] [rbp+200h] BYREF
  volatile signed __int32 *v127; // [rsp+310h] [rbp+208h]
  _QWORD v128[7]; // [rsp+318h] [rbp+210h] BYREF
  _QWORD *v129; // [rsp+350h] [rbp+248h]
  _QWORD v130[3]; // [rsp+358h] [rbp+250h] BYREF
  unsigned __int64 v131; // [rsp+370h] [rbp+268h]
  _BYTE v132[12]; // [rsp+378h] [rbp+270h] BYREF
  __m128 v133; // [rsp+384h] [rbp+27Ch]
  __m128 v134; // [rsp+394h] [rbp+28Ch] BYREF
  _BYTE v135[68]; // [rsp+3A4h] [rbp+29Ch] BYREF
  __int64 v136; // [rsp+3E8h] [rbp+2E0h] BYREF
  int v137; // [rsp+3F0h] [rbp+2E8h]
  __int64 v138; // [rsp+3F8h] [rbp+2F0h] BYREF
  volatile signed __int32 *v139; // [rsp+400h] [rbp+2F8h]
  __int128 v140; // [rsp+408h] [rbp+300h]
  __m128 v141; // [rsp+418h] [rbp+310h]
  unsigned __int64 v142; // [rsp+428h] [rbp+320h] BYREF
  unsigned int v143; // [rsp+430h] [rbp+328h]
  __int64 v144; // [rsp+438h] [rbp+330h] BYREF
  volatile signed __int32 *v145; // [rsp+440h] [rbp+338h]
  __m128 v146; // [rsp+448h] [rbp+340h]
  __int64 v147; // [rsp+458h] [rbp+350h] BYREF
  volatile signed __int32 *v148; // [rsp+460h] [rbp+358h]
  __m256i v149; // [rsp+468h] [rbp+360h] BYREF
  __m256i v150; // [rsp+488h] [rbp+380h]
  __m256i v151; // [rsp+4A8h] [rbp+3A0h] BYREF
  __m256i v152; // [rsp+4C8h] [rbp+3C0h]
  void *Buf2[3]; // [rsp+4E8h] [rbp+3E0h] BYREF
  unsigned __int64 v154; // [rsp+500h] [rbp+3F8h]
  _QWORD v155[2]; // [rsp+508h] [rbp+400h] BYREF
  __m128i si128; // [rsp+518h] [rbp+410h]
  __int64 v157[4]; // [rsp+528h] [rbp+420h] BYREF
  __int64 v158[4]; // [rsp+548h] [rbp+440h] BYREF
  __int128 v159; // [rsp+568h] [rbp+460h]
  _OWORD v160[4]; // [rsp+578h] [rbp+470h] BYREF
  _BYTE v161[64]; // [rsp+5B8h] [rbp+4B0h] BYREF

  v116[4] = -2LL;
  v93 = a4;
  v88 = a3;
  v10 = sub_1800BB0EC(*a2, (__int64)a2);
  v11 = *(volatile signed __int32 **)(v10 + 192);
  if ( v11 )
  {
    _InterlockedAdd(v11 + 2, 1u);
    v11 = *(volatile signed __int32 **)(v10 + 192);
  }
  v81 = *(_QWORD *)(v10 + 184);
  v12 = sub_18007797C(a1, *(_DWORD *)(*a2 + 112));
  LOBYTE(v13) = 1;
  v14 = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v12 + 64LL))(v12, &unk_18025A218, v13);
  v141 = 0LL;
  v105 = 0LL;
  v106 = 7LL;
  *(_WORD *)v104 = 0;
  sub_180026168(v104, &unk_1801F4790, 0LL);
  (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v12 + 96LL))(v12, v157, &unk_18025A2B8, v104);
  sub_18001D8F4(v155);
  v138 = 0LL;
  v139 = 0LL;
  v95 = 0LL;
  v15 = a2[1];
  if ( v15 )
  {
    _InterlockedAdd((volatile signed __int32 *)(v15 + 8), 1u);
    v15 = a2[1];
  }
  *(_QWORD *)&v95 = *a2;
  *((_QWORD *)&v95 + 1) = v15;
  (*(void (__fastcall **)(__int64, __int64 *, _QWORD *, __int128 *))(*(_QWORD *)a1 + 32LL))(a1, &v138, v155, &v95);
  v16 = v138 != 0 ? v14 : 0;
  v87 = 0LL;
  v136 = qword_18026B298;
  v17 = HIDWORD(qword_18026B298);
  v137 = dword_18026B2A0;
  v112[2] = 0LL;
  v112[3] = 0LL;
  sub_18001110C(v112, (__int64)&qword_180258808);
  v18 = *(_QWORD *)sub_18008B2A0(*a2, (__int64)v124, v112);
  sub_180087340(v18);
  v82 = *(_QWORD *)(v18 + 172);
  v19 = v125;
  if ( v125 )
  {
    if ( _InterlockedExchangeAdd(v125 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v19)(v19);
      if ( _InterlockedExchangeAdd(v19 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v19 + 8LL))(v19);
    }
  }
  if ( v16 )
  {
    v102 = 0LL;
    v103 = 7LL;
    *(_WORD *)v101 = 0;
    sub_180026168(v101, &unk_1801F4794, 0LL);
    (*(void (__fastcall **)(__int64, __int64 *, void *, char *))(*(_QWORD *)v12 + 96LL))(
      v12,
      v158,
      &unk_18025A2D8,
      v101);
    sub_18001D8F4(Buf2);
    v20 = v138;
    v140 = 0LL;
    v21 = *(_QWORD *)(v138 + 64);
    if ( v21 )
    {
      while ( 1 )
      {
        v22 = *(_DWORD *)(v21 + 8);
        if ( !v22 )
          break;
        if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
        {
          v140 = *(_OWORD *)(v20 + 56);
          break;
        }
      }
    }
    sub_180084370(v140, v160);
    v23 = *(__m128 *)&ymmword_1801F2AC0.m256_f32[4];
    v141 = *(__m128 *)&ymmword_1801F2AC0.m256_f32[4];
    v147 = 0LL;
    v148 = 0LL;
    v113[2] = 0LL;
    v113[3] = 0LL;
    sub_18001110C(v113, (__int64)&unk_180258788);
    sub_18008B2A0(*a2, (__int64)&v147, v113);
    v24 = v147;
    sub_180087340(v147);
    v25 = *(__int64 **)(v24 + 32);
    v26 = *(volatile signed __int32 **)(v24 + 40);
    if ( v25 != (__int64 *)v26 )
    {
      do
      {
        v27 = (const void **)sub_18008365C(*v25, v130);
        v28 = Buf2;
        if ( v154 >= 0x10 )
          v28 = (void **)Buf2[0];
        v29 = v27;
        if ( (unsigned __int64)v27[3] >= 0x10 )
          v29 = *v27;
        v30 = (void *)v27[2];
        v31 = v30 == Buf2[2] && !memcmp(v29, v28, (size_t)v30);
        if ( v131 >= 0x10 )
        {
          v32 = v130[0];
          if ( v131 + 1 >= 0x1000 )
          {
            v32 = *(_QWORD *)(v130[0] - 8LL);
            if ( (unsigned __int64)(v130[0] - v32 - 8) > 0x1F )
            {
              v44 = o__invalid_parameter_noinfo_noreturn(v32, v131 + 40);
              goto LABEL_39;
            }
          }
          j_j__o_free(v32);
        }
        if ( v31 )
        {
          std::shared_ptr<__ExceptionPtr>::operator=(&v87, v25);
          v33 = sub_180083DF0(v87, (__int64)v132);
          v136 = *(_QWORD *)v33;
          v137 = *(_DWORD *)(v33 + 8);
          v17 = (unsigned __int64)qword_18025DF08;
          v96 = qword_18025DF08;
          v97 = dword_18025DF10;
          sub_180086D28(v87, v108, (__int64)&v96, 2);
          v141 = *sub_1800BCE58(&v134, (unsigned __int64 *)&v136, v108);
        }
        v25 += 2;
      }
      while ( v25 != (__int64 *)v26 );
      v23 = v141;
    }
    v6 = 1.0;
    v151.m256i_i32[0] = 1065353216;
    *(__int64 *)((char *)&v151.m256i_i64[1] + 4) = 0LL;
    v151.m256i_i32[5] = 1065353216;
    v152.m256i_i32[2] = 1065353216;
    *(__int64 *)((char *)&v152.m256i_i64[1] + 4) = 0LL;
    v152.m256i_i32[7] = 1065353216;
    *((_QWORD *)&v34 + 1) = v23.m128_u64[1];
    *(double *)&v34 = sub_1800CAC5C();
    *(_OWORD *)v151.m256i_i8 = v34;
    *(_OWORD *)&v151.m256i_u64[2] = v17;
    *(_OWORD *)v152.m256i_i8 = v4;
    *(_OWORD *)&v152.m256i_u64[2] = v5;
    sub_180083DF0(v140, (__int64)&v142);
    v146.m128_u64[0] = v142;
    v146.m128_u64[1] = v143 | 0x3F80000000000000LL;
    v35 = _mm_mul_ps(v146, v23);
    v36 = _mm_add_ps(_mm_shuffle_ps(v146, v35, 64), v35);
    v37 = _mm_add_ps(_mm_shuffle_ps(v35, v36, 48), v36);
    v38 = _mm_shuffle_ps(v37, v37, 170);
    v7 = 0.0;
    v39 = 0.0;
    v89 = 0LL;
    v90 = 0LL;
    v40 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v93 + 152LL))(*v93);
    v26 = (volatile signed __int32 *)v40[1];
    if ( v26 )
    {
      _InterlockedIncrement(v26 + 2);
      v26 = (volatile signed __int32 *)v40[1];
    }
    v89 = *v40;
    v90 = v26;
    if ( v38.m128_f32[0] >= 0.0 )
    {
      v159 = *(_OWORD *)&ymmword_1801F2AC0.m256_f32[4];
      v149.m256i_i32[0] = 1065353216;
      *(__int64 *)((char *)&v149.m256i_i64[1] + 4) = 0LL;
      v149.m256i_i32[5] = 1065353216;
      v150.m256i_i32[2] = 1065353216;
      *(__int64 *)((char *)&v150.m256i_i64[1] + 4) = 0LL;
      v150.m256i_i32[7] = 1065353216;
      *(_OWORD *)v149.m256i_i8 = COERCE_UNSIGNED_INT64(sub_1800CAC5C());
      *(__m128 *)&v149.m256i_u64[2] = v38;
      *(_OWORD *)v150.m256i_i8 = v4;
      *(_OWORD *)&v150.m256i_u64[2] = v5;
      v41 = (_OWORD *)sub_180017DE8((__int64)v135, &v149, v160);
      sub_180017DE8((__int64)v161, v41, &v151);
      v42 = v81;
      v86 = 0LL;
      v43 = *(_QWORD *)(v81 + 64);
      if ( v43 )
      {
        while ( 1 )
        {
          v44 = *(_DWORD *)(v43 + 8);
          if ( !v44 )
            break;
LABEL_39:
          if ( v44 == _InterlockedCompareExchange((volatile signed __int32 *)(v43 + 8), v44 + 1, v44) )
          {
            v86 = *(_OWORD *)(v42 + 56);
            break;
          }
        }
      }
      GsDriverEntry(v86, (__int64)v161);
      if ( *((_QWORD *)&v86 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v86 + 1))(*((_QWORD *)&v86 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v86 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v86 + 1) + 8LL))(*((_QWORD *)&v86 + 1));
        }
      }
      v45 = v138;
      v46 = *(float *)(v138 + 328);
      if ( v46 != *(float *)(v81 + 328) )
      {
        *(float *)(v81 + 328) = v46;
        sub_1800B1004(v81, 2);
        v45 = v138;
      }
      v47 = *(_BYTE *)(v45 + 336);
      if ( v47 != *(_BYTE *)(v81 + 336) )
      {
        *(_BYTE *)(v81 + 336) = v47;
        *(_BYTE *)(v81 + 1612) = v47;
        v45 = v138;
      }
      sub_1800B1838(v45);
      sub_1800B0CF4(v81, *(float *)(v45 + 332));
      v48 = v138;
      v49 = *(float *)(v138 + 320);
      if ( v49 != *(float *)(v81 + 320) )
      {
        *(float *)(v81 + 320) = v49;
        sub_1800B1004(v81, 2);
        v48 = v138;
      }
      v50 = *(float *)(v48 + 324);
      if ( v50 != *(float *)(v81 + 324) )
      {
        *(float *)(v81 + 324) = v50;
        sub_1800B1004(v81, 2);
      }
      v51 = (*(double (__fastcall **)(__int64, void *))(*(_QWORD *)v12 + 88LL))(v12, &unk_18025A238);
      v39 = *(float *)&v51;
      v85 = 0uLL;
      sub_1800BB35C(v89, &v85);
      if ( !(_QWORD)v85 )
      {
        v144 = 0LL;
        v145 = 0LL;
        sub_180077A9C(a1, &v144, v88);
        v52 = sub_1800BCBB8(&v126);
        std::shared_ptr<__ExceptionPtr>::operator=(&v85, v52);
        v53 = v127;
        if ( v127 )
        {
          if ( _InterlockedExchangeAdd(v127 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v53)(v53);
            if ( _InterlockedExchangeAdd(v53 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v53 + 8LL))(v53);
          }
        }
        v54 = v85;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)v85 + 40LL))(v85, v144, 1LL);
        *(_DWORD *)(v54 + 176) = 1;
        v107 = v85;
        v85 = 0uLL;
        sub_1800DB770(v89, &v107);
        *(_QWORD *)(v81 + 1696) = &Spectre::Engine::ImageProcessingEffectPlanarReflection `RTTI Type Descriptor';
        v128[0] = &std::_Func_impl_no_alloc<_lambda_9dc966182ab09ffe1b1dacc2a0a25511_,void,Spectre::Engine::ImageProcessingEffect const &,std::shared_ptr<Spectre::Engine::Texture> const &>::`vftable';
        v128[1] = a1;
        v129 = v128;
        sub_180025F14((__int64)v128, v81 + 1704);
        if ( v129 )
        {
          v55 = v128;
          LOBYTE(v55) = v129 != v128;
          (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v129 + 32LL))(v129, v55);
        }
        v56 = v145;
        if ( v145 )
        {
          if ( _InterlockedExchangeAdd(v145 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v56)(v56);
            if ( _InterlockedExchangeAdd(v56 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v56 + 8LL))(v56);
          }
        }
      }
      if ( *((_QWORD *)&v85 + 1) )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v85 + 1) + 8LL), 0xFFFFFFFF) == 1 )
        {
          v57 = *((_QWORD *)&v85 + 1);
          (***((void (__fastcall ****)(_QWORD))&v85 + 1))(*((_QWORD *)&v85 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v57 + 12), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v85 + 1) + 8LL))(*((_QWORD *)&v85 + 1));
        }
      }
    }
    v58 = (*(__int64 (__fastcall **)(__int64, void *, _QWORD))(*(_QWORD *)v12 + 64LL))(v12, &unk_18025A298, 0LL);
    v94[0] = 5;
    v94[1] = 4;
    v94[2] = 2;
    v59 = v94[(*(int (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v12 + 72LL))(v12, &unk_18025A258, 2LL)];
    v60 = (__int64 *)sub_1800DD73C(v89, v117, v59);
    sub_1800B0F84(v81, v60);
    v61 = (__int64 *)sub_1800DD5DC(v89, v120, v59);
    sub_1800B0D54(v81, v61);
    *(_BYTE *)(v81 + 465) |= 3u;
    if ( v39 >= 0.5 )
    {
      v62 = v39 + v39;
      v66 = v6 - (float)(v62 - v6);
      v64 = (float)(v66 * 0.050000001) + (float)(v62 - v6);
      v65 = (float)(v66 * 0.5) + (float)(v62 - v6);
    }
    else
    {
      v62 = v39 + v39;
      v63 = (float)(v6 - v62) * v7;
      v64 = (float)(v62 * 0.050000001) + v63;
      v65 = (float)(v62 * 0.5) + v63;
    }
    if ( v58 )
    {
      v64 = v6;
      v65 = v6;
    }
    v67 = fmaxf(v62, v7);
    v68 = fminf(v67, v6);
    if ( !v58 )
      v7 = v6 / (float)(*(float *)&v82 * 3.5);
    *(_QWORD *)&v83 = __PAIR64__(LODWORD(v64), LODWORD(v68));
    *((_QWORD *)&v83 + 1) = __PAIR64__(LODWORD(v7), LODWORD(v65));
    if ( v138 )
    {
      v119 = v83;
      v114[2] = 0LL;
      v114[3] = 0LL;
      sub_18000F3F4(v114, (__int64)&qword_18025BB38);
      sub_1800B1100(v138, v114, &v119, -1);
      v123 = xmmword_18026B270;
      v115[2] = 0LL;
      v115[3] = 0LL;
      sub_18000F3F4(v115, (__int64)&qword_18025BB18);
      sub_1800B1100(v138, v115, &v123, -1);
      v121 = xmmword_18026B270;
      v111[2] = 0LL;
      v111[3] = 0LL;
      sub_18000F3F4(v111, (__int64)&qword_18025BB58);
      sub_1800B1100(v138, v111, &v121, -1);
    }
    v122 = xmmword_18026B270;
    v116[2] = 0LL;
    v116[3] = 0LL;
    sub_18000F3F4(v116, (__int64)&qword_18025BB38);
    sub_1800B1100(v81, v116, &v122, -1);
    LODWORD(v84) = 1053609165;
    *(_QWORD *)((char *)&v84 + 4) = v136;
    HIDWORD(v84) = v137;
    v100 = v84;
    v109[2] = 0LL;
    v109[3] = 0LL;
    sub_18000F3F4(v109, (__int64)&qword_18025BB18);
    sub_1800B1100(v81, v109, &v100, -1);
    v133 = v23;
    v118 = v23;
    v110[2] = 0LL;
    v110[3] = 0LL;
    sub_18000F3F4(v110, (__int64)&qword_18025BB58);
    sub_1800B1100(v81, v110, &v118, -1);
    if ( v26 )
    {
      if ( _InterlockedExchangeAdd(v26 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v26)(v26);
        if ( _InterlockedExchangeAdd(v26 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v26 + 8LL))(v26);
      }
    }
    v69 = v148;
    if ( v148 )
    {
      if ( _InterlockedExchangeAdd(v148 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v69)(v69);
        if ( _InterlockedExchangeAdd(v69 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v69 + 8LL))(v69);
      }
    }
    if ( *((_QWORD *)&v140 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v140 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        v70 = *((_QWORD *)&v140 + 1);
        (***((void (__fastcall ****)(_QWORD))&v140 + 1))(*((_QWORD *)&v140 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v70 + 12), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v140 + 1) + 8LL))(*((_QWORD *)&v140 + 1));
      }
    }
    if ( v154 >= 0x10 )
    {
      v71 = Buf2[0];
      if ( v154 + 1 >= 0x1000 )
      {
        v71 = (void *)*((_QWORD *)Buf2[0] - 1);
        if ( (unsigned __int64)((char *)Buf2[0] - (char *)v71 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v71, v154 + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v71);
    }
    unknown_libname_116(v158);
  }
  *(_BYTE *)(v81 + 72) = v16;
  v98 = 0LL;
  v99 = 0LL;
  v72 = (__int64 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v93 + 152LL))(*v93);
  v73 = (volatile signed __int32 *)v72[1];
  if ( v73 )
  {
    _InterlockedAdd(v73 + 2, 1u);
    v73 = (volatile signed __int32 *)v72[1];
  }
  v98 = *v72;
  v99 = v73;
  v91 = 0LL;
  v92 = 0LL;
  sub_1800BB35C(v98, &v91);
  v75 = v91;
  if ( v91 )
  {
    LOBYTE(v74) = 1;
    *(_BYTE *)(v75 + 232) = (*(__int64 (__fastcall **)(__int64, void *, __int64))(*(_QWORD *)v12 + 64LL))(
                              v12,
                              &unk_18025A278,
                              v74);
  }
  if ( v92 )
  {
    if ( _InterlockedExchangeAdd(v92 + 2, 0xFFFFFFFF) == 1 )
    {
      v76 = v92;
      (**(void (__fastcall ***)(volatile signed __int32 *))v92)(v92);
      if ( _InterlockedExchangeAdd(v76 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v92 + 8LL))(v92);
    }
  }
  if ( v73 )
  {
    if ( _InterlockedExchangeAdd(v73 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v73)(v73);
      if ( _InterlockedExchangeAdd(v73 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v73 + 8LL))(v73);
    }
  }
  if ( *((_QWORD *)&v87 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v87 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      v77 = *((_QWORD *)&v87 + 1);
      (***((void (__fastcall ****)(_QWORD))&v87 + 1))(*((_QWORD *)&v87 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v77 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v87 + 1) + 8LL))(*((_QWORD *)&v87 + 1));
    }
  }
  v78 = v139;
  if ( v139 )
  {
    if ( _InterlockedExchangeAdd(v139 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v78)(v78);
      if ( _InterlockedExchangeAdd(v78 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v78 + 8LL))(v78);
    }
  }
  if ( si128.m128i_i64[1] >= 0x10uLL )
  {
    v79 = v155[0];
    if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
    {
      v79 = *(_QWORD *)(v155[0] - 8LL);
      if ( (unsigned __int64)(v155[0] - v79 - 8) > 0x1F )
      {
        o__invalid_parameter_noinfo_noreturn(v79, si128.m128i_i64[1] + 40);
        __debugbreak();
      }
    }
    j_j__o_free(v79);
  }
  si128 = _mm_load_si128(xmmword_180144F90);
  LOBYTE(v155[0]) = 0;
  result = unknown_libname_116(v157);
  if ( v11 )
  {
    result = (unsigned int)_InterlockedDecrement(v11 + 2);
    if ( !(_DWORD)result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
      result = (unsigned int)_InterlockedDecrement(v11 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
    }
  }
  return result;
}
