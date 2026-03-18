/*
 * XREFs of ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180035D18
 * Callers:
 *     ?Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z @ 0x1800997B0 (-Draw@CRenderData@@AEAAJPEAUIDrawingContext@@W4DrawPass@1@@Z.c)
 * Callees:
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800049E4 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ @ 0x18001D28C (-IsRoundedRectangleGeometry@CRectangleGeometry@@QEBA_NXZ.c)
 *     ?GetOpacity@CImageLegacyMilBrush@@QEAAMXZ @ 0x180034860 (-GetOpacity@CImageLegacyMilBrush@@QEAAMXZ.c)
 *     ?ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ @ 0x1800348C4 (-ReducesToFillImage@CImageLegacyMilBrush@@QEBA_NXZ.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180034A0C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x180034A84 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z @ 0x1800362BC (-GetRealizedColor@CSolidColorLegacyMilBrush@@QEBAJPEAU_D3DCOLORVALUE@@@Z.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180036DC0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_180036DC0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18008CDE0 (-GetShapeData@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800A0B14 (-DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800C3EC4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?IsRectangles@CShapePtr@@QEBA_NPEAI@Z @ 0x1800CCEA8 (-IsRectangles@CShapePtr@@QEBA_NPEAI@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180211BF8 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___ @ 0x18021677C (std--vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness--NotNeeded__std--allocator_.c)
 */

__int64 __fastcall CRenderData::TryDrawCommandAsDrawList(
        CRenderData *a1,
        struct CDrawingContext *a2,
        __int64 a3,
        struct CDrawListEntryBuilder *a4,
        bool a5,
        int a6,
        __int64 a7,
        bool *a8)
{
  unsigned int v8; // ebx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r15
  CGeometry *v17; // rdi
  int RealizedColor; // eax
  unsigned int v19; // ecx
  CRenderData *v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdi
  int v24; // eax
  unsigned int v25; // ecx
  __int64 v26; // rdi
  struct CDrawListEntryBuilder *v27; // rcx
  int v28; // eax
  unsigned int v29; // ecx
  struct D2D_RECT_F *v30; // r14
  struct D2D_RECT_F *v31; // rdi
  struct CDrawListEntryBuilder *v32; // r15
  __int64 v33; // rax
  int v34; // eax
  __int64 v35; // rdi
  struct CDrawListEntryBuilder *v36; // rcx
  int v37; // eax
  unsigned int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdi
  bool v42; // zf
  struct _D3DCOLORVALUE v43; // xmm0
  int v44; // eax
  unsigned int v45; // ecx
  CGeometry *v46; // rcx
  __int64 v47; // r8
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  struct _D3DCOLORVALUE *v51; // rbx
  float Opacity; // xmm0_4
  int v53; // eax
  unsigned int v54; // ecx
  int v55; // eax
  unsigned int v56; // ecx
  int v57; // eax
  unsigned int v58; // ecx
  int v59; // eax
  unsigned int v60; // ecx
  int v61; // eax
  unsigned int v62; // ecx
  CGeometry *v63; // rcx
  int BoundsSafe; // eax
  CRenderData *v65; // rcx
  int v66; // eax
  unsigned int v67; // ecx
  int ShapeData; // eax
  unsigned int v69; // ecx
  CRenderData *v70; // rcx
  _OWORD *v71; // rdi
  _OWORD *v72; // r14
  struct CDrawListEntryBuilder *v73; // r15
  int v74; // eax
  struct CImageSource *v75; // [rsp+50h] [rbp-59h] BYREF
  __int128 v76; // [rsp+58h] [rbp-51h] BYREF
  __int64 v77; // [rsp+68h] [rbp-41h]
  struct D2D_RECT_F v78; // [rsp+70h] [rbp-39h] BYREF
  struct CDrawListEntryBuilder *v79[2]; // [rsp+80h] [rbp-29h] BYREF
  struct _D3DCOLORVALUE v80; // [rsp+90h] [rbp-19h] BYREF

  v8 = 0;
  v79[0] = a4;
  *a8 = 0;
  switch ( a6 )
  {
    case 534:
      v21 = *(unsigned int *)(*(_QWORD *)(a7 + 8) + 4LL);
      v22 = *((_QWORD *)a1 + 15);
      v23 = *(_QWORD *)(v22 + 8 * v21);
      if ( v23
        && (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v23 + 48LL))(
             *(_QWORD *)(v22 + 8 * v21),
             82LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v24 = CRenderData::DrawImageResource_FillMode(
                  a1,
                  a2,
                  a4,
                  a5,
                  (struct CImageSource *)(v23 - 16),
                  0LL,
                  0LL,
                  1.0,
                  0LL);
          v8 = v24;
          if ( v24 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v25, 0LL, 0, v24, 0x25Cu, 0LL);
            return v8;
          }
        }
        goto LABEL_14;
      }
      return v8;
    case 535:
      v14 = *(_QWORD *)(a7 + 8);
      v15 = *((_QWORD *)a1 + 15);
      v16 = *(_QWORD *)(v15 + 8LL * *(unsigned int *)(v14 + 4));
      v17 = *(CGeometry **)(v15 + 8LL * *(unsigned int *)(v14 + 8));
      if ( !v16 || !v17 )
        return v8;
      if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 48LL))(v16, 172LL) )
      {
        RealizedColor = CSolidColorLegacyMilBrush::GetRealizedColor((CSolidColorLegacyMilBrush *)v16, &v80);
        v8 = RealizedColor;
        if ( RealizedColor < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v19, 0LL, 0, RealizedColor, 0x270u, 0LL);
          return v8;
        }
        if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 140LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v30 = (struct D2D_RECT_F *)*((_QWORD *)v17 + 17);
            v31 = (struct D2D_RECT_F *)*((_QWORD *)v17 + 18);
            if ( v30 != v31 )
            {
              v32 = v79[0];
              while ( 1 )
              {
                v33 = 0LL;
                v78 = *v30;
                do
                {
                  *(float *)((char *)v79 + v33) = (float)*(int *)((char *)&v78.left + v33);
                  v33 += 4LL;
                }
                while ( v33 < 16 );
                v34 = CRenderData::DrawSolidColorRectangle(v20, a2, v32, a5, (const struct MilRectF *)v79, &v80);
                v8 = v34;
                if ( v34 < 0 )
                  break;
                if ( ++v30 == v31 )
                  goto LABEL_14;
              }
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v20, 0LL, 0, v34, 0x27Du, 0LL);
              return v8;
            }
          }
        }
        else
        {
          if ( !(*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 136LL) )
          {
            if ( (*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 24LL) )
            {
              *(_QWORD *)&v78.left = 0LL;
              LOBYTE(v78.right) = 0;
              ShapeData = CGeometry::GetShapeData(v17, 0LL, (struct CShapePtr *)&v78);
              v8 = ShapeData;
              if ( ShapeData < 0 )
              {
                MilInstrumentationCheckHR_MaybeFailFast(v69, 0LL, 0, ShapeData, 0x298u, 0LL);
              }
              else if ( CShapePtr::IsRectangles((CShapePtr *)&v78, (unsigned int *)&v75) )
              {
                v77 = 0LL;
                v76 = 0LL;
                std::vector_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded__std::allocator_TMilRect__float_MilRectF_MilPointAndSizeF_RectUniqueness::NotNeeded_____::_Resize__lambda_8a411bb10fc2db609d81f8f80079053a___(
                  &v76,
                  (unsigned int)v75);
                if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)&v78.left + 48LL))(
                       *(_QWORD *)&v78.left,
                       v76,
                       (unsigned int)v75) )
                {
                  v71 = (_OWORD *)v76;
                  if ( !*(_QWORD *)(a3 + 24) )
                  {
                    v72 = (_OWORD *)*((_QWORD *)&v76 + 1);
                    if ( (_QWORD)v76 != *((_QWORD *)&v76 + 1) )
                    {
                      v73 = v79[0];
                      do
                      {
                        *(_OWORD *)v79 = *v71;
                        v74 = CRenderData::DrawSolidColorRectangle(v70, a2, v73, a5, (const struct MilRectF *)v79, &v80);
                        v8 = v74;
                        if ( v74 < 0 )
                        {
                          MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v70, 0LL, 0, v74, 0x2AAu, 0LL);
                          goto LABEL_84;
                        }
                        ++v71;
                      }
                      while ( v71 != v72 );
                      v71 = (_OWORD *)v76;
                    }
                  }
                  *a8 = 1;
                  if ( v71 )
                    std::_Deallocate<16,0>(v71, (v77 - (_QWORD)v71) & 0xFFFFFFFFFFFFFFF0uLL);
                }
                else
                {
                  v8 = -2147418113;
                  MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v70, 0LL, 0, -2147418113, 0x2A2u, 0LL);
LABEL_84:
                  if ( (_QWORD)v76 )
                  {
                    std::_Deallocate<16,0>(v76, (v77 - v76) & 0xFFFFFFFFFFFFFFF0uLL);
                    v77 = 0LL;
                    v76 = 0LL;
                  }
                }
              }
              CShapePtr::Release((CShapePtr *)&v78);
            }
            return v8;
          }
          if ( CRectangleGeometry::IsRoundedRectangleGeometry(v17) )
            return v8;
          if ( !*(_QWORD *)(a3 + 24) )
          {
            BoundsSafe = CGeometry::GetBoundsSafe(v63, 0LL, &v78);
            v8 = BoundsSafe;
            if ( BoundsSafe < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast((unsigned int)v65, 0LL, 0, BoundsSafe, 0x28Bu, 0LL);
              return v8;
            }
            v66 = CRenderData::DrawSolidColorRectangle(v65, a2, v79[0], a5, (const struct MilRectF *)&v78, &v80);
            v8 = v66;
            if ( v66 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v67, 0LL, 0, v66, 0x28Du, 0LL);
              return v8;
            }
          }
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v16 + 48LL))(v16, 81LL) )
          return v8;
        if ( !(*(unsigned __int8 (__fastcall **)(CGeometry *, __int64))(*(_QWORD *)v17 + 48LL))(v17, 136LL) )
          return v8;
        v75 = *(struct CImageSource **)(v16 + 240);
        if ( CRectangleGeometry::IsRoundedRectangleGeometry(v17) )
          return v8;
        if ( !*(_QWORD *)(a3 + 24) && v47 )
        {
          v48 = CGeometry::GetBoundsSafe(v46, 0LL, &v78);
          v8 = v48;
          if ( v48 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0x2BDu, 0LL);
            return v8;
          }
          v50 = *(_DWORD *)(v16 + 208);
          v51 = 0LL;
          *(struct _D3DCOLORVALUE *)&v80.r = (struct _D3DCOLORVALUE)v78;
          if ( !v50 || v50 == 2 )
            v51 = &v80;
          Opacity = CImageLegacyMilBrush::GetOpacity((CImageLegacyMilBrush *)v16);
          v53 = CRenderData::DrawImageResource_FillMode(
                  a1,
                  a2,
                  v79[0],
                  a5,
                  v75,
                  (const struct D2D_RECT_F *)v51,
                  (const struct D2D_RECT_F *)&v80,
                  Opacity,
                  0LL);
          v8 = v53;
          if ( v53 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v54, 0LL, 0, v53, 0x2D8u, 0LL);
            return v8;
          }
        }
      }
      goto LABEL_14;
    case 537:
      v26 = *(_QWORD *)(a7 + 8);
      v27 = *(struct CDrawListEntryBuilder **)(*((_QWORD *)a1 + 15) + 8LL * *(unsigned int *)(v26 + 4));
      v79[0] = v27;
      if ( v27
        && (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v27 + 48LL))(
             v27,
             82LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v78 = *(struct D2D_RECT_F *)(v26 + 8);
          v28 = CRenderData::DrawImageResource_FillMode(
                  a1,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v79[0] - 16),
                  &v78,
                  1.0);
          v8 = v28;
          if ( v28 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v28, 0x244u, 0LL);
            return v8;
          }
        }
        goto LABEL_14;
      }
      return v8;
    case 539:
      v79[0] = *(struct CDrawListEntryBuilder **)(a7 + 8);
      v39 = *((unsigned int *)v79[0] + 1);
      v40 = *((_QWORD *)a1 + 15);
      v41 = *(_QWORD *)(v40 + 8 * v39);
      if ( !v41 )
        return v8;
      if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v41 + 48LL))(
             *(_QWORD *)(v40 + 8 * v39),
             172LL) )
      {
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v55 = CSolidColorLegacyMilBrush::GetRealizedColor((CSolidColorLegacyMilBrush *)v41, &v80);
          v8 = v55;
          if ( v55 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v56, 0LL, 0, v55, 0x1DFu, 0LL);
            return v8;
          }
          v57 = CRenderData::DrawSolidColorRectangle(
                  (CRenderData *)&v80,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v79[0] + 8),
                  &v80);
          v8 = v57;
          if ( v57 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v58, 0LL, 0, v57, 0x1E1u, 0LL);
            return v8;
          }
        }
      }
      else
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, 95LL) )
        {
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v41 + 48LL))(v41, 81LL) )
            return v8;
          v75 = *(struct CImageSource **)(v41 + 240);
          v42 = v75 == 0LL;
          if ( v75 )
          {
            if ( CImageLegacyMilBrush::ReducesToFillImage((CImageLegacyMilBrush *)v41) )
            {
              if ( !*(_QWORD *)(a3 + 24) )
              {
                *(struct _D3DCOLORVALUE *)&v43.r = *(struct _D3DCOLORVALUE *)((char *)v79[0] + 8);
                v78 = *(struct D2D_RECT_F *)(v41 + 184);
                *(struct _D3DCOLORVALUE *)&v80.r = *(struct _D3DCOLORVALUE *)&v43.r;
                v43.r = CImageLegacyMilBrush::GetOpacity((CImageLegacyMilBrush *)v41);
                v44 = CRenderData::DrawImageResource_FillMode(
                        a1,
                        a2,
                        a4,
                        a5,
                        v75,
                        &v78,
                        (const struct D2D_RECT_F *)&v80,
                        v43.r,
                        0LL);
                v8 = v44;
                if ( v44 < 0 )
                {
                  MilInstrumentationCheckHR_MaybeFailFast(v45, 0LL, 0, v44, 0x1FEu, 0LL);
                  return v8;
                }
              }
              goto LABEL_14;
            }
            v42 = v75 == 0LL;
          }
          *a8 = v42;
          return v8;
        }
        if ( !*(_QWORD *)(a3 + 24) )
        {
          v61 = CLinearGradientLegacyMilBrush::DrawAsDrawList(
                  (CLinearGradientLegacyMilBrush *)v41,
                  a2,
                  a4,
                  a5,
                  (struct CDrawListEntryBuilder *)((char *)v79[0] + 8));
          v8 = v61;
          if ( v61 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v61, 0x1EEu, 0LL);
            return v8;
          }
        }
      }
LABEL_14:
      *a8 = 1;
      return v8;
    case 540:
      if ( !*(_QWORD *)(a3 + 24) )
      {
        v59 = CRenderData::DrawSolidColorRectangle(
                (CRenderData *)(*(_QWORD *)(a7 + 8) + 20LL),
                a2,
                a4,
                a5,
                (const struct MilRectF *)(*(_QWORD *)(a7 + 8) + 4LL),
                (const struct _D3DCOLORVALUE *)(*(_QWORD *)(a7 + 8) + 20LL));
        v8 = v59;
        if ( v59 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v60, 0LL, 0, v59, 0x217u, 0LL);
          return v8;
        }
      }
      goto LABEL_14;
    case 541:
      v35 = *(_QWORD *)(a7 + 8);
      v36 = *(struct CDrawListEntryBuilder **)(*((_QWORD *)a1 + 15) + 8LL * *(unsigned int *)(v35 + 4));
      v79[0] = v36;
      if ( v36 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct CDrawListEntryBuilder *, __int64))(*(_QWORD *)v36 + 48LL))(
               v36,
               82LL) )
        {
          if ( !*(_QWORD *)(a3 + 24) )
          {
            v78 = *(struct D2D_RECT_F *)(v35 + 8);
            v37 = CRenderData::DrawImageResource_TileMode(
                    a1,
                    a2,
                    a4,
                    (struct CDrawListEntryBuilder *)((char *)v79[0] - 16),
                    *(float *)(v35 + 24),
                    v35 + 28,
                    (__int64)&v78);
            v8 = v37;
            if ( v37 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(v38, 0LL, 0, v37, 0x22Du, 0LL);
              return v8;
            }
          }
          goto LABEL_14;
        }
      }
      break;
  }
  return v8;
}
