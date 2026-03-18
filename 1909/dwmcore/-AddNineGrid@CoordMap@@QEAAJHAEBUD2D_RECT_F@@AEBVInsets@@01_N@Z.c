/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800EF774
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000F050 (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18000EE98 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000FCEC (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002F070 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x18002FBE8 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CoordMap::AddNineGrid(
        CoordMap *this,
        __int64 a2,
        const struct D2D_RECT_F *a3,
        const struct Insets *a4,
        const struct D2D_RECT_F *a5,
        const struct Insets *a6,
        bool a7)
{
  float bottom; // xmm0_4
  float top; // xmm2_4
  float v9; // xmm13_4
  float v10; // xmm1_4
  float v11; // xmm15_4
  float v12; // xmm14_4
  float v13; // xmm10_4
  float v14; // xmm11_4
  float v15; // xmm12_4
  __int64 v16; // rcx
  __int64 *v17; // r8
  float *v18; // r10
  float v19; // xmm9_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm5_4
  bool v23; // r15
  __int64 v24; // xmm4_8
  float v25; // xmm2_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm2_4
  float v29; // xmm2_4
  float v30; // xmm13_4
  float v31; // xmm1_4
  float v32; // xmm2_4
  float v33; // xmm2_4
  float v34; // xmm15_4
  bool v35; // al
  float v36; // xmm1_4
  bool v37; // cf
  bool v38; // di
  bool v39; // r12
  float v40; // xmm1_4
  float v41; // xmm0_4
  bool v42; // r14
  float v43; // xmm6_4
  float v44; // xmm14_4
  float v45; // xmm10_4
  float v46; // xmm7_4
  signed int v47; // eax
  unsigned int v48; // ebx
  float v49; // xmm9_4
  signed int v50; // eax
  float v51; // xmm0_4
  signed int v52; // eax
  __int64 *v53; // rdi
  bool v54; // zf
  const struct D2D_RECT_F *v55; // r12
  float v56; // xmm1_4
  signed int v57; // eax
  __int64 *v58; // rdi
  float v59; // xmm1_4
  signed int v60; // eax
  float v61; // xmm8_4
  signed int v62; // eax
  bool v63; // r12
  float v64; // xmm0_4
  signed int v65; // eax
  __int64 v66; // rcx
  signed int v67; // eax
  __int64 v68; // rcx
  __int128 v69; // xmm6
  float v71; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v73; // [rsp+40h] [rbp-C8h]
  float v74; // [rsp+44h] [rbp-C4h]
  bool v75; // [rsp+48h] [rbp-C0h]
  __int128 v76; // [rsp+50h] [rbp-B8h] BYREF
  float v77; // [rsp+60h] [rbp-A8h]
  float v78; // [rsp+64h] [rbp-A4h]
  __int64 *v79; // [rsp+68h] [rbp-A0h]
  const struct D2D_RECT_F *v80; // [rsp+70h] [rbp-98h]
  float right; // [rsp+78h] [rbp-90h]
  float v82; // [rsp+7Ch] [rbp-8Ch]
  float v83; // [rsp+80h] [rbp-88h]

  bottom = a3->bottom;
  top = a3->top;
  v9 = a5->right - a5->left;
  right = a3->right;
  v10 = right - a3->left;
  v83 = bottom;
  v11 = a5->bottom - a5->top;
  v82 = top;
  v80 = a3;
  v79 = (__int64 *)this;
  v77 = v10;
  v78 = bottom - top;
  Insets::Clamp((float *)&v76, (float *)a4, v10, bottom - top);
  v12 = *(float *)&v76;
  if ( *(float *)&v76 < 0.0000011920929 )
  {
    v12 = 0.0;
    LODWORD(v76) = 0;
  }
  v13 = *((float *)&v76 + 2);
  if ( *((float *)&v76 + 2) < 0.0000011920929 )
  {
    v13 = 0.0;
    DWORD2(v76) = 0;
  }
  v14 = *((float *)&v76 + 1);
  if ( *((float *)&v76 + 1) < 0.0000011920929 )
  {
    v14 = 0.0;
    DWORD1(v76) = 0;
  }
  v15 = *((float *)&v76 + 3);
  if ( *((float *)&v76 + 3) < 0.0000011920929 )
  {
    v15 = 0.0;
    HIDWORD(v76) = 0;
  }
  Insets::Clamp(&v71, (float *)a6, v9, v11);
  v19 = v71;
  if ( v71 < 0.0000011920929 )
  {
    v19 = 0.0;
    v71 = 0.0;
  }
  v20 = v73;
  if ( v73 < 0.0000011920929 )
  {
    v20 = 0.0;
    v73 = 0.0;
  }
  v21 = left;
  if ( left < 0.0000011920929 )
  {
    v21 = 0.0;
    left = 0.0;
  }
  v22 = v74;
  if ( v74 < 0.0000011920929 )
  {
    v22 = 0.0;
    v74 = 0.0;
  }
  v23 = a7;
  v24 = _xmm;
  if ( !a7 )
    goto LABEL_22;
  v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v77 - (float)(v13 + v12))) & _xmm);
  if ( v25 <= 0.0000011920929
    || (v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v78 - (float)(v15 + v14))) & _xmm), v26 <= 0.0000011920929) )
  {
    v23 = 0;
  }
  if ( v23 )
  {
    v30 = v73;
    v34 = v74;
  }
  else
  {
LABEL_22:
    v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v9 - v19) - v20)
                                                    - (float)((float)(v77 - v12) - v13))) & _xmm);
    if ( v27 > 0.0000011920929 )
      goto LABEL_27;
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v12)) & _xmm);
    if ( v28 <= 0.0000011920929 )
    {
      v12 = 0.0;
      v19 = 0.0;
      LODWORD(v76) = 0;
      v71 = 0.0;
    }
    v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v13)) & _xmm);
    if ( v29 > 0.0000011920929 )
    {
LABEL_27:
      v30 = v73;
    }
    else
    {
      v13 = 0.0;
      v30 = 0.0;
      DWORD2(v76) = 0;
      v73 = 0.0;
    }
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v11 - v21) - v22)
                                                    - (float)((float)(v78 - v14) - v15))) & _xmm);
    if ( v31 > 0.0000011920929 )
      goto LABEL_33;
    v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v14)) & _xmm);
    if ( v32 <= 0.0000011920929 )
    {
      v14 = 0.0;
      v21 = 0.0;
      DWORD1(v76) = 0;
      left = 0.0;
    }
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v15)) & _xmm);
    if ( v33 > 0.0000011920929 )
    {
LABEL_33:
      v34 = v74;
    }
    else
    {
      v15 = 0.0;
      v34 = 0.0;
      HIDWORD(v76) = 0;
      v74 = 0.0;
    }
    if ( !v23 && Insets::IsEmpty((const struct Insets *)&v76) && Insets::IsEmpty((const struct Insets *)&v71) )
      return 0;
  }
  v35 = v12 > 0.0;
  v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v77 - (float)(v13 + v12))) & v24);
  v37 = v36 > 0.0000011920929;
  v38 = v36 <= 0.0000011920929;
  v39 = v13 > 0.0;
  v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v78 - (float)(v15 + v14))) & v24);
  v41 = *v18;
  v42 = v40 <= 0.0000011920929;
  v43 = *v18 + v12;
  v75 = v15 > 0.0;
  if ( v37 )
    v44 = right - v13;
  else
    v44 = v43;
  v45 = v82 + v14;
  if ( v40 <= 0.0000011920929 )
    v46 = v82 + v14;
  else
    v46 = v83 - v15;
  if ( !v35 )
  {
    if ( v38 )
      goto LABEL_54;
    goto LABEL_51;
  }
  v71 = v41;
  left = a5->left;
  v73 = left;
  v47 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v71, 0);
  v48 = v47;
  if ( v47 >= 0 )
  {
    v17 = v79;
LABEL_51:
    v49 = v19 + a5->left;
    v71 = v43;
    left = v49;
    v73 = v49;
    v50 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v71, 2);
    v48 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v50, 0x163u, 0LL);
      return v48;
    }
    v17 = v79;
LABEL_54:
    if ( !v39 && v38 )
    {
      v53 = v79;
      v55 = v80;
    }
    else
    {
      v51 = a5->right - v30;
      v71 = v44;
      left = v51;
      v73 = v51;
      v52 = CoordMap::AddEntry(v16, v17, (__int64)v17, (__int64)&v71, 2);
      v48 = v52;
      if ( v52 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v52, 0x16Au, 0LL);
        return v48;
      }
      v53 = v79;
      v54 = !v39;
      v55 = v80;
      if ( !v54 )
      {
        v56 = a5->right;
        v71 = v80->right;
        left = v56;
        v73 = v56;
        v57 = CoordMap::AddEntry(v16, v79, (__int64)v17, (__int64)&v71, 0);
        v48 = v57;
        if ( v57 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v57, 0x16Fu, 0LL);
          return v48;
        }
      }
    }
    v58 = v53 + 23;
    if ( v14 <= 0.0 )
    {
      if ( v42 )
        goto LABEL_67;
    }
    else
    {
      v59 = a5->top;
      v71 = v55->top;
      left = v59;
      v73 = v59;
      v60 = CoordMap::AddEntry(v16, v58, (__int64)v17, (__int64)&v71, 0);
      v48 = v60;
      if ( v60 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v60, 0x174u, 0LL);
        return v48;
      }
    }
    v61 = v21 + a5->top;
    v71 = v45;
    left = v61;
    v73 = v61;
    v62 = CoordMap::AddEntry(v16, v58, (__int64)v17, (__int64)&v71, 2);
    v48 = v62;
    if ( v62 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v62, 0x17Bu, 0LL);
      return v48;
    }
LABEL_67:
    v63 = v75;
    if ( v75 || !v42 )
    {
      v64 = a5->bottom - v34;
      v71 = v46;
      left = v64;
      v73 = v64;
      v65 = CoordMap::AddEntry(v16, v58, (__int64)v17, (__int64)&v71, 2);
      v48 = v65;
      if ( v65 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v66, 0LL, 0, v65, 0x182u, 0LL);
        return v48;
      }
      if ( v63 )
      {
        left = a5->bottom;
        v73 = left;
        v71 = v80->bottom;
        v67 = CoordMap::AddEntry(v66, v58, (__int64)v17, (__int64)&v71, 0);
        v48 = v67;
        if ( v67 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v68, 0LL, 0, v67, 0x187u, 0LL);
          return v48;
        }
      }
    }
    if ( v23 )
    {
      *(_QWORD *)&v76 = __PAIR64__(LODWORD(v45), LODWORD(v43));
      *((_QWORD *)&v76 + 1) = __PAIR64__(LODWORD(v46), LODWORD(v44));
      v69 = v76;
      *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                   (void **)v79 + 46,
                   (v79[47] - v79[46]) >> 4,
                   (__int64)v17) = v69;
    }
    return 0;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v47, 0x15Cu, 0LL);
  return v48;
}
