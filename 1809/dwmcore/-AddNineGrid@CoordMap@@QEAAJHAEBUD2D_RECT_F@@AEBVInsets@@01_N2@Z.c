/*
 * XREFs of ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x18000D5C8
 * Callers:
 *     ?Initialize@CNineGridDrawListBrush@@AEAAJXZ @ 0x18000D1DC (-Initialize@CNineGridDrawListBrush@@AEAAJXZ.c)
 * Callees:
 *     ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000AEE8 (-reserve_region@-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansio.c)
 *     ?Clamp@Insets@@SA?AV1@AEBV1@MM@Z @ 0x18000DC14 (-Clamp@Insets@@SA-AV1@AEBV1@MM@Z.c)
 *     ?IsEmpty@Insets@@SA_NAEBV1@@Z @ 0x18000E434 (-IsEmpty@Insets@@SA_NAEBV1@@Z.c)
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180013E80 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
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
  float v10; // xmm8_4
  float top; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm15_4
  float v14; // xmm13_4
  float v15; // xmm14_4
  float v16; // xmm12_4
  unsigned int v17; // ecx
  float *v18; // r8
  float v19; // xmm9_4
  float v20; // xmm11_4
  float v21; // xmm7_4
  float v22; // xmm10_4
  bool v23; // al
  __int64 v24; // xmm4_8
  float v25; // xmm5_4
  float v26; // xmm1_4
  float v27; // xmm1_4
  float v28; // xmm1_4
  bool v29; // di
  bool v30; // r12
  float v31; // xmm1_4
  bool v32; // cf
  float v33; // xmm1_4
  bool v34; // r15
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
  float v46; // xmm1_4
  int v47; // eax
  float v48; // xmm1_4
  int v49; // edi
  int v50; // eax
  float v51; // xmm0_4
  float v52; // xmm7_4
  int v53; // eax
  bool v54; // r12
  float bottom; // xmm2_4
  int v56; // edi
  int v57; // eax
  float v58; // xmm1_4
  int v59; // eax
  unsigned int v60; // ecx
  float v62; // xmm2_4
  float v63; // xmm2_4
  __int64 v64; // rdx
  __int128 v65; // xmm6
  float v66; // xmm2_4
  float v67; // xmm2_4
  float v68; // xmm2_4
  float v69; // xmm2_4
  float v70; // [rsp+38h] [rbp-D0h] BYREF
  float left; // [rsp+3Ch] [rbp-CCh]
  float v72; // [rsp+40h] [rbp-C8h]
  float v73; // [rsp+44h] [rbp-C4h]
  bool v74; // [rsp+48h] [rbp-C0h]
  bool v75; // [rsp+49h] [rbp-BFh]
  FLOAT right; // [rsp+4Ch] [rbp-BCh]
  __int128 v77; // [rsp+50h] [rbp-B8h] BYREF
  float v78; // [rsp+60h] [rbp-A8h]
  float v79; // [rsp+64h] [rbp-A4h]
  float v80; // [rsp+68h] [rbp-A0h]
  float v81; // [rsp+6Ch] [rbp-9Ch]
  float v82[42]; // [rsp+70h] [rbp-98h]

  if ( a8 )
    v10 = FLOAT_0_5;
  else
    v10 = 0.0;
  top = a3->top;
  right = a3->right;
  v12 = a5->bottom - a5->top;
  v13 = a5->right - a5->left;
  v82[0] = a3->bottom;
  v81 = top;
  v80 = v12;
  v78 = right;
  v79 = v82[0] - top;
  Insets::Clamp(&v70, a4);
  if ( v70 < 0.00000011920929 )
    v70 = 0.0;
  v14 = v72;
  if ( v72 < 0.00000011920929 )
  {
    v14 = 0.0;
    v72 = 0.0;
  }
  v15 = left;
  if ( left < 0.00000011920929 )
  {
    v15 = 0.0;
    left = 0.0;
  }
  v16 = v73;
  if ( v73 < 0.00000011920929 )
  {
    v16 = 0.0;
    v73 = 0.0;
  }
  Insets::Clamp(&v77, a6);
  v19 = *(float *)&v77;
  if ( v10 > *(float *)&v77 )
  {
    v19 = 0.0;
    LODWORD(v77) = 0;
  }
  v20 = *((float *)&v77 + 2);
  if ( v10 > *((float *)&v77 + 2) )
  {
    v20 = 0.0;
    DWORD2(v77) = 0;
  }
  v21 = *((float *)&v77 + 1);
  if ( v10 > *((float *)&v77 + 1) )
  {
    v21 = 0.0;
    DWORD1(v77) = 0;
  }
  v22 = *((float *)&v77 + 3);
  if ( v10 > *((float *)&v77 + 3) )
  {
    v22 = 0.0;
    HIDWORD(v77) = 0;
  }
  v23 = a7;
  v24 = _xmm;
  v25 = FLOAT_0_0000011920929;
  if ( a7 )
  {
    v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v78 - (float)(v14 + v70))) & _xmm);
    if ( v62 <= 0.0000011920929
      || (v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v79 - (float)(v16 + v15))) & _xmm), v63 <= 0.0000011920929) )
    {
      v23 = 0;
      a7 = 0;
    }
    if ( v23 )
      goto LABEL_24;
  }
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v13 - v19) - v20) - (float)((float)(v78 - v70) - v14))) & _xmm);
  if ( v26 <= 0.0000011920929 )
  {
    v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v19 - v70)) & _xmm);
    if ( v66 <= 0.0000011920929 )
    {
      v19 = 0.0;
      v70 = 0.0;
      LODWORD(v77) = 0;
    }
    v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v14)) & _xmm);
    if ( v67 <= 0.0000011920929 )
    {
      v14 = 0.0;
      v20 = 0.0;
      v72 = 0.0;
      DWORD2(v77) = 0;
    }
  }
  v27 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v80 - v21) - v22) - (float)((float)(v79 - v15) - v16))) & _xmm);
  if ( v27 <= 0.0000011920929 )
  {
    v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v21 - v15)) & _xmm);
    if ( v68 <= 0.0000011920929 )
    {
      v15 = 0.0;
      v21 = 0.0;
      left = 0.0;
      DWORD1(v77) = 0;
    }
    v69 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v22 - v16)) & _xmm);
    if ( v69 <= 0.0000011920929 )
    {
      v16 = 0.0;
      v22 = 0.0;
      v73 = 0.0;
      HIDWORD(v77) = 0;
    }
  }
  if ( v23 || !Insets::IsEmpty((const struct Insets *)&v70) || !Insets::IsEmpty((const struct Insets *)&v77) )
  {
LABEL_24:
    v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v78 - (float)(v14 + v70))) & v24);
    v29 = v25 >= v28;
    v30 = v14 > 0.0;
    v74 = v15 > 0.0;
    v31 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v79 - (float)(v16 + v15))) & v24);
    v32 = v25 < v31;
    v33 = *v18;
    v34 = !v32;
    v35 = *v18 + v70;
    v75 = v16 > 0.0;
    if ( v29 )
      right = v35;
    else
      right = right - v14;
    v36 = v81 + v15;
    if ( v32 )
      v37 = v82[0] - v16;
    else
      v37 = v81 + v15;
    if ( v70 <= 0.0 )
    {
      if ( v29 )
        goto LABEL_31;
    }
    else
    {
      left = a5->left;
      v72 = left;
      v70 = v33;
      v38 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v70, 0);
      v39 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v38, 0x19Cu);
        return v39;
      }
    }
    v70 = v35;
    v40 = (float)(v19 - v10) + a5->left;
    v41 = (float)(v19 + v10) + a5->left;
    left = v40;
    v72 = v41;
    v42 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v70, 2u);
    v39 = v42;
    if ( v42 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v42, 0x1A3u);
      return v39;
    }
LABEL_31:
    if ( v30 || !v29 )
    {
      v43 = a5->right;
      v44 = right;
      v70 = right;
      left = v43 - (float)(v20 + v10);
      v72 = v43 - (float)(v20 - v10);
      v45 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v70, 2u);
      v39 = v45;
      if ( v45 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v45, 0x1AAu);
        return v39;
      }
      if ( v30 )
      {
        v46 = a5->right;
        v70 = a3->right;
        left = v46;
        v72 = v46;
        v47 = CoordMap::AddEntry(v17, (_DWORD)this, (_DWORD)v18, (unsigned int)&v70, 0);
        v39 = v47;
        if ( v47 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v47, 0x1AFu);
          return v39;
        }
      }
    }
    else
    {
      v44 = right;
    }
    if ( v74 )
    {
      v48 = a5->top;
      v49 = (_DWORD)this + 184;
      v70 = a3->top;
      left = v48;
      v72 = v48;
      v50 = CoordMap::AddEntry(v17, (int)this + 184, (_DWORD)v18, (unsigned int)&v70, 0);
      v39 = v50;
      if ( v50 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v50, 0x1B4u);
        return v39;
      }
    }
    else
    {
      if ( v34 )
      {
LABEL_38:
        v54 = v75;
        if ( v75 || !v34 )
        {
          bottom = a5->bottom;
          v56 = (_DWORD)this + 184;
          v70 = v37;
          left = bottom - (float)(v22 + v10);
          v72 = bottom - (float)(v22 - v10);
          v57 = CoordMap::AddEntry(v17, (int)this + 184, (_DWORD)v18, (unsigned int)&v70, 2u);
          v39 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v57, 0x1C2u);
            return v39;
          }
        }
        else
        {
          v56 = (_DWORD)this + 184;
        }
        if ( v54 )
        {
          v58 = a5->bottom;
          v70 = a3->bottom;
          left = v58;
          v72 = v58;
          v59 = CoordMap::AddEntry(v17, v56, (_DWORD)v18, (unsigned int)&v70, 0);
          v39 = v59;
          if ( v59 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x1C7u);
            return v39;
          }
        }
        if ( a7 )
        {
          *(_QWORD *)&v77 = __PAIR64__(LODWORD(v36), LODWORD(v35));
          v64 = (__int64)(*((_QWORD *)this + 47) - *((_QWORD *)this + 46)) >> 4;
          *((_QWORD *)&v77 + 1) = __PAIR64__(LODWORD(v37), LODWORD(v44));
          v65 = v77;
          *(_OWORD *)detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
                       (__int64 *)this + 46,
                       v64,
                       (__int64)v18) = v65;
        }
        return 0;
      }
      v49 = (_DWORD)this + 184;
    }
    v70 = v36;
    v51 = (float)(v21 - v10) + a5->top;
    v52 = (float)(v21 + v10) + a5->top;
    left = v51;
    v72 = v52;
    v53 = CoordMap::AddEntry(v17, v49, (_DWORD)v18, (unsigned int)&v70, 2u);
    v39 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v17, 0LL, 0, v53, 0x1BBu);
      return v39;
    }
    goto LABEL_38;
  }
  return 0;
}
