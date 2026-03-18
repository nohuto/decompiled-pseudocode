/*
 * XREFs of ?CompareAndSplit@CPolygon@@QEAAJPEAV1@PEAW4Relation@D2DVectorHelper@@PEAPEAV1@2@Z @ 0x1801BC5D4
 * Callers:
 *     ?PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z @ 0x180259F28 (-PushPolygon@CBspNode@@QEAAJPEAVCPolygon@@_N@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180027B70 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18006AD4C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18007A004 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007F5CC (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800CE4A8 (-Invert@CMILMatrix@@QEAA_NXZ.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     ?ClassifyPoint@D2DVectorHelper@@YA?AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z @ 0x1801BC578 (-ClassifyPoint@D2DVectorHelper@@YA-AW4Relation@1@AEBUD2D_VECTOR_4F@@0@Z.c)
 *     ?Create@CPolygon@@SAJPEAV?$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z @ 0x1801BD318 (-Create@CPolygon@@SAJPEAV-$DynArray@UPoint@CPolygon@@$0A@@@PEAV1@PEAPEAV1@@Z.c)
 *     ?PlaneVectorIntersection@D2DVectorHelper@@YA?AUD2D_VECTOR_4F@@AEBU2@00@Z @ 0x1801BDD84 (-PlaneVectorIntersection@D2DVectorHelper@@YA-AUD2D_VECTOR_4F@@AEBU2@00@Z.c)
 *     ?GetTranspose@CMILMatrix@@QEBA?AV1@XZ @ 0x18021B264 (-GetTranspose@CMILMatrix@@QEBA-AV1@XZ.c)
 *     ?D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z @ 0x1802289F4 (-D3DXVec4TransformArray@@YAPEAUD2DVector4@@PEAU1@IPEBU1@IPEBUD2DMatrix@@I@Z.c)
 */

__int64 __fastcall CPolygon::CompareAndSplit(
        CPolygon *this,
        struct CPolygon *a2,
        enum D2DVectorHelper::Relation *a3,
        struct CPolygon **a4,
        struct CPolygon **a5)
{
  _BYTE *v6; // rdi
  __int128 v7; // xmm0
  unsigned int v8; // esi
  __int128 v9; // xmm1
  int v10; // eax
  int v12; // ebx
  __int128 v13; // xmm0
  int v14; // r12d
  __int128 v15; // xmm1
  int v16; // r13d
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
  __int128 v27; // xmm0
  int v28; // r14d
  struct D2D_VECTOR_4F v29; // xmm6
  __int64 v30; // rax
  int v31; // r8d
  __int64 v32; // rcx
  __int64 v33; // rax
  struct D2D_VECTOR_4F v34; // xmm7
  int v35; // eax
  __int64 v36; // rcx
  int v37; // r8d
  int v38; // r9d
  unsigned int v39; // r10d
  int v40; // r11d
  __int64 v41; // rcx
  unsigned int v42; // r10d
  __m128i v43; // xmm0
  signed int v44; // eax
  unsigned int v45; // r8d
  __int64 v46; // rdx
  signed int v47; // eax
  __int64 v48; // rcx
  signed int v49; // eax
  __int64 v50; // rcx
  unsigned int v51; // r10d
  __m128i v52; // xmm0
  signed int v53; // eax
  unsigned int v54; // r8d
  __int64 v55; // rdx
  signed int v56; // eax
  unsigned int v57; // r8d
  __int64 v58; // rcx
  __int64 v59; // rdx
  signed int v60; // eax
  signed int v61; // eax
  __int64 v62; // rax
  unsigned int v63; // r8d
  __int64 v64; // rcx
  __int64 v65; // rdx
  int v66; // eax
  signed int v67; // eax
  signed int v68; // eax
  signed int v69; // eax
  signed int v70; // eax
  signed int v71; // eax
  __int64 v72; // r9
  unsigned int v73; // r9d
  int v74; // eax
  __int64 v75; // r9
  __int64 v76; // rax
  __int64 v77; // rax
  struct D2D_VECTOR_4F *v79; // [rsp+28h] [rbp-E0h]
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  unsigned int v81; // [rsp+30h] [rbp-D8h]
  unsigned __int64 v82; // [rsp+38h] [rbp-D0h]
  __int64 v84; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v85; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v86[3]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v87; // [rsp+70h] [rbp-98h]
  struct CPolygon **v88; // [rsp+78h] [rbp-90h]
  struct CPolygon **v89; // [rsp+80h] [rbp-88h]
  __int128 v90; // [rsp+88h] [rbp-80h] BYREF
  __int128 v91; // [rsp+98h] [rbp-70h]
  __int128 v92; // [rsp+A8h] [rbp-60h]
  __int128 v93; // [rsp+B8h] [rbp-50h]
  int v94; // [rsp+C8h] [rbp-40h]
  struct D2D_VECTOR_4F v95; // [rsp+D8h] [rbp-30h] BYREF
  __int128 v96; // [rsp+E8h] [rbp-20h]
  __int128 v97; // [rsp+F8h] [rbp-10h]
  __int128 v98; // [rsp+108h] [rbp+0h]
  int v99; // [rsp+118h] [rbp+10h]
  struct D2D_VECTOR_4F v100; // [rsp+128h] [rbp+20h] BYREF
  int v101; // [rsp+138h] [rbp+30h]
  _BYTE v102[16]; // [rsp+140h] [rbp+38h] BYREF
  _BYTE v103[72]; // [rsp+150h] [rbp+48h] BYREF
  struct D2D_VECTOR_4F v104; // [rsp+198h] [rbp+90h] BYREF
  __m128i v105; // [rsp+1A8h] [rbp+A0h] BYREF
  int v106; // [rsp+1B8h] [rbp+B0h]
  struct D2D_VECTOR_4F v107; // [rsp+1C0h] [rbp+B8h] BYREF
  int v108; // [rsp+1D0h] [rbp+C8h]
  struct D2D_VECTOR_4F v109; // [rsp+1D8h] [rbp+D0h] BYREF
  _QWORD v110[2]; // [rsp+1E8h] [rbp+E0h] BYREF
  int v111; // [rsp+1F8h] [rbp+F0h]
  __int64 v112; // [rsp+1FCh] [rbp+F4h]
  _BYTE v113[128]; // [rsp+208h] [rbp+100h] BYREF
  _QWORD v114[2]; // [rsp+288h] [rbp+180h] BYREF
  int v115; // [rsp+298h] [rbp+190h]
  __int64 v116; // [rsp+29Ch] [rbp+194h]
  _BYTE v117[128]; // [rsp+2A8h] [rbp+1A0h] BYREF

  v110[1] = v113;
  *a4 = 0LL;
  v114[0] = v117;
  v6 = v113;
  *a5 = 0LL;
  v7 = *((_OWORD *)a2 + 9);
  v8 = 6;
  v114[1] = v117;
  v9 = *((_OWORD *)a2 + 10);
  v10 = *((_DWORD *)a2 + 52);
  v90 = v7;
  v12 = 0;
  v13 = *((_OWORD *)a2 + 11);
  v14 = 0;
  v89 = a5;
  v91 = v9;
  v15 = *((_OWORD *)a2 + 12);
  v16 = 0;
  v88 = a4;
  v92 = v13;
  v93 = v15;
  v110[0] = v113;
  v111 = 6;
  v112 = 6LL;
  v115 = 6;
  v116 = 6LL;
  v94 = v10;
  v99 = 0;
  v84 = 0LL;
  v85 = 0LL;
  if ( CMILMatrix::Invert((CMILMatrix *)&v90, (__int64)a2, 0LL) )
  {
    CMILMatrix::Multiply((CPolygon *)((char *)this + 144), (const struct CMILMatrix *)&v90, (struct CMILMatrix *)&v90);
    v8 = v112;
    v6 = (_BYTE *)v110[0];
  }
  else
  {
    v90 = _xmm;
    v91 = _xmm;
    v92 = _xmm;
    v93 = _xmm;
    LOWORD(v94) = 32085;
  }
  if ( CMILMatrix::Invert((CMILMatrix *)&v90, v17, v18) )
  {
    Transpose = CMILMatrix::GetTranspose(&v90, v103);
    v8 = v112;
    v6 = (_BYTE *)v110[0];
    v22 = *(_OWORD *)(Transpose + 16);
    v95 = *(struct D2D_VECTOR_4F *)Transpose;
    v23 = *(_OWORD *)(Transpose + 32);
    v96 = v22;
    v24 = *(_OWORD *)(Transpose + 48);
    LODWORD(Transpose) = *(_DWORD *)(Transpose + 64);
    v97 = v23;
    v98 = v24;
    v99 = Transpose;
  }
  else
  {
    v95 = (struct D2D_VECTOR_4F)_xmm;
    v96 = _xmm;
    v97 = _xmm;
    v98 = _xmm;
    LOWORD(v99) = 32085;
  }
  v104 = (struct D2D_VECTOR_4F)*((_OWORD *)this + 8);
  v109 = v104;
  D3DXVec4TransformArray(
    (struct D2DVector4 *)&v104,
    v19,
    (const struct D2DVector4 *)&v109,
    v20,
    (const struct D2DMatrix *)&v95,
    v81);
  v25 = *((_QWORD *)a2 + 2);
  v26 = *((_DWORD *)a2 + 10);
  v109 = v104;
  v27 = *(_OWORD *)(v25 + 20LL * (unsigned int)(v26 - 2));
  v28 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 2) + 16);
  LODWORD(v87) = v28;
  v29 = *(struct D2D_VECTOR_4F *)(v25 + 20LL * (unsigned int)(v26 - 1));
  *(_OWORD *)&v86[1] = v27;
  v107 = v29;
  v108 = *(_DWORD *)(v25 + 20LL * (unsigned int)(v26 - 1) + 16);
  D2DVectorHelper::ClassifyPoint(&v104.x, (float *)&v86[1]);
  v82 = (unsigned int)D2DVectorHelper::ClassifyPoint(&v104.x, &v107.x);
  v30 = 0LL;
  if ( !v31 )
    goto LABEL_134;
  while ( 1 )
  {
    v32 = 5 * v30;
    v33 = *((_QWORD *)a2 + 2);
    v34 = *(struct D2D_VECTOR_4F *)(v33 + 4 * v32);
    HIDWORD(v86[0]) = *(_DWORD *)(v33 + 4 * v32 + 16);
    v100 = v34;
    v101 = HIDWORD(v86[0]);
    v35 = D2DVectorHelper::ClassifyPoint(&v104.x, &v100.x);
    LODWORD(v86[0]) = v35;
    if ( v37 == 1 )
    {
      if ( v38 != 2 )
        goto LABEL_26;
      v43 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)&v109,
                                               &v104,
                                               (const struct D2D_VECTOR_4F *)&v86[1],
                                               &v107,
                                               v79));
      v106 = v28;
      v105 = v43;
      if ( v42 + 1 >= v42 )
      {
        if ( v42 + 1 <= v8 )
        {
          v36 = 5LL * v42;
          *(__m128i *)&v6[4 * v36] = v43;
          *(_DWORD *)&v6[4 * v36 + 16] = v106;
          HIDWORD(v112) = v42 + 1;
          goto LABEL_17;
        }
        v44 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v105);
        v12 = v44;
        if ( v44 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v44, 0xC3u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v41, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v12 < 0 )
      {
        v80 = 271;
        goto LABEL_110;
      }
LABEL_17:
      v106 = 0;
      v45 = HIDWORD(v116) + 1;
      if ( (unsigned int)(HIDWORD(v116) + 1) >= HIDWORD(v116) )
      {
        if ( v45 <= (unsigned int)v116 )
        {
          v36 = v114[0];
          v46 = 5LL * HIDWORD(v116);
          *(__m128i *)(v114[0] + 4 * v46) = v105;
          *(_DWORD *)(v36 + 4 * v46 + 16) = v106;
          HIDWORD(v116) = v45;
LABEL_21:
          v39 = HIDWORD(v112);
          v8 = v112;
          v6 = (_BYTE *)v110[0];
          v29 = v107;
LABEL_26:
          if ( v39 + 1 >= v39 )
          {
            if ( v39 + 1 <= v8 )
            {
              v12 = 0;
              v48 = 5LL * v39;
              *(struct D2D_VECTOR_4F *)&v6[4 * v48] = v29;
              *(_DWORD *)&v6[4 * v48 + 16] = v108;
              HIDWORD(v112) = v39 + 1;
LABEL_33:
              ++v14;
              goto LABEL_107;
            }
            v49 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v107);
            v12 = v49;
            if ( v49 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v49, 0xC3u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          if ( v12 < 0 )
          {
            v80 = 279;
            goto LABEL_110;
          }
          goto LABEL_33;
        }
        v47 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v105);
        v12 = v47;
        if ( v47 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v47, 0xC3u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v12 < 0 )
      {
        v80 = 274;
LABEL_110:
        v73 = v12;
        goto LABEL_111;
      }
      goto LABEL_21;
    }
    if ( v37 == 2 )
    {
      if ( v38 != 1 )
        goto LABEL_51;
      v52 = _mm_loadu_si128((const __m128i *)D2DVectorHelper::PlaneVectorIntersection(
                                               (D2DVectorHelper *)v102,
                                               &v104,
                                               (const struct D2D_VECTOR_4F *)&v86[1],
                                               &v107,
                                               v79));
      v106 = 0;
      v105 = v52;
      if ( v51 + 1 >= v51 )
      {
        if ( v51 + 1 <= v8 )
        {
          v36 = 5LL * v51;
          *(__m128i *)&v6[4 * v36] = v52;
          *(_DWORD *)&v6[4 * v36 + 16] = v106;
          HIDWORD(v112) = v51 + 1;
          goto LABEL_43;
        }
        v53 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v105);
        v12 = v53;
        if ( v53 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v53, 0xC3u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v12 < 0 )
      {
        v80 = 296;
        goto LABEL_110;
      }
LABEL_43:
      v106 = v28;
      v54 = HIDWORD(v116) + 1;
      if ( (unsigned int)(HIDWORD(v116) + 1) >= HIDWORD(v116) )
      {
        if ( v54 <= (unsigned int)v116 )
        {
          v36 = v114[0];
          v55 = 5LL * HIDWORD(v116);
          *(__m128i *)(v114[0] + 4 * v55) = v105;
          *(_DWORD *)(v36 + 4 * v55 + 16) = v106;
          HIDWORD(v116) = v54;
LABEL_50:
          v29 = v107;
LABEL_51:
          v57 = HIDWORD(v116) + 1;
          if ( (unsigned int)(HIDWORD(v116) + 1) >= HIDWORD(v116) )
          {
            if ( v57 <= (unsigned int)v116 )
            {
              v12 = 0;
              v58 = v114[0];
              v59 = 5LL * HIDWORD(v116);
              *(struct D2D_VECTOR_4F *)(v114[0] + 4 * v59) = v29;
              *(_DWORD *)(v58 + 4 * v59 + 16) = v108;
              HIDWORD(v116) = v57;
LABEL_58:
              ++v16;
              goto LABEL_107;
            }
            v60 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v107);
            v12 = v60;
            if ( v60 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v60, 0xC3u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          if ( v12 < 0 )
          {
            v80 = 305;
            goto LABEL_110;
          }
          goto LABEL_58;
        }
        v56 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v105);
        v12 = v56;
        if ( v56 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v56, 0xC3u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v12 < 0 )
      {
        v80 = 299;
        goto LABEL_110;
      }
      goto LABEL_50;
    }
    v105 = (__m128i)v29;
    if ( v38 == 1 )
    {
      if ( v35 != 2 )
        goto LABEL_93;
      v106 = 0;
      if ( v39 + 1 >= v39 )
      {
        if ( v39 + 1 <= v8 )
        {
          v36 = 5LL * v39;
          *(struct D2D_VECTOR_4F *)&v6[4 * v36] = v29;
          *(_DWORD *)&v6[4 * v36 + 16] = v106;
          HIDWORD(v112) = v39 + 1;
LABEL_68:
          v106 = v108;
          v62 = HIDWORD(v116);
          v63 = HIDWORD(v116) + 1;
          if ( (unsigned int)(HIDWORD(v116) + 1) >= HIDWORD(v116) )
          {
            if ( v63 <= (unsigned int)v116 )
              goto LABEL_71;
            v67 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v105);
            v12 = v67;
            if ( v67 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v67, 0xC3u, 0LL);
          }
          else
          {
            v12 = -2147024362;
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
          }
          if ( v12 < 0 )
          {
            v80 = 326;
            goto LABEL_110;
          }
          goto LABEL_107;
        }
        v61 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v105);
        v12 = v61;
        if ( v61 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v61, 0xC3u, 0LL);
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      }
      if ( v12 < 0 )
      {
        v80 = 323;
        goto LABEL_110;
      }
      goto LABEL_68;
    }
    if ( v38 != 2 || v35 != 1 )
    {
LABEL_93:
      if ( v39 + 1 >= v39 )
      {
        if ( v39 + 1 > v8 )
        {
          v70 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v107);
          v12 = v70;
          if ( v70 < 0 )
            MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v70, 0xC3u, 0LL);
          goto LABEL_99;
        }
        v36 = 5LL * v39;
        *(struct D2D_VECTOR_4F *)&v6[4 * v36] = v29;
        *(_DWORD *)&v6[4 * v36 + 16] = v108;
        HIDWORD(v112) = v39 + 1;
      }
      else
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
LABEL_99:
        if ( v12 < 0 )
        {
          v80 = 341;
          goto LABEL_110;
        }
      }
      v63 = HIDWORD(v116) + 1;
      if ( (unsigned int)(HIDWORD(v116) + 1) < HIDWORD(v116) )
      {
        v12 = -2147024362;
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
        goto LABEL_106;
      }
      if ( v63 > (unsigned int)v116 )
      {
        v71 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v107);
        v12 = v71;
        if ( v71 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v71, 0xC3u, 0LL);
LABEL_106:
        if ( v12 < 0 )
        {
          v80 = 342;
          goto LABEL_110;
        }
        goto LABEL_107;
      }
      v64 = v114[0];
      v65 = 5LL * HIDWORD(v116);
      *(struct D2D_VECTOR_4F *)(v114[0] + 20LL * HIDWORD(v116)) = v107;
      v66 = v108;
LABEL_72:
      *(_DWORD *)(v64 + 4 * v65 + 16) = v66;
      v12 = 0;
      HIDWORD(v116) = v63;
      goto LABEL_107;
    }
    v106 = v40;
    if ( v39 + 1 < v39 )
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
      goto LABEL_85;
    }
    if ( v39 + 1 > v8 )
    {
      v68 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v110, 20, 1, &v105);
      v12 = v68;
      if ( v68 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v68, 0xC3u, 0LL);
LABEL_85:
      if ( v12 < 0 )
      {
        v80 = 334;
        goto LABEL_110;
      }
      goto LABEL_86;
    }
    v36 = 5LL * v39;
    *(struct D2D_VECTOR_4F *)&v6[4 * v36] = v29;
    *(_DWORD *)&v6[4 * v36 + 16] = v106;
    HIDWORD(v112) = v39 + 1;
LABEL_86:
    v62 = HIDWORD(v116);
    v106 = 0;
    v63 = HIDWORD(v116) + 1;
    if ( (unsigned int)(HIDWORD(v116) + 1) >= HIDWORD(v116) )
    {
      if ( v63 <= (unsigned int)v116 )
      {
LABEL_71:
        v64 = v114[0];
        v65 = 5 * v62;
        *(__m128i *)(v114[0] + 20 * v62) = v105;
        v66 = v106;
        goto LABEL_72;
      }
      v69 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v114, 20, 1, &v105);
      v12 = v69;
      if ( v69 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v69, 0xC3u, 0LL);
    }
    else
    {
      v12 = -2147024362;
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, 0x80070216, 0xB8u, 0LL);
    }
    if ( v12 < 0 )
    {
      v80 = 337;
      goto LABEL_110;
    }
LABEL_107:
    v29 = v34;
    v28 = v108;
    v30 = (unsigned int)(HIDWORD(v82) + 1);
    v72 = (unsigned int)v82;
    v82 = __PAIR64__(v30, v86[0]);
    *(struct D2D_VECTOR_4F *)&v86[1] = v107;
    LODWORD(v87) = v108;
    v107 = v34;
    v108 = HIDWORD(v86[0]);
    if ( (unsigned int)v30 >= *((_DWORD *)a2 + 10) )
      break;
    v8 = v112;
    v6 = (_BYTE *)v110[0];
  }
  if ( !v14 )
  {
    if ( v16 )
      goto LABEL_122;
LABEL_134:
    *(_DWORD *)a3 = 0;
    goto LABEL_135;
  }
  if ( v16 )
  {
LABEL_122:
    if ( !v14 )
    {
      *(_DWORD *)a3 = 2;
      goto LABEL_135;
    }
    *(_DWORD *)a3 = 3;
    v74 = CPolygon::Create(v110, a2, &v84, v72);
    v12 = v74;
    if ( v74 < 0 )
    {
      v80 = 376;
    }
    else
    {
      v74 = CPolygon::Create(v114, a2, &v85, v75);
      v12 = v74;
      if ( v74 >= 0 )
      {
        v76 = v84;
        v84 = 0LL;
        *v88 = (struct CPolygon *)v76;
        v77 = v85;
        v85 = 0LL;
        *v89 = (struct CPolygon *)v77;
        goto LABEL_135;
      }
      v80 = 377;
    }
    v73 = v74;
LABEL_111:
    MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v73, v80, 0LL);
    goto LABEL_135;
  }
  *(_DWORD *)a3 = 1;
LABEL_135:
  ReleaseInterface<CD3DSurface>(&v84);
  ReleaseInterface<CD3DSurface>(&v85);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v114);
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)v110);
  return (unsigned int)v12;
}
