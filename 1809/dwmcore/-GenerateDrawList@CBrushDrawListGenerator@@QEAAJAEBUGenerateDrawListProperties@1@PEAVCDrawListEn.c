/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x1800B40E0
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012620 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800266A0 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x1800268FC (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x18005BE38 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x18005C00C (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_18005C00C.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800B2580 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18019A570 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x1801C2BD0 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ?GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C5CD0 (-GenerateDrawList@CParticleEmitter@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801C97D0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801DA3E0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x180223A28 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180016534 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18002CDDC (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18006D534 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18008E394 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x1800B4690 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x1800B5920 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800DA754 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     memset_0 @ 0x1800EC516 (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800EC59A (_invalid_parameter_noinfo.c)
 *     sqrtf_0 @ 0x1800F004B (sqrtf_0.c)
 *     memcpy_0 @ 0x1800F007B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x1801835B0 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
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
  CShape *v13; // r10
  int v14; // r14d
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
  __int64 v27; // rbx
  unsigned int v28; // r14d
  bool v29; // zf
  __int64 v30; // rcx
  int v31; // edi
  __int64 v32; // rbx
  int v33; // eax
  unsigned int v34; // ecx
  int BuiltHWPrimitiveEntry; // eax
  unsigned int v36; // ecx
  __int64 v37; // rcx
  int DrawListPrimitive; // eax
  unsigned int v40; // ecx
  __int64 *TreeDataListHead; // rax
  __int64 v42; // r11
  __int64 v43; // rdx
  __int64 v44; // r15
  unsigned int v45; // ecx
  __int64 v46; // r12
  __int64 v47; // rax
  int v48; // eax
  unsigned int v49; // ecx
  int v50; // eax
  unsigned int v51; // ecx
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  int v57; // eax
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  int v61; // eax
  unsigned int v62; // ecx
  CBrushDrawListGenerator *v63; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v64; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v65; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v66)(_QWORD, __int64); // [rsp+50h] [rbp-B8h] BYREF
  char v67; // [rsp+58h] [rbp-B0h]
  int v68; // [rsp+60h] [rbp-A8h]
  __int64 v69; // [rsp+68h] [rbp-A0h]
  _QWORD v70[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v71; // [rsp+98h] [rbp-70h]
  struct CDrawListEntryBuilder *v72; // [rsp+A0h] [rbp-68h]
  void ***v73; // [rsp+A8h] [rbp-60h]
  int v74; // [rsp+B0h] [rbp-58h]
  __int128 v75; // [rsp+B4h] [rbp-54h]
  __int128 v76; // [rsp+C4h] [rbp-44h]
  int v77; // [rsp+D4h] [rbp-34h]
  __int128 v78; // [rsp+D8h] [rbp-30h]
  __int128 v79; // [rsp+E8h] [rbp-20h]
  int v80; // [rsp+F8h] [rbp-10h]
  BOOL v81; // [rsp+FCh] [rbp-Ch]
  float v82; // [rsp+100h] [rbp-8h]
  float v83; // [rsp+104h] [rbp-4h]
  char v84; // [rsp+108h] [rbp+0h]
  _WORD v85[7]; // [rsp+109h] [rbp+1h] BYREF
  __int128 v86; // [rsp+118h] [rbp+10h] BYREF
  __int128 v87; // [rsp+128h] [rbp+20h]
  __int128 v88; // [rsp+138h] [rbp+30h]
  __int128 v89; // [rsp+148h] [rbp+40h]
  int v90; // [rsp+158h] [rbp+50h]
  __int64 v91; // [rsp+1B8h] [rbp+B0h]
  void **v92; // [rsp+1C0h] [rbp+B8h] BYREF
  __int64 v93; // [rsp+1C8h] [rbp+C0h]

  v6 = *(_QWORD *)this;
  v92 = &CCommonRenderingEffectFactory::`vftable';
  v7 = 0LL;
  v63 = this;
  v8 = &v92;
  v9 = (void ***)*((_QWORD *)a2 + 1);
  v64 = 0LL;
  v65 = 0LL;
  if ( v9 )
    v8 = v9;
  v66 = 0LL;
  v73 = v8;
  v84 = *((_BYTE *)a2 + 92);
  v67 = 0;
  LOBYTE(v68) = 0;
  LODWORD(v69) = 0;
  v71 = 0LL;
  v74 = 0;
  memset(v85, 0, 3);
  v72 = a3;
  LODWORD(v10) = 10 * (*(_DWORD *)(v6 + 1032) - 1);
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
        while ( *(_QWORD *)(v10 + 32) != v42 )
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
  v93 = v12;
  v14 = 0;
  v15 = *(_DWORD *)(v6 + 1032);
  if ( !v15 )
    goto LABEL_11;
  v16 = *(_DWORD *)(*(_QWORD *)(v6 + 1008) + 80LL * (unsigned int)(v15 - 1) + 4);
  if ( !v16 )
    goto LABEL_11;
  v43 = *(_QWORD *)(v6 + 1840);
  v44 = v43;
  if ( *(_QWORD *)(136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1) + v43 + 88)
    || (v45 = *(_DWORD *)(v6 + 1864) - v16, LODWORD(v91) = v45, v45 >= *(_DWORD *)(v6 + 1864)) )
  {
LABEL_59:
    v10 = 136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1);
    v7 = *(_QWORD *)(v10 + v44 + 88);
    goto LABEL_60;
  }
  while ( 1 )
  {
    v46 = 136LL * v45;
    v47 = v43 + v46;
    if ( !*(_QWORD *)(v43 + v46 + 88) )
      break;
LABEL_58:
    v44 = *(_QWORD *)(v6 + 1840);
    ++v45;
    v43 = v44;
    LODWORD(v91) = v45;
    v13 = *(CShape **)(v44 + v46 + 88);
    if ( v45 >= *(_DWORD *)(v6 + 1864) )
      goto LABEL_59;
  }
  if ( v13 )
  {
    v50 = CShape::Combine(v13, v43, *(CShape **)v47, (float *)(v47 + 16), 1, (struct CShape **)(v43 + v46 + 88));
    v14 = v50;
    if ( v50 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v51, 0LL, 0, v50, 0xD8u);
      goto LABEL_75;
    }
    goto LABEL_57;
  }
  v48 = CShapePtr::CopyShape((CShape **)v47, (const struct CMILMatrix *)(v47 + 16), (struct CShape **)(v43 + v46 + 88));
  v14 = v48;
  if ( v48 >= 0 )
  {
LABEL_57:
    v45 = v91;
    goto LABEL_58;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v49, 0LL, 0, v48, 0xCCu);
LABEL_75:
  v7 = v91;
LABEL_60:
  if ( v14 >= 0 )
  {
LABEL_11:
    v65 = v93;
    v66 = 0LL;
    v67 = 0;
    LOBYTE(v68) = 0;
    v64 = v7;
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v14, 0x342u);
  v7 = v64;
LABEL_13:
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v14, 0x100u);
    goto LABEL_44;
  }
  v17 = *(_QWORD *)this;
  v90 = 0;
  v18 = *(_DWORD *)(v17 + 480);
  if ( v18 )
  {
    v19 = (unsigned int)(v18 - 1);
    v20 = *(_QWORD *)(v17 + 496);
    v21 = *(_OWORD *)(68 * v19 + v20 + 16);
    v86 = *(_OWORD *)(68 * v19 + v20);
    v22 = *(_OWORD *)(68 * v19 + v20 + 32);
    v87 = v21;
    v23 = *(_OWORD *)(68 * v19 + v20 + 48);
    LODWORD(v20) = *(_DWORD *)(68 * v19 + v20 + 64);
    v88 = v22;
    v89 = v23;
    v90 = v20;
  }
  else
  {
    v86 = _xmm;
    v87 = _xmm;
    v88 = _xmm;
    v89 = _xmm;
    LOWORD(v90) = 32085;
  }
  if ( *((_BYTE *)a2 + 94) )
    v24 = 1;
  else
    v24 = *(_DWORD *)(v17 + 252) != 0;
  v81 = v24;
  v82 = sqrtf_0((float)(*(float *)&v86 * *(float *)&v86) + (float)(*((float *)&v86 + 1) * *((float *)&v86 + 1)));
  v83 = sqrtf_0((float)(*(float *)&v87 * *(float *)&v87) + (float)(*((float *)&v87 + 1) * *((float *)&v87 + 1)));
  if ( v7 && !v24 )
  {
    if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v64)
      && (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(&v86) )
    {
      *(_WORD *)((char *)v85 + 1) = 256;
    }
    else
    {
      *(_WORD *)((char *)v85 + 1) = 1;
    }
  }
  v25 = *((unsigned int *)this + 18);
  LODWORD(v71) = v25;
  HIDWORD(v71) = v25;
  v26 = 8 * v25;
  if ( v26 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v26 <= 0x28 )
    {
      memcpy_0(v70, (char *)this + 40, v26);
      goto LABEL_23;
    }
    memset_0(v70, 0, sizeof(v70));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno(v53, v52, v54) = 22;
      goto LABEL_83;
    }
    if ( v26 > 0x28 )
    {
      *(_DWORD *)_o__errno(v53, v52, v54) = 34;
LABEL_83:
      invalid_parameter_noinfo();
    }
  }
LABEL_23:
  if ( *(_QWORD *)a2 )
  {
    v70[(unsigned int)v71] = *(_QWORD *)a2;
    LODWORD(v71) = v71 + 1;
  }
  v74 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v71)) - 1);
  if ( v74 )
  {
    v55 = *(_OWORD *)((char *)a2 + 20);
    v56 = *(_OWORD *)((char *)a2 + 36);
    v77 = *((_DWORD *)a2 + 13);
    v57 = *((_DWORD *)a2 + 22);
    v75 = v55;
    v80 = v57;
    v58 = *(_OWORD *)((char *)a2 + 56);
    v76 = v56;
    v59 = *(_OWORD *)((char *)a2 + 72);
    v78 = v58;
    v79 = v59;
  }
  if ( *((_BYTE *)a2 + 93) )
    goto LABEL_29;
  v27 = *(_QWORD *)this;
  if ( !*(_BYTE *)(*(_QWORD *)this + 6353LL) )
    goto LABEL_29;
  if ( !*(_QWORD *)((*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v27 + 384) + 160LL))(*(_QWORD *)(v27 + 384)) + 616) )
    goto LABEL_29;
  if ( CCommonRegistryData::m_fUseHWDrawListEntriesOnWARP )
    goto LABEL_29;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(v27 + 480));
  if ( !(unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(TopByReference)
    || !*(_DWORD *)(v27 + 768) && *(_DWORD *)(v27 + 696) )
  {
    goto LABEL_29;
  }
  if ( *(_QWORD *)(v27 + 3512) )
    goto LABEL_29;
  LOBYTE(v85[0]) = 1;
  if ( ((unsigned int (__fastcall *)(void ***))(*v73)[1])(v73) != 1 )
    goto LABEL_29;
  if ( (v64 || v66) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v64) )
    goto LABEL_29;
  if ( *(_DWORD *)(*(_QWORD *)this + 256LL) == 4 )
    goto LABEL_29;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v61 = *(_DWORD *)(*(_QWORD *)this + 248LL);
    if ( v61 >= 1 )
    {
      switch ( v61 )
      {
        case 4:
        case 6:
          goto LABEL_29;
        default:
          break;
      }
    }
  }
  if ( CBrushDrawListGenerator::IsColorConversionRequired(this) || v74 )
  {
LABEL_29:
    LOBYTE(v85[0]) = 0;
  }
  else if ( LOBYTE(v85[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v66);
    LOBYTE(v68) = 0;
    v64 = 0LL;
    v65 = 0LL;
  }
  v28 = v69;
  v29 = (_DWORD)v69 == (_DWORD)v71;
  if ( (unsigned int)v69 < (unsigned int)v71 )
  {
    do
    {
      v30 = v70[v28];
      if ( v30 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v30 + 8LL))(v30, 3LL) )
        break;
      ++v28;
    }
    while ( v28 < (unsigned int)v71 );
    v29 = v28 == (_DWORD)v71;
  }
  if ( v29 )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                          v63,
                          (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v63);
    v14 = DrawListPrimitive;
    if ( DrawListPrimitive >= 0 )
      goto LABEL_37;
    MilInstrumentationCheckHR_MaybeFailFast(v40, 0LL, 0, DrawListPrimitive, 0x1A2u);
    goto LABEL_103;
  }
  v31 = v69;
  v32 = v70[v28];
  LODWORD(v69) = v28;
  v33 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(__int64 *, __int64), CBrushDrawListGenerator **))(*(_QWORD *)v32 + 32LL))(
          v32,
          lambda_67f2f78c20657d8fe4bb762e6db5dd1d_::_lambda_invoker_cdecl_,
          &v63);
  v70[v28] = v32;
  v14 = v33;
  LODWORD(v69) = v31;
  if ( v33 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v34, 0LL, 0, v33, 0x1E1u);
LABEL_103:
    MilInstrumentationCheckHR_MaybeFailFast(v62, 0LL, 0, v14, 0x173u);
    goto LABEL_44;
  }
LABEL_37:
  v14 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v14 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v36, 0LL, 0, BuiltHWPrimitiveEntry, 0x173u);
    v37 = *((_QWORD *)a3 + 4);
    if ( v37 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v37 + 8LL))(v37);
    }
    if ( v14 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v37, 0LL, 0, v14, 0x178u);
  }
LABEL_44:
  if ( v67 && v66 )
    (**v66)(v66, 1LL);
  return (unsigned int)v14;
}
