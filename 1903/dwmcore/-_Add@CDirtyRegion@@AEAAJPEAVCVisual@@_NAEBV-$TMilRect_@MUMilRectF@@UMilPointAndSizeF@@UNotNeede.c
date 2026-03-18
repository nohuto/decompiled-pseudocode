/*
 * XREFs of ?_Add@CDirtyRegion@@AEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060DA0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180061D00 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180085B28 (-Add@CDirtyRegion@@QEAAJPEAVCVisual@@_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded.c)
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x18008B2B0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180044FFC (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x180052C10 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAUDirtyRegionCachedData@1@@Z @ 0x180054D60 (-CalcDirtyRegionCachedData@CDirtyRegion@@AEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNo.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180080530 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800A2930 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x1800B908C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?Merge@CDirtyRegion@@AEAAXII@Z @ 0x1800B91D8 (-Merge@CDirtyRegion@@AEAAXII@Z.c)
 *     ?UpdateAcceleration@CDirtyRegion@@AEAAXI@Z @ 0x1800B934C (-UpdateAcceleration@CDirtyRegion@@AEAAXI@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     ceilf_0 @ 0x1800EC4C7 (ceilf_0.c)
 *     floorf_0 @ 0x1800EC4DF (floorf_0.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18015B3FC (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     McTemplateU0qdffff @ 0x180178754 (McTemplateU0qdffff.c)
 */

__int64 __fastcall CDirtyRegion::_Add(CDirtyRegion *this, __int64 a2, char a3, const struct D2D_RECT_F *a4)
{
  unsigned int v4; // edi
  float v9; // xmm11_4
  float v10; // xmm8_4
  float v11; // xmm12_4
  float v12; // xmm9_4
  float v13; // xmm2_4
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
  struct D2D_RECT_F *v72; // rdx
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
  __int64 v88; // rcx
  float v89; // xmm2_4
  __int64 v90; // rax
  float v91; // xmm1_4
  __int64 v92; // rsi
  float *v93; // r8
  float *v94; // rcx
  unsigned int v95; // edx
  __int64 v96; // r9
  float v97; // xmm1_4
  char v98; // al
  float v99; // xmm1_4
  float v100; // xmm2_4
  float v101; // xmm1_4
  float v102; // xmm1_4
  char v103; // al
  float *v104; // rdx
  float *v105; // rcx
  __int64 v106; // rax
  float v107; // xmm1_4
  char v108; // r8
  float v109; // xmm2_4
  float v110; // xmm2_4
  float v111; // xmm1_4
  float v112; // xmm2_4
  float v113; // xmm1_4
  float v114; // xmm2_4
  float v115; // xmm1_4
  float v116; // xmm2_4
  __int64 v117; // rcx
  char *v118; // rdi
  __int64 v119; // rax
  float v121; // xmm2_4
  float v122; // xmm2_4
  float v123; // xmm1_4
  float v124; // xmm2_4
  float v125; // xmm2_4
  float v126; // xmm2_4
  char *v127; // rax
  unsigned int v128; // ecx
  __int64 v129; // rax
  int v130; // ecx
  _DWORD *v131; // r9
  unsigned int v132; // ecx
  __m128 X; // [rsp+40h] [rbp-59h] BYREF
  __int64 v134; // [rsp+100h] [rbp+67h]

  v4 = 0;
  v134 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0 && !IsEmpty(a4) )
    McTemplateU0qdffff(
      v130,
      (unsigned int)&EVTDESC_ETWGUID_DIRTY_ADDRECT,
      0,
      (_DWORD)v131,
      *v131,
      v131[1],
      v131[2],
      v131[3]);
  X = *(__m128 *)a4;
  if ( !*((_BYTE *)this + 2883) )
  {
    v9 = X.m128_f32[2];
    v10 = X.m128_f32[0];
    if ( X.m128_f32[2] < X.m128_f32[0] )
      goto LABEL_200;
    v11 = X.m128_f32[3];
    v12 = X.m128_f32[1];
    if ( X.m128_f32[3] < X.m128_f32[1] )
      goto LABEL_200;
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
            v127 = (char *)DefaultHeap::Alloc(0x610uLL);
            v24 = v127;
            if ( !v127 )
            {
              v4 = -2147024882;
              MilInstrumentationCheckHR_MaybeFailFast(v128, 0LL, 0, -2147024882, 0x1Bu, 0LL);
              MilInstrumentationCheckHR_MaybeFailFast(v132, 0LL, 0, -2147024882, 0x1FFu, 0LL);
              return v4;
            }
            memset_0(v127, 0, 0x610uLL);
            `vector constructor iterator'(
              v24 + 16,
              48LL,
              32LL,
              (void (__fastcall *)(char *))Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal);
            v129 = *(_QWORD *)v23;
            if ( *(char **)(*(_QWORD *)v23 + 8LL) != v23 )
              goto LABEL_198;
            *(_QWORD *)v24 = v129;
            v22 = 0;
            *((_QWORD *)v24 + 1) = v23;
            *(_QWORD *)(v129 + 8) = v24;
            *(_QWORD *)v23 = v24;
          }
          else
          {
            v24 = *(char **)v23;
          }
          *((_DWORD *)this + 712) = v22 + 1;
          v134 = (__int64)&v24[48 * v22 + 16];
          *(_QWORD *)(v134 + 16) = a2;
          *(_BYTE *)(v134 + 24) = a3;
          *(__m128 *)(v134 + 28) = v21;
          *(_QWORD *)(v134 + 8) = 0LL;
          *(_QWORD *)v134 = 0LL;
        }
        v25 = v9 <= v10 || v11 <= v12;
        v26 = 0.0;
        v27 = (float)(v9 - v10) * (float)(v11 - v12);
        v28 = (float)((float)(v9 - v10) * 0.5) + v10;
        v29 = (float)((float)(v11 - v12) * 0.5) + v12;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 420) )
          {
            v26 = FLOAT_3_4028235e38;
          }
          else
          {
            v109 = (float)((float)(*((float *)this + 102) - v28) * (float)(*((float *)this + 102) - v28))
                 + (float)((float)(*((float *)this + 103) - v29) * (float)(*((float *)this + 103) - v29));
            if ( v109 != 0.0 )
              v26 = (float)(v27 + *((float *)this + 104)) / v109;
          }
        }
        *((float *)this + 198) = v26;
        v30 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 436) )
          {
            v30 = FLOAT_3_4028235e38;
          }
          else
          {
            v110 = (float)((float)(*((float *)this + 106) - v28) * (float)(*((float *)this + 106) - v28))
                 + (float)((float)(*((float *)this + 107) - v29) * (float)(*((float *)this + 107) - v29));
            if ( v110 != 0.0 )
              v30 = (float)(v27 + *((float *)this + 108)) / v110;
          }
        }
        v31 = (float *)((char *)this + 796);
        v32 = 0.0;
        *((float *)this + 199) = v30;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 452) )
          {
            v32 = FLOAT_3_4028235e38;
          }
          else
          {
            v111 = (float)((float)(*((float *)this + 110) - v28) * (float)(*((float *)this + 110) - v28))
                 + (float)((float)(*((float *)this + 111) - v29) * (float)(*((float *)this + 111) - v29));
            if ( v111 != 0.0 )
              v32 = (float)(v27 + *((float *)this + 112)) / v111;
          }
        }
        *((float *)this + 200) = v32;
        v33 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 468) )
          {
            v33 = FLOAT_3_4028235e38;
          }
          else
          {
            v112 = (float)((float)(*((float *)this + 114) - v28) * (float)(*((float *)this + 114) - v28))
                 + (float)((float)(*((float *)this + 115) - v29) * (float)(*((float *)this + 115) - v29));
            if ( v112 != 0.0 )
              v33 = (float)(v27 + *((float *)this + 116)) / v112;
          }
        }
        *((float *)this + 201) = v33;
        v34 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 484) )
          {
            v34 = FLOAT_3_4028235e38;
          }
          else
          {
            v113 = (float)((float)(*((float *)this + 118) - v28) * (float)(*((float *)this + 118) - v28))
                 + (float)((float)(*((float *)this + 119) - v29) * (float)(*((float *)this + 119) - v29));
            if ( v113 != 0.0 )
              v34 = (float)(v27 + *((float *)this + 120)) / v113;
          }
        }
        *((float *)this + 202) = v34;
        v35 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 500) )
          {
            v35 = FLOAT_3_4028235e38;
          }
          else
          {
            v114 = (float)((float)(*((float *)this + 122) - v28) * (float)(*((float *)this + 122) - v28))
                 + (float)((float)(*((float *)this + 123) - v29) * (float)(*((float *)this + 123) - v29));
            if ( v114 != 0.0 )
              v35 = (float)(v27 + *((float *)this + 124)) / v114;
          }
        }
        *((float *)this + 203) = v35;
        v36 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 516) )
          {
            v36 = FLOAT_3_4028235e38;
          }
          else
          {
            v115 = (float)((float)(*((float *)this + 126) - v28) * (float)(*((float *)this + 126) - v28))
                 + (float)((float)(*((float *)this + 127) - v29) * (float)(*((float *)this + 127) - v29));
            if ( v115 != 0.0 )
              v36 = (float)(v27 + *((float *)this + 128)) / v115;
          }
        }
        *((float *)this + 204) = v36;
        v37 = 0.0;
        if ( !v25 )
        {
          if ( *((_BYTE *)this + 532) )
          {
            v37 = FLOAT_3_4028235e38;
          }
          else
          {
            v116 = (float)((float)(*((float *)this + 130) - v28) * (float)(*((float *)this + 130) - v28))
                 + (float)((float)(*((float *)this + 131) - v29) * (float)(*((float *)this + 131) - v29));
            if ( v116 != 0.0 )
              v37 = (float)(v27 + *((float *)this + 132)) / v116;
          }
        }
        v38 = FLOAT_N1_0;
        v39 = 0;
        v40 = 0;
        *((float *)this + 205) = v37;
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
          if ( !v134 )
          {
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v69 + 152, &X);
            v11 = X.m128_f32[3];
            v9 = X.m128_f32[2];
            v12 = X.m128_f32[1];
            v10 = X.m128_f32[0];
LABEL_99:
            X.m128_f32[0] = v10;
            X.m128_f32[1] = v12;
            X.m128_f32[2] = v9;
            X.m128_f32[3] = v11;
            TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&X, v69 + 24);
            v74 = X.m128_f32[0];
            if ( X.m128_f32[2] > X.m128_f32[0] )
            {
              v75 = X.m128_f32[1];
              if ( X.m128_f32[3] > X.m128_f32[1]
                && (X.m128_f32[0] < v72->left
                 || X.m128_f32[1] < v72->top
                 || v72->right < X.m128_f32[2]
                 || v72->bottom < X.m128_f32[3]) )
              {
                v76 = 0LL;
                v77 = X.m128_f32[2] - X.m128_f32[0];
                v78 = X.m128_f32[3] - X.m128_f32[1];
                *v72 = (struct D2D_RECT_F)X;
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
                  v88 = (unsigned int)v76;
                  v89 = 0.0;
                  v90 = 2 * v76;
                  if ( !v69[420] )
                  {
                    if ( *((_BYTE *)this + 8 * v90 + 420) )
                    {
                      v89 = FLOAT_3_4028235e38;
                    }
                    else
                    {
                      v91 = (float)((float)(*((float *)this + 2 * v90 + 103) - *((float *)v69 + 103))
                                  * (float)(*((float *)this + 2 * v90 + 103) - *((float *)v69 + 103)))
                          + (float)((float)(*((float *)this + 2 * v90 + 102) - *((float *)v69 + 102))
                                  * (float)(*((float *)this + 2 * v90 + 102) - *((float *)v69 + 102)));
                      if ( v91 != 0.0 )
                        v89 = (float)(*((float *)this + 2 * v90 + 104) + *((float *)v69 + 104)) / v91;
                    }
                  }
                  *((float *)this + 8 * v73 + v88 + 134) = v89;
                }
                v92 = v40 + 1;
                if ( (unsigned int)v92 < 8 )
                {
                  if ( (unsigned int)(8 - v92) >= 5 )
                  {
                    v93 = (float *)((char *)this + 16 * (unsigned int)v92 + 412);
                    v94 = (float *)((char *)this + 32 * v92 + 4 * v73 + 568);
                    v95 = (3 - (int)v92) / 5u + 1;
                    v96 = v95;
                    v92 = v95 + (_DWORD)v92 + 4 * v95;
                    do
                    {
                      v97 = 0.0;
                      v98 = v69[420];
                      if ( *((_BYTE *)v93 + 8) )
                      {
                        if ( !v98 )
                          v97 = FLOAT_3_4028235e38;
                      }
                      else if ( !v98 )
                      {
                        v121 = (float)((float)(*v93 - *((float *)v69 + 103)) * (float)(*v93 - *((float *)v69 + 103)))
                             + (float)((float)(*(v93 - 1) - *((float *)v69 + 102))
                                     * (float)(*(v93 - 1) - *((float *)v69 + 102)));
                        if ( v121 != 0.0 )
                          v97 = (float)(v93[1] + *((float *)v69 + 104)) / v121;
                      }
                      *(v94 - 8) = v97;
                      v99 = 0.0;
                      if ( !v69[420] )
                      {
                        if ( *((_BYTE *)v93 + 24) )
                        {
                          v99 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v122 = (float)((float)(v93[4] - *((float *)v69 + 103))
                                       * (float)(v93[4] - *((float *)v69 + 103)))
                               + (float)((float)(v93[3] - *((float *)v69 + 102))
                                       * (float)(v93[3] - *((float *)v69 + 102)));
                          if ( v122 != 0.0 )
                            v99 = (float)(v93[5] + *((float *)v69 + 104)) / v122;
                        }
                      }
                      *v94 = v99;
                      v100 = 0.0;
                      if ( !v69[420] )
                      {
                        if ( *((_BYTE *)v93 + 40) )
                        {
                          v100 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v123 = (float)((float)(v93[8] - *((float *)v69 + 103))
                                       * (float)(v93[8] - *((float *)v69 + 103)))
                               + (float)((float)(v93[7] - *((float *)v69 + 102))
                                       * (float)(v93[7] - *((float *)v69 + 102)));
                          if ( v123 != 0.0 )
                            v100 = (float)(v93[9] + *((float *)v69 + 104)) / v123;
                        }
                      }
                      v94[8] = v100;
                      v101 = 0.0;
                      if ( !v69[420] )
                      {
                        if ( *((_BYTE *)v93 + 56) )
                        {
                          v101 = FLOAT_3_4028235e38;
                        }
                        else
                        {
                          v124 = (float)((float)(v93[12] - *((float *)v69 + 103))
                                       * (float)(v93[12] - *((float *)v69 + 103)))
                               + (float)((float)(v93[11] - *((float *)v69 + 102))
                                       * (float)(v93[11] - *((float *)v69 + 102)));
                          if ( v124 != 0.0 )
                            v101 = (float)(v93[13] + *((float *)v69 + 104)) / v124;
                        }
                      }
                      v94[16] = v101;
                      v102 = 0.0;
                      v103 = v69[420];
                      if ( *((_BYTE *)v93 + 72) )
                      {
                        if ( !v103 )
                          v102 = FLOAT_3_4028235e38;
                      }
                      else if ( !v103 )
                      {
                        v125 = (float)((float)(v93[16] - *((float *)v69 + 103))
                                     * (float)(v93[16] - *((float *)v69 + 103)))
                             + (float)((float)(v93[15] - *((float *)v69 + 102))
                                     * (float)(v93[15] - *((float *)v69 + 102)));
                        if ( v125 != 0.0 )
                          v102 = (float)(v93[17] + *((float *)v69 + 104)) / v125;
                      }
                      v94[24] = v102;
                      v93 += 20;
                      v94 += 40;
                      --v96;
                    }
                    while ( v96 );
                  }
                  if ( (unsigned int)v92 < 8 )
                  {
                    v104 = (float *)((char *)this + 16 * (unsigned int)v92 + 412);
                    v105 = (float *)((char *)this + 32 * v92 + 4 * v73 + 536);
                    v106 = (unsigned int)(8 - v92);
                    do
                    {
                      v107 = 0.0;
                      v108 = v69[420];
                      if ( *((_BYTE *)v104 + 8) )
                      {
                        if ( !v108 )
                          v107 = FLOAT_3_4028235e38;
                      }
                      else if ( !v108 )
                      {
                        v126 = (float)((float)(*v104 - *((float *)v69 + 103)) * (float)(*v104 - *((float *)v69 + 103)))
                             + (float)((float)(*(v104 - 1) - *((float *)v69 + 102))
                                     * (float)(*(v104 - 1) - *((float *)v69 + 102)));
                        if ( v126 != 0.0 )
                          v107 = (float)(v104[1] + *((float *)v69 + 104)) / v126;
                      }
                      *v105 = v107;
                      v104 += 4;
                      v105 += 8;
                      --v106;
                    }
                    while ( v106 );
                    return 0;
                  }
                }
              }
            }
            return 0;
          }
          v70 = (__int64 *)(v69 + 280);
          v71 = *((_QWORD *)v69 + 35);
          if ( *(char **)(v71 + 8) == v69 + 280 )
          {
            *(_QWORD *)v134 = v71;
            *(_QWORD *)(v134 + 8) = v70;
            *(_QWORD *)(v71 + 8) = v134;
            *v70 = v134;
            goto LABEL_99;
          }
        }
        else
        {
          CDirtyRegion::Merge(this, v39, v40);
          *(__m128 *)(v69 + 24) = v21;
          CDirtyRegion::CalcDirtyRegionCachedData(v117, (const struct D2D_RECT_F *)&X);
          CDirtyRegion::UpdateAcceleration(this, v40);
          if ( !v134 )
          {
            *(__m128 *)(v69 + 152) = v21;
            return 0;
          }
          v118 = v69 + 280;
          v119 = *(_QWORD *)v118;
          if ( *(char **)(*(_QWORD *)v118 + 8LL) == v118 )
          {
            *(_QWORD *)v134 = v119;
            *(_QWORD *)(v134 + 8) = v118;
            *(_QWORD *)(v119 + 8) = v134;
            *(_QWORD *)v118 = v134;
            return 0;
          }
        }
LABEL_198:
        __fastfail(3u);
      }
LABEL_200:
      CDirtyRegion::SetFullDirty(this);
    }
  }
  return v4;
}
