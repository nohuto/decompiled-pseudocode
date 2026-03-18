/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x18009B720
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180013890 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180075D50 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800787A8 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x18009A820 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x1800BF3E8 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_1800BF3E8.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800BF870 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801B0EB4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801ECFC4 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801F1060 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020E7C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180213308 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180216030 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180253C38 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180018E34 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x180052E00 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x1800535C0 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800690F0 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x18009AE40 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800AD2BC (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800B7F40 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C2ED4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800CC0E0 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     memset_0 @ 0x1800E7E5E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800E7EEE (_invalid_parameter_noinfo.c)
 *     sqrtf_0 @ 0x1800EC51B (sqrtf_0.c)
 *     memcpy_0 @ 0x1800EC54B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x1801B18DC (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  __int64 v6; // rbx
  __int64 v7; // r15
  void ***v8; // rax
  void ***v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // r10
  __int64 v12; // rax
  __int64 v13; // r10
  signed int v14; // r14d
  int v15; // eax
  int v16; // r8d
  __int64 v17; // r8
  int v18; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  BOOL v24; // ebx
  __int64 v25; // rbx
  size_t v26; // rbx
  unsigned int v27; // r14d
  bool v28; // zf
  __int64 v29; // rcx
  int v30; // edi
  __int64 v31; // rbx
  signed int v32; // eax
  __int64 v33; // rcx
  signed int BuiltHWPrimitiveEntry; // eax
  __int64 v35; // rcx
  __int64 v36; // rcx
  signed int DrawListPrimitive; // eax
  __int64 v39; // rcx
  __int64 *TreeDataListHead; // rax
  __int64 v41; // r11
  __int64 v42; // rdx
  __int64 v43; // r15
  unsigned int v44; // ecx
  __int64 v45; // r12
  _QWORD *v46; // rax
  signed int v47; // eax
  __int64 v48; // rcx
  signed int v49; // eax
  __int64 v50; // rcx
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  int v53; // eax
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v57; // r10
  int v58; // eax
  __int64 v59; // rcx
  CBrushDrawListGenerator *v60; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v61; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v63)(_QWORD, __int64); // [rsp+50h] [rbp-B8h] BYREF
  char v64; // [rsp+58h] [rbp-B0h]
  int v65; // [rsp+60h] [rbp-A8h]
  __int64 v66; // [rsp+68h] [rbp-A0h]
  _QWORD v67[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v68; // [rsp+98h] [rbp-70h]
  struct CDrawListEntryBuilder *v69; // [rsp+A0h] [rbp-68h]
  void ***v70; // [rsp+A8h] [rbp-60h]
  int v71; // [rsp+B0h] [rbp-58h]
  __int128 v72; // [rsp+B4h] [rbp-54h]
  __int128 v73; // [rsp+C4h] [rbp-44h]
  int v74; // [rsp+D4h] [rbp-34h]
  __int128 v75; // [rsp+D8h] [rbp-30h]
  __int128 v76; // [rsp+E8h] [rbp-20h]
  int v77; // [rsp+F8h] [rbp-10h]
  BOOL v78; // [rsp+FCh] [rbp-Ch]
  float v79; // [rsp+100h] [rbp-8h]
  float v80; // [rsp+104h] [rbp-4h]
  char v81; // [rsp+108h] [rbp+0h]
  _WORD v82[7]; // [rsp+109h] [rbp+1h] BYREF
  __int128 v83; // [rsp+118h] [rbp+10h] BYREF
  __int128 v84; // [rsp+128h] [rbp+20h]
  __int128 v85; // [rsp+138h] [rbp+30h]
  __int128 v86; // [rsp+148h] [rbp+40h]
  int v87; // [rsp+158h] [rbp+50h]
  __int64 v88; // [rsp+1B8h] [rbp+B0h]
  void **v89; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v90; // [rsp+1C8h] [rbp+C0h]

  v6 = *(_QWORD *)this;
  v89 = &CCommonRenderingEffectFactory::`vftable';
  v7 = 0LL;
  v60 = this;
  v8 = &v89;
  v9 = (void ***)*((_QWORD *)a2 + 1);
  v61 = 0LL;
  v62 = 0LL;
  if ( v9 )
    v8 = v9;
  v63 = 0LL;
  v70 = v8;
  v81 = *((_BYTE *)a2 + 92);
  v64 = 0;
  LOBYTE(v65) = 0;
  LODWORD(v66) = 0;
  v68 = 0LL;
  v71 = 0;
  memset(v82, 0, 3);
  v69 = a3;
  v10 = 10LL * (unsigned int)(*(_DWORD *)(v6 + 1032) - 1);
  if ( !*(_BYTE *)(*(_QWORD *)(v6 + 1008) + 80LL * (unsigned int)(*(_DWORD *)(v6 + 1032) - 1) + 76) )
  {
LABEL_12:
    v14 = 0;
    goto LABEL_13;
  }
  v10 = 0LL;
  if ( *(_BYTE *)(v6 + 6048) )
  {
    if ( *(_BYTE *)(v6 + 6049) )
      v10 = *(_QWORD *)(v6 + 3336);
    else
      v10 = *(_QWORD *)(*(_QWORD *)(v6 + 6056) + 24LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 6056) + 32LL) )
  {
    v11 = v10 + 328;
  }
  else
  {
    TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v10);
    if ( TreeDataListHead )
    {
      v10 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
      {
        while ( *(_QWORD *)(v10 + 32) != v41 )
        {
          v10 = *(_QWORD *)v10;
          if ( (__int64 *)v10 == TreeDataListHead )
            goto LABEL_9;
        }
        v11 = v10 - 224;
      }
    }
  }
LABEL_9:
  v12 = *(_QWORD *)(v11 + 152);
  v13 = 0LL;
  v90 = v12;
  v14 = 0;
  v15 = *(_DWORD *)(v6 + 1032);
  if ( !v15 )
    goto LABEL_11;
  v16 = *(_DWORD *)(*(_QWORD *)(v6 + 1008) + 80LL * (unsigned int)(v15 - 1) + 4);
  if ( !v16 )
    goto LABEL_11;
  v42 = *(_QWORD *)(v6 + 1840);
  v43 = v42;
  if ( *(_QWORD *)(136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1) + v42 + 88)
    || (v44 = *(_DWORD *)(v6 + 1864) - v16, LODWORD(v88) = v44, v44 >= *(_DWORD *)(v6 + 1864)) )
  {
LABEL_54:
    v10 = 136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1);
    v7 = *(_QWORD *)(v10 + v43 + 88);
    goto LABEL_55;
  }
  while ( 1 )
  {
    v45 = 136LL * v44;
    v46 = (_QWORD *)(v42 + v45);
    if ( !*(_QWORD *)(v42 + v45 + 88) )
      break;
LABEL_68:
    v43 = *(_QWORD *)(v6 + 1840);
    ++v44;
    v42 = v43;
    LODWORD(v88) = v44;
    v13 = *(_QWORD *)(v43 + v45 + 88);
    if ( v44 >= *(_DWORD *)(v6 + 1864) )
      goto LABEL_54;
  }
  if ( v13 )
  {
    v49 = CShape::Combine(v13, v42, *v46, v46 + 2, 1, v42 + v45 + 88);
    v14 = v49;
    if ( v49 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v50, 0LL, 0, v49, 0xD8u, 0LL);
      goto LABEL_77;
    }
    goto LABEL_67;
  }
  v47 = CShapePtr::CopyShape((CShapePtr *)v46, (const struct CMILMatrix *)(v46 + 2), (struct CShape **)(v42 + v45 + 88));
  v14 = v47;
  if ( v47 >= 0 )
  {
LABEL_67:
    v44 = v88;
    goto LABEL_68;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v48, 0LL, 0, v47, 0xCCu, 0LL);
LABEL_77:
  v7 = v88;
LABEL_55:
  if ( v14 >= 0 )
  {
LABEL_11:
    v62 = v90;
    v63 = 0LL;
    v64 = 0;
    LOBYTE(v65) = 0;
    v61 = v7;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v14, 0x33Fu, 0LL);
  v7 = v61;
LABEL_13:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v14, 0x100u, 0LL);
    goto LABEL_43;
  }
  v17 = *(_QWORD *)this;
  v87 = 0;
  v18 = *(_DWORD *)(v17 + 480);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v17 + 496);
    v21 = *(_OWORD *)(68 * v19 + v20 + 16);
    v83 = *(_OWORD *)(68 * v19 + v20);
    v22 = *(_OWORD *)(68 * v19 + v20 + 32);
    v84 = v21;
    v23 = *(_OWORD *)(68 * v19 + v20 + 48);
    LODWORD(v20) = *(_DWORD *)(68 * v19 + v20 + 64);
    v85 = v22;
    v86 = v23;
    v87 = v20;
  }
  else
  {
    v83 = _xmm;
    v84 = _xmm;
    v85 = _xmm;
    v86 = _xmm;
    LOWORD(v87) = 32085;
  }
  if ( *((_BYTE *)a2 + 94) )
    v24 = 1;
  else
    v24 = *(_DWORD *)(v17 + 252) != 0;
  v78 = v24;
  v79 = sqrtf_0((float)(*(float *)&v83 * *(float *)&v83) + (float)(*((float *)&v83 + 1) * *((float *)&v83 + 1)));
  v80 = sqrtf_0((float)(*(float *)&v84 * *(float *)&v84) + (float)(*((float *)&v84 + 1) * *((float *)&v84 + 1)));
  if ( v7 && !v24 )
  {
    if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v61)
      && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v83) )
    {
      *(_WORD *)((char *)v82 + 1) = 256;
    }
    else
    {
      *(_WORD *)((char *)v82 + 1) = 1;
    }
  }
  v25 = *((unsigned int *)this + 18);
  LODWORD(v68) = v25;
  HIDWORD(v68) = v25;
  v26 = 8 * v25;
  if ( v26 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v26 <= 0x28 )
    {
      memcpy_0(v67, (char *)this + 40, v26);
      goto LABEL_23;
    }
    memset_0(v67, 0, sizeof(v67));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno() = 22;
      goto LABEL_85;
    }
    if ( v26 > 0x28 )
    {
      *(_DWORD *)_o__errno() = 34;
LABEL_85:
      invalid_parameter_noinfo();
    }
  }
LABEL_23:
  if ( *(_QWORD *)a2 )
  {
    v67[(unsigned int)v68] = *(_QWORD *)a2;
    LODWORD(v68) = v68 + 1;
  }
  v71 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v68)) - 1);
  if ( v71 )
  {
    v51 = *(_OWORD *)((char *)a2 + 20);
    v52 = *(_OWORD *)((char *)a2 + 36);
    v74 = *((_DWORD *)a2 + 13);
    v53 = *((_DWORD *)a2 + 22);
    v72 = v51;
    v77 = v53;
    v54 = *(_OWORD *)((char *)a2 + 56);
    v73 = v52;
    v55 = *(_OWORD *)((char *)a2 + 72);
    v75 = v54;
    v76 = v55;
  }
  if ( *((_BYTE *)a2 + 93) )
    goto LABEL_29;
  if ( !*(_BYTE *)(*(_QWORD *)this + 6353LL) )
    goto LABEL_29;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 480LL));
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference)
    || !*(_DWORD *)(v57 + 768) && *(_DWORD *)(v57 + 696) )
  {
    goto LABEL_29;
  }
  if ( *(_QWORD *)(v57 + 3512) )
    goto LABEL_29;
  LOBYTE(v82[0]) = 1;
  if ( ((unsigned int (__fastcall *)(void ***))(*v70)[1])(v70) != 1 )
    goto LABEL_29;
  if ( (v61 || v63) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v61) )
    goto LABEL_29;
  if ( *(_DWORD *)(*(_QWORD *)this + 256LL) == 4 )
    goto LABEL_29;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v58 = *(_DWORD *)(*(_QWORD *)this + 248LL);
    if ( v58 >= 1 )
    {
      switch ( v58 )
      {
        case 4:
        case 6:
          goto LABEL_29;
        default:
          break;
      }
    }
  }
  if ( CBrushDrawListGenerator::IsColorConversionRequired(this) || v71 )
  {
LABEL_29:
    LOBYTE(v82[0]) = 0;
  }
  else if ( LOBYTE(v82[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v63);
    LOBYTE(v65) = 0;
    v61 = 0LL;
    v62 = 0LL;
  }
  v27 = v66;
  v28 = (_DWORD)v66 == (_DWORD)v68;
  if ( (unsigned int)v66 < (unsigned int)v68 )
  {
    do
    {
      v29 = v67[v27];
      if ( v29 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v29 + 8LL))(v29, 3LL) )
        break;
      ++v27;
    }
    while ( v27 < (unsigned int)v68 );
    v28 = v27 == (_DWORD)v68;
  }
  if ( v28 )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                          v60,
                          (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v60);
    v14 = DrawListPrimitive;
    if ( DrawListPrimitive >= 0 )
      goto LABEL_36;
    MilInstrumentationCheckHR_MaybeFailFast(v39, 0LL, 0, DrawListPrimitive, 0x1A2u, 0LL);
    goto LABEL_103;
  }
  v30 = v66;
  v31 = v67[v27];
  LODWORD(v66) = v27;
  v32 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64, __int64), CBrushDrawListGenerator **))(*(_QWORD *)v31 + 32LL))(
          v31,
          lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_,
          &v60);
  v67[v27] = v31;
  v14 = v32;
  LODWORD(v66) = v30;
  if ( v32 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v33, 0LL, 0, v32, 0x1E1u, 0LL);
LABEL_103:
    MilInstrumentationCheckHR_MaybeFailFast(v59, 0LL, 0, v14, 0x173u, 0LL);
    goto LABEL_43;
  }
LABEL_36:
  v14 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0LL, 0LL, 0LL);
    v14 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v35, 0LL, 0, BuiltHWPrimitiveEntry, 0x1A7u, 0LL);
    v36 = *((_QWORD *)a3 + 4);
    if ( v36 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v36 + 8LL))(v36);
    }
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, v14, 0x178u, 0LL);
  }
LABEL_43:
  if ( v64 && v63 )
    (**v63)(v63, 1LL);
  return (unsigned int)v14;
}
