/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BE678
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180231094 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180022680 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18003066C (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x180073D1C (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x18007AF60 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009BE74 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801BE61C (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801BF3B0 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801BFDD8 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x1801E247C (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x18021AAE8 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  _BYTE *v6; // rsi
  __int128 v9; // xmm0
  unsigned int v10; // edi
  __int128 v11; // xmm1
  int v12; // eax
  int v13; // ebx
  __int128 v14; // xmm0
  int v15; // r13d
  __int128 v16; // xmm1
  __int64 v17; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v18; // r8
  unsigned int v19; // edx
  unsigned int v20; // r9d
  __int64 Transpose; // rax
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // rdx
  int v26; // r8d
  struct D2D_VECTOR_4F v27; // xmm0
  int v28; // r14d
  struct D2D_VECTOR_4F v29; // xmm6
  unsigned int v30; // eax
  __int64 v31; // rcx
  int v32; // r8d
  __int64 v33; // rax
  __int64 v34; // rcx
  struct D2D_VECTOR_4F v35; // xmm7
  unsigned int v36; // eax
  int v37; // r8d
  int v38; // r9d
  unsigned int v39; // r10d
  int v40; // r11d
  const __m128i *v41; // rax
  __int64 v42; // rcx
  unsigned int v43; // r10d
  unsigned int v44; // edx
  __m128i v45; // xmm0
  unsigned int v46; // eax
  __int64 v47; // rcx
  int v48; // eax
  unsigned int v49; // r8d
  unsigned int v50; // eax
  __int64 v51; // rdx
  int v52; // eax
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // eax
  const __m128i *v56; // rax
  __int64 v57; // rcx
  unsigned int v58; // r10d
  unsigned int v59; // edx
  __m128i v60; // xmm0
  unsigned int v61; // eax
  int v62; // eax
  unsigned int v63; // r8d
  unsigned int v64; // eax
  __int64 v65; // rdx
  int v66; // eax
  unsigned int v67; // r8d
  unsigned int v68; // eax
  __int64 v69; // rdx
  int v70; // eax
  int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // edx
  int v74; // eax
  unsigned int v75; // r8d
  unsigned int v76; // eax
  __int64 v77; // rdx
  int v78; // eax
  unsigned int v79; // edx
  unsigned int v80; // eax
  int v81; // eax
  unsigned int v82; // r8d
  unsigned int v83; // eax
  __int64 v84; // rdx
  int v85; // eax
  unsigned int v86; // edx
  unsigned int v87; // eax
  int v88; // eax
  unsigned int v89; // r8d
  unsigned int v90; // eax
  __int64 v91; // rdx
  int v92; // eax
  __int64 v93; // r9
  int v94; // r9d
  int v95; // eax
  __int64 v96; // r9
  __int64 v97; // rax
  __int64 v98; // rax
  struct D2D_VECTOR_4F *v100; // [rsp+28h] [rbp-E0h]
  unsigned int v101; // [rsp+28h] [rbp-E0h]
  unsigned int v102; // [rsp+30h] [rbp-D8h]
  int v103; // [rsp+38h] [rbp-D0h]
  unsigned int v104; // [rsp+3Ch] [rbp-CCh]
  int v105; // [rsp+40h] [rbp-C8h]
  __int64 v106; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v107; // [rsp+50h] [rbp-B8h] BYREF
  unsigned int v108; // [rsp+58h] [rbp-B0h]
  unsigned int v109; // [rsp+5Ch] [rbp-ACh]
  unsigned int v110; // [rsp+60h] [rbp-A8h]
  unsigned int v111; // [rsp+64h] [rbp-A4h]
  unsigned int v112; // [rsp+68h] [rbp-A0h]
  unsigned int v113; // [rsp+6Ch] [rbp-9Ch]
  unsigned int v114; // [rsp+70h] [rbp-98h]
  unsigned int v115; // [rsp+74h] [rbp-94h]
  unsigned int v116; // [rsp+78h] [rbp-90h]
  unsigned int v117; // [rsp+7Ch] [rbp-8Ch]
  unsigned int v118; // [rsp+80h] [rbp-88h]
  int v119; // [rsp+84h] [rbp-84h]
  unsigned int v120; // [rsp+88h] [rbp-80h]
  unsigned int v121; // [rsp+8Ch] [rbp-7Ch]
  struct D2D_VECTOR_4F v122; // [rsp+90h] [rbp-78h] BYREF
  int v123; // [rsp+A0h] [rbp-68h]
  struct CPolygon **v124; // [rsp+A8h] [rbp-60h]
  struct CPolygon **v125; // [rsp+B0h] [rbp-58h]
  __int128 v126; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v127; // [rsp+C8h] [rbp-40h]
  __int128 v128; // [rsp+D8h] [rbp-30h]
  __int128 v129; // [rsp+E8h] [rbp-20h]
  int v130; // [rsp+F8h] [rbp-10h]
  struct D2D_VECTOR_4F v131; // [rsp+108h] [rbp+0h] BYREF
  __int128 v132; // [rsp+118h] [rbp+10h]
  __int128 v133; // [rsp+128h] [rbp+20h]
  __int128 v134; // [rsp+138h] [rbp+30h]
  int v135; // [rsp+148h] [rbp+40h]
  struct D2D_VECTOR_4F v136; // [rsp+158h] [rbp+50h] BYREF
  int v137; // [rsp+168h] [rbp+60h]
  char v138[16]; // [rsp+170h] [rbp+68h] BYREF
  char v139[72]; // [rsp+180h] [rbp+78h] BYREF
  struct D2D_VECTOR_4F v140; // [rsp+1C8h] [rbp+C0h] BYREF
  __m128i v141; // [rsp+1D8h] [rbp+D0h] BYREF
  int v142; // [rsp+1E8h] [rbp+E0h]
  struct D2D_VECTOR_4F v143; // [rsp+1F0h] [rbp+E8h] BYREF
  int v144; // [rsp+200h] [rbp+F8h]
  struct D2D_VECTOR_4F v145; // [rsp+208h] [rbp+100h] BYREF
  void *v146[2]; // [rsp+218h] [rbp+110h] BYREF
  int v147; // [rsp+228h] [rbp+120h]
  unsigned int v148[3]; // [rsp+22Ch] [rbp+124h]
  _BYTE v149[128]; // [rsp+238h] [rbp+130h] BYREF
  void *v150[2]; // [rsp+2B8h] [rbp+1B0h] BYREF
  int v151; // [rsp+2C8h] [rbp+1C0h]
  __int64 v152; // [rsp+2CCh] [rbp+1C4h]
  _BYTE v153[128]; // [rsp+2D8h] [rbp+1D0h] BYREF

  v124 = a4;
  v150[1] = v153;
  v6 = v153;
  v125 = a5;
  v146[0] = v149;
  v150[0] = v153;
  *a4 = 0LL;
  *a5 = 0LL;
  v9 = *((_OWORD *)a2 + 9);
  v10 = 6;
  v146[1] = v149;
  v11 = *((_OWORD *)a2 + 10);
  v12 = *((_DWORD *)a2 + 52);
  v126 = v9;
  v13 = 0;
  v14 = *((_OWORD *)a2 + 11);
  v15 = 0;
  v103 = 0;
  v127 = v11;
  v16 = *((_OWORD *)a2 + 12);
  v151 = 6;
  v128 = v14;
  v129 = v16;
  v152 = 6LL;
  v147 = 6;
  *(_QWORD *)v148 = 6LL;
  v130 = v12;
  v135 = 0;
  v106 = 0LL;
  v107 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v126, (__int64)a2, 0LL) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v126, (struct CMILMatrix *)&v126);
    v10 = v152;
    v6 = v150[0];
  }
  else
  {
    v126 = _xmm;
    v127 = _xmm;
    v128 = _xmm;
    v129 = _xmm;
    LOWORD(v130) = 32085;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v126, v17, v18) )
  {
    Transpose = CMILMatrix::GetTranspose(&v126, v139);
    v10 = v152;
    v6 = v150[0];
    v22 = *(_OWORD *)(Transpose + 16);
    v131 = *(struct D2D_VECTOR_4F *)Transpose;
    v23 = *(_OWORD *)(Transpose + 32);
    v132 = v22;
    v24 = *(_OWORD *)(Transpose + 48);
    LODWORD(Transpose) = *(_DWORD *)(Transpose + 64);
    v133 = v23;
    v134 = v24;
    v135 = Transpose;
  }
  else
  {
    v131 = (struct D2D_VECTOR_4F)_xmm;
    v132 = _xmm;
    v133 = _xmm;
    v134 = _xmm;
    LOWORD(v135) = 32085;
  }
  v140 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v145 = v140;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v140,
    v19,
    (const struct D2DVector4 *)&v145,
    v20,
    (const struct D2DMatrix *)&v131,
    v102);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_DWORD *)a2 + 10);
  v145 = v140;
  v27 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 2));
  v28 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 2) + 16);
  v123 = v28;
  v29 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 1));
  v122 = v27;
  v143 = v29;
  v144 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v140.x, &v122.x);
  v30 = D2DVectorHelper::ClassifyPoint(&v140.x, &v143.x);
  v31 = 0LL;
  v104 = v30;
  v105 = 0;
  if ( !v32 )
    goto LABEL_159;
  while ( 1 )
  {
    v33 = *((_QWORD *)a2 + 2);
    v34 = 5 * v31;
    v35 = *(struct D2D_VECTOR_4F *)(v33 + 4 * v34);
    v119 = *(_DWORD *)(v33 + 4 * v34 + 16);
    v136 = v35;
    v137 = v119;
    v36 = D2DVectorHelper::ClassifyPoint(&v140.x, &v136.x);
    v118 = v36;
    if ( v37 == 1 )
    {
      if ( v38 == 2 )
      {
        v41 = (const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                 (D2DVectorHelper *)&v145,
                                 &v140,
                                 &v122,
                                 &v143,
                                 v100);
        v44 = v120;
        v45 = _mm_loadu_si128(v41);
        v46 = v43 + 1;
        v142 = v28;
        v141 = v45;
        if ( v43 + 1 >= v43 )
          v44 = v43 + 1;
        v13 = v46 < v43 ? 0x80070216 : 0;
        v120 = v44;
        if ( v46 < v43 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v13, 0xB5u);
        }
        else if ( v44 > v10 )
        {
          v48 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v141);
          v13 = v48;
          if ( v48 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v48, 0xC0u);
        }
        else
        {
          v47 = 5LL * v43;
          *(__m128i *)&v6[4 * v47] = v45;
          *(_DWORD *)&v6[4 * v47 + 16] = v142;
          HIDWORD(v152) = v44;
        }
        if ( v13 < 0 )
        {
          v101 = 273;
          goto LABEL_135;
        }
        v142 = 0;
        v49 = v121;
        v50 = v148[1] + 1;
        if ( v148[1] + 1 >= v148[1] )
          v49 = v148[1] + 1;
        v13 = v50 < v148[1] ? 0x80070216 : 0;
        v121 = v49;
        if ( v50 < v148[1] )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
        }
        else if ( v49 > v148[0] )
        {
          v52 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v141);
          v13 = v52;
          if ( v52 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v52, 0xC0u);
        }
        else
        {
          v51 = 5LL * v148[1];
          v47 = (__int64)v146[0];
          *(__m128i *)((char *)v146[0] + 4 * v51) = v141;
          *(_DWORD *)(v47 + 4 * v51 + 16) = v142;
          v148[1] = v49;
        }
        if ( v13 < 0 )
        {
          v101 = 276;
          goto LABEL_135;
        }
        v39 = HIDWORD(v152);
        v10 = v152;
        v6 = v150[0];
        v29 = v143;
      }
      v53 = v108;
      v54 = v39 + 1;
      if ( v39 + 1 >= v39 )
        v53 = v39 + 1;
      v13 = v54 < v39 ? 0x80070216 : 0;
      v108 = v53;
      if ( v54 < v39 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, v13, 0xB5u);
      }
      else if ( v53 > v10 )
      {
        v55 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v143);
        v13 = v55;
        if ( v55 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v55, 0xC0u);
      }
      else
      {
        v47 = 5LL * v39;
        *(struct D2D_VECTOR_4F *)&v6[4 * v47] = v29;
        *(_DWORD *)&v6[4 * v47 + 16] = v144;
        HIDWORD(v152) = v53;
      }
      if ( v13 < 0 )
      {
        v101 = 281;
        goto LABEL_135;
      }
      ++v15;
LABEL_130:
      v71 = v103;
      goto LABEL_131;
    }
    if ( v37 != 2 )
    {
      v141 = (__m128i)v29;
      if ( v38 == 1 )
      {
        if ( v36 == 2 )
        {
          v142 = 0;
          v72 = v39 + 1;
          v73 = v112;
          if ( v39 + 1 >= v39 )
            v73 = v39 + 1;
          v13 = v72 < v39 ? 0x80070216 : 0;
          v112 = v73;
          if ( v72 < v39 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, v13, 0xB5u);
          }
          else if ( v73 > v10 )
          {
            v74 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v141);
            v13 = v74;
            if ( v74 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v74, 0xC0u);
          }
          else
          {
            v47 = 5LL * v39;
            *(struct D2D_VECTOR_4F *)&v6[4 * v47] = v29;
            *(_DWORD *)&v6[4 * v47 + 16] = v142;
            HIDWORD(v152) = v73;
          }
          if ( v13 < 0 )
          {
            v101 = 325;
            goto LABEL_135;
          }
          v75 = v113;
          v142 = v144;
          v76 = v148[1] + 1;
          if ( v148[1] + 1 >= v148[1] )
            v75 = v148[1] + 1;
          v13 = v76 < v148[1] ? 0x80070216 : 0;
          v113 = v75;
          if ( v76 < v148[1] )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
          }
          else if ( v75 > v148[0] )
          {
            v78 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v141);
            v13 = v78;
            if ( v78 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v78, 0xC0u);
          }
          else
          {
            v77 = 5LL * v148[1];
            v47 = (__int64)v146[0];
            *(__m128i *)((char *)v146[0] + 4 * v77) = v141;
            *(_DWORD *)(v47 + 4 * v77 + 16) = v142;
            v148[1] = v75;
          }
          if ( v13 < 0 )
          {
            v101 = 328;
            goto LABEL_135;
          }
          goto LABEL_130;
        }
      }
      else if ( v38 == 2 && v36 == 1 )
      {
        v79 = v114;
        v80 = v39 + 1;
        v142 = v40;
        if ( v39 + 1 >= v39 )
          v79 = v39 + 1;
        v13 = v80 < v39 ? 0x80070216 : 0;
        v114 = v79;
        if ( v80 < v39 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, v13, 0xB5u);
        }
        else if ( v79 > v10 )
        {
          v81 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v141);
          v13 = v81;
          if ( v81 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v81, 0xC0u);
        }
        else
        {
          v47 = 5LL * v39;
          *(struct D2D_VECTOR_4F *)&v6[4 * v47] = v29;
          *(_DWORD *)&v6[4 * v47 + 16] = v142;
          HIDWORD(v152) = v79;
        }
        if ( v13 < 0 )
        {
          v101 = 336;
          goto LABEL_135;
        }
        v142 = 0;
        v82 = v115;
        v83 = v148[1] + 1;
        if ( v148[1] + 1 >= v148[1] )
          v82 = v148[1] + 1;
        v13 = v83 < v148[1] ? 0x80070216 : 0;
        v115 = v82;
        if ( v83 < v148[1] )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
        }
        else if ( v82 > v148[0] )
        {
          v85 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v141);
          v13 = v85;
          if ( v85 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v85, 0xC0u);
        }
        else
        {
          v84 = 5LL * v148[1];
          v47 = (__int64)v146[0];
          *(__m128i *)((char *)v146[0] + 4 * v84) = v141;
          *(_DWORD *)(v47 + 4 * v84 + 16) = v142;
          v148[1] = v82;
        }
        if ( v13 < 0 )
        {
          v101 = 339;
          goto LABEL_135;
        }
        goto LABEL_130;
      }
      v86 = v116;
      v87 = v39 + 1;
      if ( v39 + 1 >= v39 )
        v86 = v39 + 1;
      v13 = v87 < v39 ? 0x80070216 : 0;
      v116 = v86;
      if ( v87 < v39 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(1LL, 0LL, 0, v13, 0xB5u);
      }
      else if ( v86 > v10 )
      {
        v88 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v143);
        v13 = v88;
        if ( v88 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v88, 0xC0u);
      }
      else
      {
        v47 = 5LL * v39;
        *(struct D2D_VECTOR_4F *)&v6[4 * v47] = v29;
        *(_DWORD *)&v6[4 * v47 + 16] = v144;
        HIDWORD(v152) = v86;
      }
      if ( v13 < 0 )
      {
        v101 = 343;
LABEL_135:
        v94 = v13;
LABEL_136:
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v94, v101);
        goto LABEL_160;
      }
      v89 = v117;
      v90 = v148[1] + 1;
      if ( v148[1] + 1 >= v148[1] )
        v89 = v148[1] + 1;
      v13 = v90 < v148[1] ? 0x80070216 : 0;
      v117 = v89;
      if ( v90 < v148[1] )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
      }
      else if ( v89 > v148[0] )
      {
        v92 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v143);
        v13 = v92;
        if ( v92 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v92, 0xC0u);
      }
      else
      {
        v91 = 5LL * v148[1];
        v47 = (__int64)v146[0];
        *(struct D2D_VECTOR_4F *)((char *)v146[0] + 4 * v91) = v143;
        *(_DWORD *)(v47 + 4 * v91 + 16) = v144;
        v148[1] = v89;
      }
      if ( v13 < 0 )
      {
        v101 = 344;
        goto LABEL_135;
      }
      goto LABEL_130;
    }
    if ( v38 == 1 )
    {
      v56 = (const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                               (D2DVectorHelper *)v138,
                               &v140,
                               &v122,
                               &v143,
                               v100);
      v59 = v109;
      v60 = _mm_loadu_si128(v56);
      v142 = 0;
      v61 = v58 + 1;
      v141 = v60;
      if ( v58 + 1 >= v58 )
        v59 = v58 + 1;
      v13 = v61 < v58 ? 0x80070216 : 0;
      v109 = v59;
      if ( v61 < v58 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v57, 0LL, 0, v13, 0xB5u);
      }
      else if ( v59 > v10 )
      {
        v62 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v150, 20, 1, &v141);
        v13 = v62;
        if ( v62 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v62, 0xC0u);
      }
      else
      {
        v47 = 5LL * v58;
        *(__m128i *)&v6[4 * v47] = v60;
        *(_DWORD *)&v6[4 * v47 + 16] = v142;
        HIDWORD(v152) = v59;
      }
      if ( v13 < 0 )
      {
        v101 = 298;
        goto LABEL_135;
      }
      v63 = v110;
      v142 = v28;
      v64 = v148[1] + 1;
      if ( v148[1] + 1 >= v148[1] )
        v63 = v148[1] + 1;
      v13 = v64 < v148[1] ? 0x80070216 : 0;
      v110 = v63;
      if ( v64 < v148[1] )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
      }
      else if ( v63 > v148[0] )
      {
        v66 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v141);
        v13 = v66;
        if ( v66 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v66, 0xC0u);
      }
      else
      {
        v65 = 5LL * v148[1];
        v47 = (__int64)v146[0];
        *(__m128i *)((char *)v146[0] + 4 * v65) = v141;
        *(_DWORD *)(v47 + 4 * v65 + 16) = v142;
        v148[1] = v63;
      }
      if ( v13 < 0 )
      {
        v101 = 301;
        goto LABEL_135;
      }
      v29 = v143;
    }
    v67 = v111;
    v68 = v148[1] + 1;
    if ( v148[1] + 1 >= v148[1] )
      v67 = v148[1] + 1;
    v13 = v68 < v148[1] ? 0x80070216 : 0;
    v111 = v67;
    if ( v68 < v148[1] )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v148[1], 0LL, 0, v13, 0xB5u);
    }
    else if ( v67 > v148[0] )
    {
      v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v146, 20, 1, &v143);
      v13 = v70;
      if ( v70 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v47, 0LL, 0, v70, 0xC0u);
    }
    else
    {
      v69 = 5LL * v148[1];
      v47 = (__int64)v146[0];
      *(struct D2D_VECTOR_4F *)((char *)v146[0] + 4 * v69) = v29;
      *(_DWORD *)(v47 + 4 * v69 + 16) = v144;
      v148[1] = v67;
    }
    if ( v13 < 0 )
    {
      v101 = 307;
      goto LABEL_135;
    }
    v71 = ++v103;
LABEL_131:
    v29 = v35;
    v28 = v144;
    v31 = (unsigned int)(v105 + 1);
    v93 = v104;
    v104 = v118;
    v122 = v143;
    v123 = v144;
    v143 = v35;
    v144 = v119;
    v105 = v31;
    if ( (unsigned int)v31 >= *((_DWORD *)a2 + 10) )
      break;
    v10 = v152;
    v6 = v150[0];
  }
  if ( !v15 )
  {
    if ( v71 )
      goto LABEL_147;
LABEL_159:
    *(_DWORD *)a3 = 0;
    goto LABEL_160;
  }
  if ( !v71 )
  {
    *(_DWORD *)a3 = 1;
    goto LABEL_160;
  }
LABEL_147:
  if ( v15 )
  {
    *(_DWORD *)a3 = 3;
    v95 = CPolygon::Create(v150, a2, &v106, v93);
    v13 = v95;
    if ( v95 < 0 )
    {
      v101 = 378;
    }
    else
    {
      v95 = CPolygon::Create(v146, a2, &v107, v96);
      v13 = v95;
      if ( v95 >= 0 )
      {
        v97 = v106;
        v106 = 0LL;
        *v124 = (struct CPolygon *)v97;
        v98 = v107;
        v107 = 0LL;
        *v125 = (struct CPolygon *)v98;
        goto LABEL_160;
      }
      v101 = 379;
    }
    v94 = v95;
    goto LABEL_136;
  }
  *(_DWORD *)a3 = 2;
LABEL_160:
  ReleaseInterface<CD3DSurface>(&v106);
  ReleaseInterface<CD3DSurface>(&v107);
  DynArrayImpl<1>::~DynArrayImpl<1>(v146);
  DynArrayImpl<1>::~DynArrayImpl<1>(v150);
  return (unsigned int)v13;
}
