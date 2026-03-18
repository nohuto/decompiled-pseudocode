/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18003F790
 * Callers:
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002CE38 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18002EF10 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180041660 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800288A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x18002C9EC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x18005CB5C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x18005CCA8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x18005CE1C (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180067400 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     ceilf_0 @ 0x1800EFFF7 (ceilf_0.c)
 *     floorf_0 @ 0x1800F000F (floorf_0.c)
 *     McTemplateU0qdffff @ 0x18015BA74 (McTemplateU0qdffff.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x1801E8CEC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, const struct D2D_RECT_F *a4)
{
  unsigned int v4; // r12d
  float v9; // xmm12_4
  float v10; // xmm8_4
  float v11; // xmm11_4
  float v12; // xmm9_4
  float v13; // xmm3_4
  float v14; // xmm1_4
  float v15; // xmm0_4
  float v16; // xmm1_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v19; // xmm1_4
  __m128 v20; // xmm13
  __m128 v21; // xmm13
  int v22; // edx
  char *v23; // rdi
  char *v24; // rsi
  bool v25; // al
  float v26; // xmm1_4
  float v27; // xmm5_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm1_4
  float *v31; // r10
  float v32; // xmm2_4
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm1_4
  float v36; // xmm2_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  unsigned int v39; // r14d
  unsigned int v40; // esi
  char v41; // r13
  unsigned int v42; // edx
  __int64 v43; // r9
  unsigned int v44; // r8d
  float *v45; // rax
  float v46; // xmm1_4
  float v47; // xmm2_4
  float v48; // xmm3_4
  unsigned int v49; // ecx
  unsigned int v50; // r11d
  float v51; // xmm4_4
  float v52; // xmm1_4
  bool v53; // cc
  unsigned int v54; // edi
  float v55; // xmm1_4
  float v56; // xmm2_4
  unsigned int v57; // ecx
  bool v58; // cc
  unsigned int v59; // r11d
  float v60; // xmm1_4
  float v61; // xmm3_4
  unsigned int v62; // edi
  float *v63; // r11
  float v64; // xmm1_4
  float v65; // xmm2_4
  float v66; // xmm3_4
  unsigned int v67; // eax
  unsigned int v68; // eax
  char *v69; // rdi
  __int64 *v70; // rax
  __int64 v71; // rcx
  __m128 *v72; // rdx
  __int64 v73; // r10
  float v74; // xmm5_4
  float v75; // xmm2_4
  __int64 v76; // rax
  float v77; // xmm4_4
  float v78; // xmm1_4
  float *v79; // rcx
  float *v80; // rdx
  __int64 v81; // r8
  float v82; // xmm2_4
  char v83; // r9
  float v84; // xmm1_4
  float v85; // xmm2_4
  char v86; // r9
  float v87; // xmm1_4
  char v88; // dl
  float v89; // xmm2_4
  __int64 v90; // rcx
  __int64 v91; // rax
  float v92; // xmm1_4
  __int64 v93; // rsi
  float *v94; // r8
  float *v95; // rcx
  unsigned int v96; // edx
  __int64 v97; // r9
  float v98; // xmm1_4
  char v99; // al
  float v100; // xmm2_4
  char v101; // al
  float v102; // xmm1_4
  char v103; // al
  float v104; // xmm2_4
  char v105; // al
  float v106; // xmm1_4
  char v107; // al
  float *v108; // rdx
  float *v109; // rcx
  __int64 v110; // rax
  float v111; // xmm1_4
  char v112; // r8
  float v114; // xmm2_4
  float v115; // xmm2_4
  float v116; // xmm1_4
  float v117; // xmm2_4
  float v118; // xmm1_4
  float v119; // xmm2_4
  float v120; // xmm1_4
  float v121; // xmm2_4
  __int64 v122; // rcx
  char *v123; // rdi
  __int64 v124; // rax
  float v125; // xmm2_4
  float v126; // xmm1_4
  float v127; // xmm2_4
  float v128; // xmm1_4
  float v129; // xmm2_4
  float v130; // xmm2_4
  char *v131; // rax
  unsigned int v132; // ecx
  __int64 v133; // rax
  int v134; // ecx
  _DWORD *v135; // r9
  unsigned int v136; // ecx
  __m128 X; // [rsp+40h] [rbp-59h] BYREF
  __int64 v138; // [rsp+100h] [rbp+67h]

  v4 = 0;
  v138 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 && !IsEmpty(a4) )
    McTemplateU0qdffff(
      v134,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v135,
      *v135,
      v135[1],
      v135[2],
      v135[3]);
  X = *(__m128 *)a4;
  if ( !*((_BYTE *)this + 2883) )
  {
    v9 = X.m128_f32[2];
    v10 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] )
      goto LABEL_211;
    v11 = X.m128_f32[3];
    v12 = X.m128_f32[1];
    if ( X.m128_f32[3] < X.m128_f32[1] )
      goto LABEL_211;
    if ( *((float *)this + 715) > X.m128_f32[0] )
      v10 = *((float *)this + 715);
    v13 = X.m128_f32[1];
    if ( *((float *)this + 716) > X.m128_f32[1] )
    {
      v12 = *((float *)this + 716);
      v13 = v12;
    }
    v14 = X.m128_f32[2];
    if ( X.m128_f32[2] > *((float *)this + 717) )
    {
      v9 = *((float *)this + 717);
      v14 = v9;
    }
    v15 = X.m128_f32[3];
    if ( X.m128_f32[3] > *((float *)this + 718) )
    {
      v11 = *((float *)this + 718);
      v15 = v11;
    }
    if ( v14 > v10 && v15 > v13 && v14 > v10 && v15 > v12 )
    {
      if ( !*((_BYTE *)this + 2884) )
      {
        v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v10) & _xmm);
        if ( v16 < 8388608.0 )
          v10 = (float)(int)floorf_0(v10);
        X.m128_f32[0] = v10;
        v17 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v12) & _xmm);
        if ( v17 < 8388608.0 )
          v12 = (float)(int)floorf_0(v12);
        X.m128_f32[1] = v12;
        v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v9) & _xmm);
        if ( v18 < 8388608.0 )
          v9 = (float)(int)ceilf_0(v9);
        X.m128_f32[2] = v9;
        v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v11) & _xmm);
        if ( v19 < 8388608.0 )
          v11 = (float)(int)ceilf_0(v11);
        v20 = _mm_shuffle_ps(X, X, 147);
        v20.m128_f32[0] = v11;
        v21 = _mm_shuffle_ps(v20, v20, 57);
        X = v21;
        if ( a2 )
        {
          v22 = *((_DWORD *)this + 712);
          v23 = (char *)this + 1280;
          if ( v22 == 32 )
          {
            v131 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x610uLL);
            v24 = v131;
            if ( !v131 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, -2147024882, 0x1Du);
              v4 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v136, 0LL, 0, -2147024882, 0x204u);
              return v4;
            }
            memset_0(v131, 0, 0x610uLL);
            `vector constructor iterator'(
              v24 + 16,
              48LL,
              32LL,
              (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            v133 = *(_QWORD *)v23;
            if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
              goto LABEL_209;
            *(_QWORD *)v24 = v133;
            v22 = 0;
            *((_QWORD *)v24 + 1) = v23;
            *(_QWORD *)(v133 + 8) = v24;
            *(_QWORD *)v23 = v24;
            *((_DWORD *)this + 712) = 0;
          }
          else
          {
            v24 = *(char **)v23;
          }
          *((_DWORD *)this + 712) = v22 + 1;
          v138 = (__int64)&v24[48 * v22 + 16];
          *(_QWORD *)(v138 + 16) = a2;
          *(_BYTE *)(v138 + 24) = a3;
          *(__m128 *)(v138 + 28) = v21;
          *(_QWORD *)(v138 + 8) = 0LL;
          *(_QWORD *)v138 = 0LL;
        }
        v25 = v9 <= v10 || v11 <= v12;
        v26 = 0.0;
        v27 = (float)(v9 - v10) * (float)(v11 - v12);
        v28 = (float)((float)(v9 - v10) * 0.5) + v10;
        v29 = (float)((float)(v11 - v12) * 0.5) + v12;
        if ( *((_BYTE *)this + 420) )
        {
          if ( !v25 )
            v26 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v114 = (float)((float)(*((float *)this + 103) - v29) * (float)(*((float *)this + 103) - v29))
               + (float)((float)(*((float *)this + 102) - v28) * (float)(*((float *)this + 102) - v28));
          if ( v114 != 0.0 )
            v26 = (float)(v27 + *((float *)this + 104)) / v114;
        }
        *((float *)this + 198) = v26;
        v30 = 0.0;
        if ( *((_BYTE *)this + 436) )
        {
          if ( !v25 )
            v30 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v115 = (float)((float)(*((float *)this + 107) - v29) * (float)(*((float *)this + 107) - v29))
               + (float)((float)(*((float *)this + 106) - v28) * (float)(*((float *)this + 106) - v28));
          if ( v115 != 0.0 )
            v30 = (float)(v27 + *((float *)this + 108)) / v115;
        }
        v31 = (float *)((char *)this + 796);
        v32 = 0.0;
        *((float *)this + 199) = v30;
        if ( *((_BYTE *)this + 452) )
        {
          if ( !v25 )
            v32 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v116 = (float)((float)(*((float *)this + 111) - v29) * (float)(*((float *)this + 111) - v29))
               + (float)((float)(*((float *)this + 110) - v28) * (float)(*((float *)this + 110) - v28));
          if ( v116 != 0.0 )
            v32 = (float)(v27 + *((float *)this + 112)) / v116;
        }
        *((float *)this + 200) = v32;
        v33 = 0.0;
        if ( *((_BYTE *)this + 468) )
        {
          if ( !v25 )
            v33 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v117 = (float)((float)(*((float *)this + 115) - v29) * (float)(*((float *)this + 115) - v29))
               + (float)((float)(*((float *)this + 114) - v28) * (float)(*((float *)this + 114) - v28));
          if ( v117 != 0.0 )
            v33 = (float)(v27 + *((float *)this + 116)) / v117;
        }
        *((float *)this + 201) = v33;
        v34 = 0.0;
        if ( *((_BYTE *)this + 484) )
        {
          if ( !v25 )
            v34 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v118 = (float)((float)(*((float *)this + 119) - v29) * (float)(*((float *)this + 119) - v29))
               + (float)((float)(*((float *)this + 118) - v28) * (float)(*((float *)this + 118) - v28));
          if ( v118 != 0.0 )
            v34 = (float)(v27 + *((float *)this + 120)) / v118;
        }
        *((float *)this + 202) = v34;
        v35 = 0.0;
        if ( *((_BYTE *)this + 500) )
        {
          if ( !v25 )
            v35 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v119 = (float)((float)(*((float *)this + 123) - v29) * (float)(*((float *)this + 123) - v29))
               + (float)((float)(*((float *)this + 122) - v28) * (float)(*((float *)this + 122) - v28));
          if ( v119 != 0.0 )
            v35 = (float)(v27 + *((float *)this + 124)) / v119;
        }
        *((float *)this + 203) = v35;
        v36 = 0.0;
        if ( *((_BYTE *)this + 516) )
        {
          if ( !v25 )
            v36 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v120 = (float)((float)(*((float *)this + 127) - v29) * (float)(*((float *)this + 127) - v29))
               + (float)((float)(*((float *)this + 126) - v28) * (float)(*((float *)this + 126) - v28));
          if ( v120 != 0.0 )
            v36 = (float)(v27 + *((float *)this + 128)) / v120;
        }
        *((float *)this + 204) = v36;
        v37 = 0.0;
        if ( *((_BYTE *)this + 532) )
        {
          if ( !v25 )
            v37 = FLOAT_3_4028235e38;
        }
        else if ( !v25 )
        {
          v121 = (float)((float)(*((float *)this + 131) - v29) * (float)(*((float *)this + 131) - v29))
               + (float)((float)(*((float *)this + 130) - v28) * (float)(*((float *)this + 130) - v28));
          if ( v121 != 0.0 )
            v37 = (float)(v27 + *((float *)this + 132)) / v121;
        }
        v38 = FLOAT_N1_0;
        *((float *)this + 205) = v37;
        v39 = 0;
        v40 = 0;
        v41 = 0;
        v42 = 8;
        v43 = 64LL;
        do
        {
          v44 = 0;
          if ( v42 >= 4 )
          {
            v45 = v31;
            do
            {
              v46 = *(v45 - 1);
              v47 = v38;
              v48 = v38;
              if ( v46 > v38 )
              {
                v38 = *(v45 - 1);
                v41 = 1;
              }
              v49 = v44;
              v50 = v42;
              v51 = v38;
              if ( v46 <= v47 )
                v49 = v40;
              v53 = v46 <= v48;
              v52 = *v45;
              if ( v53 )
                v50 = v39;
              if ( v52 > v38 )
              {
                v38 = *v45;
                v41 = 1;
              }
              v53 = v52 <= v51;
              v54 = v44 + 1;
              v55 = v45[1];
              v56 = v38;
              if ( v53 )
                v54 = v49;
              v57 = v42;
              if ( v53 )
                v57 = v50;
              if ( v55 > v38 )
              {
                v38 = v45[1];
                v41 = 1;
              }
              v58 = v55 <= v56;
              v59 = v44 + 2;
              v60 = v45[2];
              v61 = v38;
              if ( v58 )
                v59 = v54;
              v62 = v42;
              if ( v58 )
                v62 = v57;
              if ( v60 > v38 )
              {
                v38 = v45[2];
                v41 = 1;
              }
              v40 = v44 + 3;
              v39 = v42;
              if ( v60 <= v61 )
              {
                v40 = v59;
                v39 = v62;
              }
              v45 += 4;
              v44 += 4;
            }
            while ( v44 < v42 - 3 );
            v4 = 0;
          }
          if ( v44 < v42 )
          {
            v63 = (float *)((char *)this + 4 * v44 + 4 * v43 + 536);
            do
            {
              v64 = *v63;
              v65 = v38;
              v66 = v38;
              if ( *v63 > v38 )
              {
                v38 = *v63;
                v41 = 1;
              }
              v67 = v44;
              if ( v64 <= v65 )
                v67 = v40;
              v40 = v67;
              v68 = v42;
              if ( v64 <= v66 )
                v68 = v39;
              ++v63;
              ++v44;
              v39 = v68;
            }
            while ( v44 < v42 );
          }
          v31 -= 8;
          v43 -= 8LL;
          --v42;
        }
        while ( v42 );
        if ( !v41 )
          MilUnexpectedError(-2147467259, L"Invalid dirty region");
        v69 = (char *)this + 16 * v40;
        if ( v39 == 8 )
        {
          if ( !v138 )
          {
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v69 + 152, &X);
            v11 = X.m128_f32[3];
            v9 = X.m128_f32[2];
            v12 = X.m128_f32[1];
            v10 = X.m128_f32[0];
            goto LABEL_100;
          }
          v70 = (__int64 *)(v69 + 280);
          v71 = *((_QWORD *)v69 + 35);
          if ( *(char **)(v71 + 8) == v69 + 280 )
          {
            *(_QWORD *)v138 = v71;
            *(_QWORD *)(v138 + 8) = v70;
            *(_QWORD *)(v71 + 8) = v138;
            *v70 = v138;
LABEL_100:
            X.m128_u64[0] = __PAIR64__(LODWORD(v12), LODWORD(v10));
            X.m128_u64[1] = __PAIR64__(LODWORD(v11), LODWORD(v9));
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&X, v69 + 24);
            v74 = X.m128_f32[0];
            if ( X.m128_f32[2] > X.m128_f32[0] )
            {
              v75 = X.m128_f32[1];
              if ( X.m128_f32[3] > X.m128_f32[1]
                && (X.m128_f32[0] < v72->m128_f32[0]
                 || X.m128_f32[1] < v72->m128_f32[1]
                 || v72->m128_f32[2] < X.m128_f32[2]
                 || v72->m128_f32[3] < X.m128_f32[3]) )
              {
                v76 = 0LL;
                v77 = X.m128_f32[2] - X.m128_f32[0];
                v78 = X.m128_f32[3] - X.m128_f32[1];
                *v72 = X;
                v69[420] = 0;
                *((float *)v69 + 104) = v77 * v78;
                *((float *)v69 + 102) = (float)(v77 * 0.5) + v74;
                *((float *)v69 + 103) = (float)(v78 * 0.5) + v75;
                if ( v40 >= 2 )
                {
                  v79 = (float *)((char *)this + 412);
                  v80 = (float *)((char *)this + 32 * v73 + 540);
                  v81 = ((v40 - 2) >> 1) + 1;
                  v76 = (unsigned int)(2 * v81);
                  do
                  {
                    v82 = 0.0;
                    v83 = v69[420];
                    if ( *((_BYTE *)v79 + 8) )
                    {
                      if ( !v83 )
                        v82 = FLOAT_3_4028235e38;
                    }
                    else if ( !v83 )
                    {
                      v84 = (float)((float)(*v79 - *((float *)v69 + 103)) * (float)(*v79 - *((float *)v69 + 103)))
                          + (float)((float)(*(v79 - 1) - *((float *)v69 + 102))
                                  * (float)(*(v79 - 1) - *((float *)v69 + 102)));
                      if ( v84 != 0.0 )
                        v82 = (float)(v79[1] + *((float *)v69 + 104)) / v84;
                    }
                    *(v80 - 1) = v82;
                    v85 = 0.0;
                    v86 = v69[420];
                    if ( *((_BYTE *)v79 + 24) )
                    {
                      if ( !v86 )
                        v85 = FLOAT_3_4028235e38;
                    }
                    else if ( !v86 )
                    {
                      v87 = (float)((float)(v79[4] - *((float *)v69 + 103)) * (float)(v79[4] - *((float *)v69 + 103)))
                          + (float)((float)(v79[3] - *((float *)v69 + 102)) * (float)(v79[3] - *((float *)v69 + 102)));
                      if ( v87 != 0.0 )
                        v85 = (float)(v79[5] + *((float *)v69 + 104)) / v87;
                    }
                    *v80 = v85;
                    v79 += 8;
                    v80 += 2;
                    --v81;
                  }
                  while ( v81 );
                }
                if ( (unsigned int)v76 < v40 )
                {
                  v88 = v69[420];
                  v89 = 0.0;
                  v90 = (unsigned int)v76;
                  v91 = 2 * v76;
                  if ( *((_BYTE *)this + 8 * v91 + 420) )
                  {
                    if ( !v88 )
                      v89 = FLOAT_3_4028235e38;
                  }
                  else if ( !v88 )
                  {
                    v92 = (float)((float)(*((float *)this + 2 * v91 + 103) - *((float *)v69 + 103))
                                * (float)(*((float *)this + 2 * v91 + 103) - *((float *)v69 + 103)))
                        + (float)((float)(*((float *)this + 2 * v91 + 102) - *((float *)v69 + 102))
                                * (float)(*((float *)this + 2 * v91 + 102) - *((float *)v69 + 102)));
                    if ( v92 != 0.0 )
                      v89 = (float)(*((float *)this + 2 * v91 + 104) + *((float *)v69 + 104)) / v92;
                  }
                  *((float *)this + 8 * v73 + v90 + 134) = v89;
                }
                v93 = v40 + 1;
                if ( (unsigned int)v93 < 8 )
                {
                  if ( (unsigned int)(8 - v93) >= 5 )
                  {
                    v94 = (float *)((char *)this + 16 * (unsigned int)v93 + 412);
                    v95 = (float *)((char *)this + 32 * v93 + 4 * v73 + 568);
                    v96 = (3 - (int)v93) / 5u + 1;
                    v97 = v96;
                    v93 = v96 + (_DWORD)v93 + 4 * v96;
                    do
                    {
                      v98 = 0.0;
                      v99 = v69[420];
                      if ( *((_BYTE *)v94 + 8) )
                      {
                        if ( !v99 )
                          v98 = FLOAT_3_4028235e38;
                      }
                      else if ( !v99 )
                      {
                        v125 = (float)((float)(*v94 - *((float *)v69 + 103)) * (float)(*v94 - *((float *)v69 + 103)))
                             + (float)((float)(*(v94 - 1) - *((float *)v69 + 102))
                                     * (float)(*(v94 - 1) - *((float *)v69 + 102)));
                        if ( v125 != 0.0 )
                          v98 = (float)(v94[1] + *((float *)v69 + 104)) / v125;
                      }
                      *(v95 - 8) = v98;
                      v100 = 0.0;
                      v101 = v69[420];
                      if ( *((_BYTE *)v94 + 24) )
                      {
                        if ( !v101 )
                          v100 = FLOAT_3_4028235e38;
                      }
                      else if ( !v101 )
                      {
                        v126 = (float)((float)(v94[4] - *((float *)v69 + 103)) * (float)(v94[4] - *((float *)v69 + 103)))
                             + (float)((float)(v94[3] - *((float *)v69 + 102)) * (float)(v94[3] - *((float *)v69 + 102)));
                        if ( v126 != 0.0 )
                          v100 = (float)(v94[5] + *((float *)v69 + 104)) / v126;
                      }
                      *v95 = v100;
                      v102 = 0.0;
                      v103 = v69[420];
                      if ( *((_BYTE *)v94 + 40) )
                      {
                        if ( !v103 )
                          v102 = FLOAT_3_4028235e38;
                      }
                      else if ( !v103 )
                      {
                        v127 = (float)((float)(v94[8] - *((float *)v69 + 103)) * (float)(v94[8] - *((float *)v69 + 103)))
                             + (float)((float)(v94[7] - *((float *)v69 + 102)) * (float)(v94[7] - *((float *)v69 + 102)));
                        if ( v127 != 0.0 )
                          v102 = (float)(v94[9] + *((float *)v69 + 104)) / v127;
                      }
                      v95[8] = v102;
                      v104 = 0.0;
                      v105 = v69[420];
                      if ( *((_BYTE *)v94 + 56) )
                      {
                        if ( !v105 )
                          v104 = FLOAT_3_4028235e38;
                      }
                      else if ( !v105 )
                      {
                        v128 = (float)((float)(v94[12] - *((float *)v69 + 103))
                                     * (float)(v94[12] - *((float *)v69 + 103)))
                             + (float)((float)(v94[11] - *((float *)v69 + 102))
                                     * (float)(v94[11] - *((float *)v69 + 102)));
                        if ( v128 != 0.0 )
                          v104 = (float)(v94[13] + *((float *)v69 + 104)) / v128;
                      }
                      v95[16] = v104;
                      v106 = 0.0;
                      v107 = v69[420];
                      if ( *((_BYTE *)v94 + 72) )
                      {
                        if ( !v107 )
                          v106 = FLOAT_3_4028235e38;
                      }
                      else if ( !v107 )
                      {
                        v129 = (float)((float)(v94[16] - *((float *)v69 + 103))
                                     * (float)(v94[16] - *((float *)v69 + 103)))
                             + (float)((float)(v94[15] - *((float *)v69 + 102))
                                     * (float)(v94[15] - *((float *)v69 + 102)));
                        if ( v129 != 0.0 )
                          v106 = (float)(v94[17] + *((float *)v69 + 104)) / v129;
                      }
                      v95[24] = v106;
                      v94 += 20;
                      v95 += 40;
                      --v97;
                    }
                    while ( v97 );
                  }
                  if ( (unsigned int)v93 < 8 )
                  {
                    v108 = (float *)((char *)this + 16 * (unsigned int)v93 + 412);
                    v109 = (float *)((char *)this + 32 * v93 + 4 * v73 + 536);
                    v110 = (unsigned int)(8 - v93);
                    do
                    {
                      v111 = 0.0;
                      v112 = v69[420];
                      if ( *((_BYTE *)v108 + 8) )
                      {
                        if ( !v112 )
                          v111 = FLOAT_3_4028235e38;
                      }
                      else if ( !v112 )
                      {
                        v130 = (float)((float)(*v108 - *((float *)v69 + 103)) * (float)(*v108 - *((float *)v69 + 103)))
                             + (float)((float)(*(v108 - 1) - *((float *)v69 + 102))
                                     * (float)(*(v108 - 1) - *((float *)v69 + 102)));
                        if ( v130 != 0.0 )
                          v111 = (float)(v108[1] + *((float *)v69 + 104)) / v130;
                      }
                      *v109 = v111;
                      v108 += 4;
                      v109 += 8;
                      --v110;
                    }
                    while ( v110 );
                  }
                }
              }
            }
            return v4;
          }
        }
        else
        {
          CDirtyRegion::Merge(this, v39, v40);
          *(__m128 *)(v69 + 24) = v21;
          CDirtyRegion::CalcDirtyRegionCachedData(v122, &X, v69 + 408);
          CDirtyRegion::UpdateAcceleration(this, v40);
          if ( !v138 )
          {
            *(__m128 *)(v69 + 152) = v21;
            return v4;
          }
          v123 = v69 + 280;
          v124 = *(_QWORD *)v123;
          if ( *(char **)(*(_QWORD *)v123 + 8LL) == v123 )
          {
            *(_QWORD *)v138 = v124;
            *(_QWORD *)(v138 + 8) = v123;
            *(_QWORD *)(v124 + 8) = v138;
            *(_QWORD *)v123 = v138;
            return v4;
          }
        }
LABEL_209:
        __fastfail(3u);
      }
LABEL_211:
      CDirtyRegion::SetFullDirty(this);
    }
  }
  return v4;
}
