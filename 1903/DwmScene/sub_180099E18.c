/*
 * XREFs of sub_180099E18 @ 0x180099E18
 * Callers:
 *     sub_180099C60 @ 0x180099C60 (sub_180099C60.c)
 * Callees:
 *     sub_18000E118 @ 0x18000E118 (sub_18000E118.c)
 *     ??4?$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x18000FFB0 (--4-$shared_ptr@V__ExceptionPtr@@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     sub_180012230 @ 0x180012230 (sub_180012230.c)
 *     sub_180012630 @ 0x180012630 (sub_180012630.c)
 *     sub_18001765C @ 0x18001765C (sub_18001765C.c)
 *     sub_18006CDC0 @ 0x18006CDC0 (sub_18006CDC0.c)
 *     sub_180081CAC @ 0x180081CAC (sub_180081CAC.c)
 *     GsDriverEntry @ 0x180085AAC (GsDriverEntry.c)
 *     sub_180096378 @ 0x180096378 (sub_180096378.c)
 *     sub_1800963DC @ 0x1800963DC (sub_1800963DC.c)
 *     sub_18009643C @ 0x18009643C (sub_18009643C.c)
 *     sub_180097FFC @ 0x180097FFC (sub_180097FFC.c)
 *     sub_18009A640 @ 0x18009A640 (sub_18009A640.c)
 *     sub_18009C638 @ 0x18009C638 (sub_18009C638.c)
 *     sub_18009CD00 @ 0x18009CD00 (sub_18009CD00.c)
 *     sub_1800E2580 @ 0x1800E2580 (sub_1800E2580.c)
 *     sub_1800E275C @ 0x1800E275C (sub_1800E275C.c)
 *     sub_18011D988 @ 0x18011D988 (sub_18011D988.c)
 *     j_j__o_free @ 0x180125F84 (j_j__o_free.c)
 *     __security_check_cookie @ 0x180126090 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180127630 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=13
_QWORD *__fastcall sub_180099E18(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int a4,
        __int64 *a5,
        unsigned int a6,
        unsigned int a7,
        __int64 a8,
        float *a9,
        float *a10,
        char a11)
{
  char v14; // cl
  char v15; // al
  __int64 v16; // r8
  __int64 v17; // rdx
  signed __int32 v18; // eax
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rdx
  signed __int32 v22; // eax
  __int64 v23; // rax
  __int64 v24; // rbx
  _QWORD *v25; // rcx
  __int64 v26; // rcx
  volatile signed __int32 *v27; // rbx
  int v28; // r15d
  int v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // rbx
  __int64 v33; // rdx
  signed __int32 v34; // eax
  signed __int32 v35; // eax
  __int64 *v36; // rax
  volatile signed __int32 *v37; // rbx
  __int64 v38; // rbx
  char v39; // di
  __int64 v40; // r8
  const char *v41; // r8
  __int64 v42; // rcx
  float v43; // xmm2_4
  volatile signed __int32 *v44; // rbx
  volatile signed __int32 *v45; // rbx
  _QWORD *v47; // rax
  volatile signed __int32 *v48; // rbx
  __int128 v49; // [rsp+28h] [rbp-E0h]
  __int64 v50; // [rsp+38h] [rbp-D0h] BYREF
  volatile signed __int32 *v51; // [rsp+40h] [rbp-C8h]
  __int128 v52; // [rsp+48h] [rbp-C0h]
  __int128 v53; // [rsp+58h] [rbp-B0h]
  __int128 v54; // [rsp+68h] [rbp-A0h]
  int v55; // [rsp+78h] [rbp-90h]
  __int128 v56; // [rsp+80h] [rbp-88h] BYREF
  __int64 v57[5]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v58; // [rsp+B8h] [rbp-50h] BYREF
  volatile signed __int32 *v59; // [rsp+C0h] [rbp-48h]
  __int64 v60; // [rsp+C8h] [rbp-40h] BYREF
  volatile signed __int32 *v61; // [rsp+D0h] [rbp-38h]
  __int64 v62; // [rsp+D8h] [rbp-30h] BYREF
  volatile signed __int32 *v63; // [rsp+E0h] [rbp-28h]
  __int64 v64; // [rsp+E8h] [rbp-20h] BYREF
  float Px; // [rsp+F0h] [rbp-18h] BYREF
  float v66; // [rsp+F8h] [rbp-10h] BYREF
  _DWORD v67[6]; // [rsp+100h] [rbp-8h] BYREF
  __int64 v68[2]; // [rsp+118h] [rbp+10h] BYREF
  __m128i si128; // [rsp+128h] [rbp+20h]
  __int64 v70[2]; // [rsp+138h] [rbp+30h] BYREF
  __m128i v71; // [rsp+148h] [rbp+40h]
  __int128 v72; // [rsp+158h] [rbp+50h] BYREF
  float v73; // [rsp+174h] [rbp+6Ch]
  float v74; // [rsp+184h] [rbp+7Ch]
  float v75; // [rsp+194h] [rbp+8Ch]

  v57[1] = -2LL;
  v57[2] = (__int64)a2;
  v64 = a3;
  v57[3] = (__int64)a5;
  v55 = 0;
  sub_18001765C(&v72, a8);
  v14 = sub_18009A640(&v72);
  if ( *((float *)&v72 + 3) != 0.0 || v73 != 0.0 || v74 != 0.0 || (v15 = 1, v75 != 1.0) )
    v15 = 0;
  if ( !v14 || !v15 )
  {
    sub_180081CAC(&v72, &xmmword_18025DFE0);
    si128 = _mm_load_si128(xmmword_180144F90);
    LOBYTE(v68[0]) = 0;
    LOBYTE(v16) = 0;
    sub_18000E118(
      v68,
      0xB5uLL,
      v16,
      "LOADED TRANSFORM IS NOT VALID Node ID=%.16X has a transform that is non-affine or not finite. Elements of the matr"
      "ix are either NaN or infinite. The matrix has been set to identity ");
    v52 = 0LL;
    v17 = *(_QWORD *)(a1 + 64);
    if ( v17 )
    {
      while ( 1 )
      {
        v18 = *(_DWORD *)(v17 + 8);
        if ( !v18 )
          break;
        if ( v18 == _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 8), v18 + 1, v18) )
        {
          v52 = *(_OWORD *)(a1 + 56);
          break;
        }
      }
    }
    v19 = (const char *)v68;
    if ( si128.m128i_i64[1] >= 0x10uLL )
      v19 = (const char *)v68[0];
    sub_18011D988(&unk_18025C740, 4LL, v19, *(_QWORD *)(v52 + 368));
    if ( *((_QWORD *)&v52 + 1) )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 8LL), 0xFFFFFFFF) == 1 )
      {
        (***((void (__fastcall ****)(_QWORD))&v52 + 1))(*((_QWORD *)&v52 + 1));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v52 + 1) + 12LL), 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v52 + 1) + 8LL))(*((_QWORD *)&v52 + 1));
      }
    }
    if ( si128.m128i_i64[1] >= 0x10uLL )
    {
      v20 = v68[0];
      if ( (unsigned __int64)(si128.m128i_i64[1] + 1) >= 0x1000 )
      {
        v20 = *(_QWORD *)(v68[0] - 8);
        if ( (unsigned __int64)(v68[0] - v20 - 8) > 0x1F )
        {
          o__invalid_parameter_noinfo_noreturn(v20, si128.m128i_i64[1] + 40);
          __debugbreak();
        }
      }
      j_j__o_free(v20);
    }
  }
  v53 = 0LL;
  v21 = *(_QWORD *)(a1 + 64);
  if ( v21 )
  {
    while ( 1 )
    {
      v22 = *(_DWORD *)(v21 + 8);
      if ( !v22 )
        break;
      if ( v22 == _InterlockedCompareExchange((volatile signed __int32 *)(v21 + 8), v22 + 1, v22) )
      {
        v53 = *(_OWORD *)(a1 + 56);
        break;
      }
    }
  }
  GsDriverEntry(v53, (__int64)&v72);
  if ( *((_QWORD *)&v53 + 1) )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v53 + 1))(*((_QWORD *)&v53 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v53 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v53 + 1) + 8LL))(*((_QWORD *)&v53 + 1));
    }
  }
  v23 = sub_18006CDC0(v64);
  v24 = sub_1800E2580(v23, a6, a4);
  *a2 = 0LL;
  a2[1] = 0LL;
  v57[4] = (__int64)&v56;
  v57[0] = a1;
  v25 = sub_180097FFC(&v58, v57, &v64);
  v56 = 0LL;
  v56 = *(_OWORD *)v25;
  *v25 = 0LL;
  v25[1] = 0LL;
  v26 = sub_18006CDC0(v64);
  sub_1800E275C(v26, a2, v24, &v56);
  v55 = 1;
  v27 = v59;
  if ( v59 )
  {
    if ( _InterlockedExchangeAdd(v59 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v27)(v27);
      if ( _InterlockedExchangeAdd(v27 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v27 + 8LL))(v27);
    }
  }
  if ( *(_BYTE *)(a1 + 72) )
  {
    v28 = sub_18009643C(*a5);
    v29 = sub_180096378(*a5);
    sub_18011D988(&unk_18025C740, 3LL, "MeshInstance: Vertex count %u", v28);
    sub_18011D988(&unk_18025C740, 3LL, "MeshInstance: Index count  %u", v29);
    sub_18011D988(&unk_18025C740, 3LL, "MeshInstance: Index per Vertex count %f", (float)((float)v29 / (float)v28));
    if ( v28 )
    {
      v50 = 0LL;
      v51 = 0LL;
      v49 = 0LL;
      v30 = *(_QWORD *)(a1 + 64);
      if ( v30 )
      {
        while ( 1 )
        {
          v34 = *(_DWORD *)(v30 + 8);
          if ( !v34 )
            break;
          if ( v34 == _InterlockedCompareExchange((volatile signed __int32 *)(v30 + 8), v34 + 1, v34) )
          {
            v31 = *(_QWORD *)(a1 + 64);
            *((_QWORD *)&v49 + 1) = v31;
            sub_180012630(*(_QWORD *)(a1 + 56), &v50);
            goto LABEL_43;
          }
        }
      }
      v31 = 0LL;
      sub_180012630(0LL, &v50);
LABEL_43:
      if ( v31 )
      {
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v31 + 8), 0xFFFFFFFF) == 1 )
        {
          (***((void (__fastcall ****)(_QWORD))&v49 + 1))(*((_QWORD *)&v49 + 1));
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v49 + 1) + 12LL), 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v49 + 1) + 8LL))(*((_QWORD *)&v49 + 1));
        }
      }
      v32 = v50;
      if ( !v50 )
      {
        v54 = 0LL;
        v33 = *(_QWORD *)(a1 + 64);
        if ( v33 )
        {
          while ( 1 )
          {
            v35 = *(_DWORD *)(v33 + 8);
            if ( !v35 )
              break;
            if ( v35 == _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 8), v35 + 1, v35) )
            {
              v54 = *(_OWORD *)(a1 + 56);
              break;
            }
          }
        }
        v36 = sub_180012230(v54, &v60);
        std::shared_ptr<__ExceptionPtr>::operator=(&v50, v36);
        v37 = v61;
        if ( v61 )
        {
          if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v37)(v37);
            if ( _InterlockedExchangeAdd(v37 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v37 + 8LL))(v37);
          }
        }
        if ( *((_QWORD *)&v54 + 1) )
        {
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v54 + 1) + 8LL), 0xFFFFFFFF) == 1 )
          {
            v38 = *((_QWORD *)&v54 + 1);
            (***((void (__fastcall ****)(_QWORD))&v54 + 1))(*((_QWORD *)&v54 + 1));
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v38 + 12), 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v54 + 1) + 8LL))(*((_QWORD *)&v54 + 1));
          }
        }
        v32 = v50;
      }
      v39 = a11;
      if ( !a11 )
        goto LABEL_92;
      Px = (float)(a10[1] + *a10) + a10[2];
      if ( fdtest(&Px) > 0 || (v66 = (float)(a9[1] + *a9) + a9[2], fdtest(&v66) > 0) )
      {
        v71 = _mm_load_si128(xmmword_180144F90);
        LOBYTE(v70[0]) = 0;
        LOBYTE(v40) = 0;
        sub_18000E118(
          v70,
          0xADuLL,
          v40,
          "LOADED BOUNDS ARE NOT FINITE! Node ID=%.16X has a bounding box that is not finite. Elements of the bounding bo"
          "x are either NaN or infinite The Bounding will be recalculated.");
        v41 = (const char *)v70;
        if ( v71.m128i_i64[1] >= 0x10uLL )
          v41 = (const char *)v70[0];
        sub_18011D988(&unk_18025C740, 4LL, v41, a7);
        v39 = 0;
        if ( v71.m128i_i64[1] >= 0x10uLL )
        {
          v42 = v70[0];
          if ( (unsigned __int64)(v71.m128i_i64[1] + 1) >= 0x1000 )
          {
            v42 = *(_QWORD *)(v70[0] - 8);
            if ( (unsigned __int64)(v70[0] - v42 - 8) > 0x1F )
            {
              o__invalid_parameter_noinfo_noreturn(v42, v71.m128i_i64[1] + 40);
              __debugbreak();
            }
          }
          j_j__o_free(v42);
        }
      }
      v43 = *a10;
      if ( *a10 == 0.0 && a10[1] == 0.0 && a10[2] == 0.0 )
        v39 = 0;
      if ( v39 )
      {
        *(float *)v67 = *a9;
        *(float *)&v67[1] = a9[1];
        *(float *)&v67[2] = a9[2];
        *(float *)&v67[3] = v43;
        *(float *)&v67[4] = a10[1];
        *(float *)&v67[5] = a10[2];
        sub_18009CD00(v32, v67);
      }
      else
      {
LABEL_92:
        v47 = sub_1800963DC(*a5, &v62, 0);
        sub_18009C638(v32, v47, (unsigned int)v28);
        v48 = v63;
        if ( v63 )
        {
          if ( _InterlockedExchangeAdd(v63 + 2, 0xFFFFFFFF) == 1 )
          {
            (**(void (__fastcall ***)(volatile signed __int32 *))v48)(v48);
            if ( _InterlockedExchangeAdd(v48 + 3, 0xFFFFFFFF) == 1 )
              (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v48 + 8LL))(v48);
          }
        }
      }
      if ( v51 )
      {
        if ( _InterlockedExchangeAdd(v51 + 2, 0xFFFFFFFF) == 1 )
        {
          v44 = v51;
          (**(void (__fastcall ***)(volatile signed __int32 *))v51)(v51);
          if ( _InterlockedExchangeAdd(v44 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v51 + 8LL))(v51);
        }
      }
    }
  }
  v45 = (volatile signed __int32 *)a5[1];
  if ( v45 )
  {
    if ( _InterlockedExchangeAdd(v45 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v45)(v45);
      if ( _InterlockedExchangeAdd(v45 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v45 + 8LL))(v45);
    }
  }
  return a2;
}
