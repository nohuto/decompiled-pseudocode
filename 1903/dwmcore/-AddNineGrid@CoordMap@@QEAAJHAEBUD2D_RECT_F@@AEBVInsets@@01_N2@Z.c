/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180010630
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x180010230 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000E4C0 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180010078 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x180010CC0 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x1800114EC (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7,
        bool a8)
{
  float v9; // xmm7_4
  float top; // xmm2_4
  float v11; // xmm8_4
  float v12; // xmm15_4
  __int64 v13; // r8
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm12_4
  __int64 v17; // rcx
  __int64 *v18; // r8
  float v19; // xmm9_4
  float v20; // xmm11_4
  float v21; // xmm8_4
  float v22; // xmm10_4
  bool v23; // r12
  __int64 v24; // xmm4_8
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  bool v29; // di
  bool v30; // r13
  float v31; // xmm1_4
  bool v32; // cf
  FLOAT left; // xmm1_4
  bool v34; // r14
  float v35; // xmm6_4
  float v36; // xmm15_4
  float v37; // xmm13_4
  int v38; // eax
  unsigned int v39; // ebx
  float v40; // xmm0_4
  float v41; // xmm9_4
  int v42; // eax
  float v43; // xmm2_4
  FLOAT v44; // xmm9_4
  int v45; // eax
  __int64 *v46; // rdi
  float v47; // xmm1_4
  int v48; // eax
  bool v49; // r13
  __int64 *v50; // rdi
  float v51; // xmm1_4
  int v52; // eax
  float v53; // xmm0_4
  float v54; // xmm8_4
  int v55; // eax
  bool v56; // r13
  float v57; // xmm2_4
  int v58; // eax
  __int64 v59; // rcx
  float v60; // xmm1_4
  int v61; // eax
  unsigned int v62; // ecx
  float v64; // xmm2_4
  float v65; // xmm2_4
  __int128 v66; // xmm6
  float v67; // xmm2_4
  float v68; // xmm2_4
  float v69; // xmm2_4
  float v70; // xmm2_4
  float v71; // [rsp+38h] [rbp-D0h] BYREF
  float v72; // [rsp+3Ch] [rbp-CCh]
  float v73; // [rsp+40h] [rbp-C8h]
  float v74; // [rsp+44h] [rbp-C4h]
  bool v75; // [rsp+48h] [rbp-C0h]
  bool v76; // [rsp+49h] [rbp-BFh]
  FLOAT right; // [rsp+4Ch] [rbp-BCh]
  __int128 v78; // [rsp+50h] [rbp-B8h] BYREF
  FLOAT v79; // [rsp+60h] [rbp-A8h]
  float v80; // [rsp+64h] [rbp-A4h]
  __int64 *v81; // [rsp+68h] [rbp-A0h]
  float v82; // [rsp+70h] [rbp-98h]
  float v83; // [rsp+74h] [rbp-94h]
  float bottom; // [rsp+78h] [rbp-90h]

  v81 = (__int64 *)this;
  if ( a8 )
    v9 = FLOAT_0_5;
  else
    v9 = 0.0;
  top = a3->top;
  right = a3->right;
  v11 = a5->bottom - a5->top;
  v12 = a5->right - a5->left;
  bottom = a3->bottom;
  v83 = top;
  v82 = v11;
  v79 = right;
  v80 = bottom - top;
  Insets::Clamp(&v71, a4, this);
  if ( v71 < 0.00000011920929 )
    v71 = 0.0;
  v14 = v73;
  if ( v73 < 0.00000011920929 )
  {
    v14 = 0.0;
    v73 = 0.0;
  }
  v15 = v72;
  if ( v72 < 0.00000011920929 )
  {
    v15 = 0.0;
    v72 = 0.0;
  }
  v16 = v74;
  if ( v74 < 0.00000011920929 )
  {
    v16 = 0.0;
    v74 = 0.0;
  }
  Insets::Clamp(&v78, a6, v13);
  v19 = *(float *)&v78;
  if ( v9 > *(float *)&v78 )
  {
    v19 = 0.0;
    LODWORD(v78) = 0;
  }
  v20 = *((float *)&v78 + 2);
  if ( v9 > *((float *)&v78 + 2) )
  {
    v20 = 0.0;
    DWORD2(v78) = 0;
  }
  v21 = *((float *)&v78 + 1);
  if ( v9 > *((float *)&v78 + 1) )
  {
    v21 = 0.0;
    DWORD1(v78) = 0;
  }
  v22 = *((float *)&v78 + 3);
  if ( v9 > *((float *)&v78 + 3) )
  {
    v22 = 0.0;
    HIDWORD(v78) = 0;
  }
  v23 = a7;
  v24 = _xmm;
  v25 = FLOAT_0_0000011920929;
  if ( a7 )
  {
    v64 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v79 - (float)(v14 + v71))) & _xmm);
    if ( v64 <= 0.0000011920929
      || (v65 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v80 - (float)(v16 + v15))) & _xmm), v65 <= 0.0000011920929) )
    {
      v23 = 0;
    }
    if ( v23 )
      goto LABEL_24;
  }
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v12 - v19) - v20) - (float)((float)(v79 - v71) - v14))) & _xmm);
  if ( v26 <= 0.0000011920929 )
  {
    v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v71)) & _xmm);
    if ( v67 <= 0.0000011920929 )
    {
      v19 = 0.0;
      v71 = 0.0;
      LODWORD(v78) = 0;
    }
    v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v14)) & _xmm);
    if ( v68 <= 0.0000011920929 )
    {
      v14 = 0.0;
      v20 = 0.0;
      v73 = 0.0;
      DWORD2(v78) = 0;
    }
  }
  v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v82 - v21) - v22) - (float)((float)(v80 - v15) - v16))) & _xmm);
  if ( v27 <= 0.0000011920929 )
  {
    v69 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v15)) & _xmm);
    if ( v69 <= 0.0000011920929 )
    {
      v15 = 0.0;
      v21 = 0.0;
      v72 = 0.0;
      DWORD1(v78) = 0;
    }
    v70 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v16)) & _xmm);
    if ( v70 <= 0.0000011920929 )
    {
      v16 = 0.0;
      v22 = 0.0;
      v74 = 0.0;
      HIDWORD(v78) = 0;
    }
  }
  if ( v23 || !Insets::IsEmpty((const struct Insets *)&v71) || !Insets::IsEmpty((const struct Insets *)&v78) )
  {
LABEL_24:
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v79 - (float)(v14 + v71))) & v24);
    v29 = v25 >= v28;
    v30 = v14 > 0.0;
    v75 = v15 > 0.0;
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v80 - (float)(v16 + v15))) & v24);
    v32 = v25 < v31;
    left = a3->left;
    v34 = !v32;
    v35 = a3->left + v71;
    v76 = v16 > 0.0;
    if ( v29 )
      right = v35;
    else
      right = right - v14;
    v36 = v83 + v15;
    if ( v32 )
      v37 = bottom - v16;
    else
      v37 = v83 + v15;
    if ( v71 <= 0.0 )
    {
      if ( v29 )
      {
LABEL_33:
        if ( v30 || !v29 )
        {
          v43 = a5->right;
          v44 = right;
          v71 = right;
          v72 = v43 - (float)(v20 + v9);
          v73 = v43 - (float)(v20 - v9);
          v45 = CoordMap::AddEntry(v17, v18, (__int64)v18, (__int64)&v71, 2);
          v39 = v45;
          if ( v45 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v45, 0x1AAu, 0LL);
            return v39;
          }
          v46 = v81;
          if ( v30 )
          {
            v47 = a5->right;
            v71 = a3->right;
            v72 = v47;
            v73 = v47;
            v48 = CoordMap::AddEntry(v17, v81, (__int64)v18, (__int64)&v71, 0);
            v39 = v48;
            if ( v48 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v48, 0x1AFu, 0LL);
              return v39;
            }
          }
        }
        else
        {
          v44 = right;
          v46 = v81;
        }
        v49 = v75;
        v50 = v46 + 23;
        if ( v75 )
        {
          v51 = a5->top;
          v71 = a3->top;
          v72 = v51;
          v73 = v51;
          v52 = CoordMap::AddEntry(v17, v50, (__int64)v18, (__int64)&v71, 0);
          v39 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v52, 0x1B4u, 0LL);
            return v39;
          }
          if ( v49 )
            goto LABEL_40;
        }
        if ( !v34 )
        {
LABEL_40:
          v71 = v36;
          v53 = (float)(v21 - v9) + a5->top;
          v54 = (float)(v21 + v9) + a5->top;
          v72 = v53;
          v73 = v54;
          v55 = CoordMap::AddEntry(v17, v50, (__int64)v18, (__int64)&v71, 2);
          v39 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v55, 0x1BBu, 0LL);
            return v39;
          }
        }
        v56 = v76;
        if ( v76 || !v34 )
        {
          v57 = a5->bottom;
          v71 = v37;
          v72 = v57 - (float)(v22 + v9);
          v73 = v57 - (float)(v22 - v9);
          v58 = CoordMap::AddEntry(v17, v50, (__int64)v18, (__int64)&v71, 2);
          v39 = v58;
          if ( v58 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v58, 0x1C2u, 0LL);
            return v39;
          }
          if ( v56 )
          {
            v60 = a5->bottom;
            v71 = a3->bottom;
            v72 = v60;
            v73 = v60;
            v61 = CoordMap::AddEntry(v59, v50, (__int64)v18, (__int64)&v71, 0);
            v39 = v61;
            if ( v61 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x1C7u, 0LL);
              return v39;
            }
          }
        }
        if ( v23 )
        {
          *(_QWORD *)&v78 = __PAIR64__(LODWORD(v36), LODWORD(v35));
          *((_QWORD *)&v78 + 1) = __PAIR64__(LODWORD(v37), LODWORD(v44));
          v66 = v78;
          *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                       (void **)v81 + 46,
                       (v81[47] - v81[46]) >> 4,
                       (__int64)v18) = v66;
        }
        return 0;
      }
    }
    else
    {
      v72 = a5->left;
      v73 = v72;
      v71 = left;
      v38 = CoordMap::AddEntry(v17, v18, (__int64)v18, (__int64)&v71, 0);
      v39 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v38, 0x19Cu, 0LL);
        return v39;
      }
      v18 = v81;
    }
    v71 = v35;
    v40 = (float)(v19 - v9) + a5->left;
    v41 = (float)(v19 + v9) + a5->left;
    v72 = v40;
    v73 = v41;
    v42 = CoordMap::AddEntry(v17, v18, (__int64)v18, (__int64)&v71, 2);
    v39 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v42, 0x1A3u, 0LL);
      return v39;
    }
    v18 = v81;
    goto LABEL_33;
  }
  return 0;
}
