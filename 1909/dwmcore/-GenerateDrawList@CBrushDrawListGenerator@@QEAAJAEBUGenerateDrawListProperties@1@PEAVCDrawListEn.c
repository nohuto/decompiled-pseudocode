/*
 * XREFs of ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAVCDrawListEntryBuilder@@@Z @ 0x180097560
 * Callers:
 *     ?GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180012240 (-GenerateDrawList@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDraw.c)
 *     ?DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@AEBU_D3DCOLORVALUE@@@Z @ 0x180034A84 (-DrawSolidColorRectangle@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEB.c)
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180036DC0 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEnt_ea_180036DC0.c)
 *     ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18003C100 (-GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListC.c)
 *     ?UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAUEffectStage@@PEAVCDrawListCache@@@Z @ 0x18003E488 (-UpdateDrawListCache@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawLi.c)
 *     ?FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@AEBV?$span@$$CBUMilRectF@@$0?0@gsl@@AEBU_D3DCOLORVALUE@@@Z @ 0x180098B60 (-FillRectanglesAsDrawList@CDrawingContext@@AEAAJ$$QEAV-$unique_ptr@VCDrawListBrush@@U-$default_d.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x1801AF5F4 (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EB854 (-GenerateDrawList@CParticleEmitterVisual@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawLis.c)
 *     ?GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801EF8F0 (-GenerateDrawList@CProjectedShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache.c)
 *     ?GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18020D0C0 (-GenerateDrawList@CShapeTree@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NAEBUMilRectF@@@Z @ 0x180211BF8 (-DrawAsDrawList@CLinearGradientLegacyMilBrush@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuild.c)
 *     ?GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180214940 (-GenerateDrawList@CHwndBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?Render@CShapeDrawingContext@@QEAAJXZ @ 0x1802524C8 (-Render@CShapeDrawingContext@@QEAAJXZ.c)
 * Callees:
 *     ?IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ @ 0x180017704 (-IsAxisAlignedRectangle@CCpuClip@@QEBA_NXZ.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180028D68 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x1800339F8 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18004D46C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ @ 0x18007DB04 (-GetTopByReference@CMatrixStack@@QEBAPEBVCMILMatrix@@XZ.c)
 *     ?GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ @ 0x18007DC30 (-GetTreeDataListHead@CVisual@@QEBAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z @ 0x180094470 (-GenerateDrawListPrimitive@CBrushDrawListGenerator@@AEBAJPEAUGenerateDrawListParameters@1@@Z.c)
 *     ?ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVALUE@@@Z @ 0x180097BC0 (-ExtractBuiltHWPrimitiveEntry@CDrawListEntryBuilder@@AEAAJ_NPEAVCPrimitiveColor@@PEBU_D3DCOLORVA.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800C31C4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     memset_0 @ 0x1800E8D0E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x1800E8D9E (_invalid_parameter_noinfo.c)
 *     ?GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z @ 0x1800EB6D4 (-GetWorldTransform@CDrawingContext@@QEBAXPEAVCMILMatrix@@@Z.c)
 *     sqrtf_0 @ 0x1800F01DB (sqrtf_0.c)
 *     memcpy_0 @ 0x1800F020B (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ?IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ @ 0x1801B0014 (-IsColorConversionRequired@CBrushDrawListGenerator@@AEAA_NXZ.c)
 */

__int64 __fastcall CBrushDrawListGenerator::GenerateDrawList(
        CBrushDrawListGenerator *this,
        const struct CBrushDrawListGenerator::GenerateDrawListProperties *a2,
        struct CDrawListEntryBuilder *a3)
{
  __int64 v6; // rbx
  void ***v7; // rax
  void ***v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // r10
  int v11; // eax
  signed int v12; // r14d
  __int64 v13; // r12
  int v14; // r8d
  __int64 v15; // rbx
  CDrawingContext *v16; // rcx
  BOOL v17; // ebx
  __int64 v18; // rbx
  size_t v19; // rbx
  unsigned int v20; // r14d
  bool v21; // zf
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rbx
  signed int v25; // eax
  __int64 v26; // rcx
  signed int BuiltHWPrimitiveEntry; // eax
  __int64 v28; // rcx
  __int64 v29; // rcx
  signed int DrawListPrimitive; // eax
  __int64 v32; // rcx
  __int64 *TreeDataListHead; // rax
  __int64 v34; // r11
  __int64 v35; // rdx
  __int64 v36; // r9
  __int64 v37; // r10
  unsigned int v38; // ecx
  __int64 v39; // r13
  __int64 *v40; // rax
  signed int v41; // eax
  __int64 v42; // rcx
  signed int v43; // eax
  __int64 v44; // rcx
  __int128 v45; // xmm0
  __int128 v46; // xmm1
  int v47; // eax
  __int128 v48; // xmm0
  __int128 v49; // xmm1
  const struct CMILMatrix *TopByReference; // rax
  __int64 v51; // r10
  int v52; // eax
  __int64 v53; // rcx
  CBrushDrawListGenerator *v54; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v56; // [rsp+48h] [rbp-C0h]
  void (__fastcall ***v57)(_QWORD, __int64); // [rsp+50h] [rbp-B8h] BYREF
  char v58; // [rsp+58h] [rbp-B0h]
  int v59; // [rsp+60h] [rbp-A8h]
  __int64 v60; // [rsp+68h] [rbp-A0h]
  _QWORD v61[5]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v62; // [rsp+98h] [rbp-70h]
  struct CDrawListEntryBuilder *v63; // [rsp+A0h] [rbp-68h]
  void ***v64; // [rsp+A8h] [rbp-60h]
  int v65; // [rsp+B0h] [rbp-58h]
  __int128 v66; // [rsp+B4h] [rbp-54h]
  __int128 v67; // [rsp+C4h] [rbp-44h]
  int v68; // [rsp+D4h] [rbp-34h]
  __int128 v69; // [rsp+D8h] [rbp-30h]
  __int128 v70; // [rsp+E8h] [rbp-20h]
  int v71; // [rsp+F8h] [rbp-10h]
  BOOL v72; // [rsp+FCh] [rbp-Ch]
  float v73; // [rsp+100h] [rbp-8h]
  float v74; // [rsp+104h] [rbp-4h]
  char v75; // [rsp+108h] [rbp+0h]
  _WORD v76[7]; // [rsp+109h] [rbp+1h] BYREF
  float v77; // [rsp+118h] [rbp+10h] BYREF
  float v78; // [rsp+11Ch] [rbp+14h]
  float v79; // [rsp+128h] [rbp+20h]
  float v80; // [rsp+12Ch] [rbp+24h]
  int v81; // [rsp+158h] [rbp+50h]
  __int64 v82; // [rsp+1B8h] [rbp+B0h]
  void **v83; // [rsp+1C0h] [rbp+B8h] BYREF

  v6 = *(_QWORD *)this;
  v83 = &CCommonRenderingEffectFactory::`vftable';
  v7 = &v83;
  v54 = this;
  v8 = (void ***)*((_QWORD *)a2 + 1);
  v55 = 0LL;
  v56 = 0LL;
  if ( v8 )
    v7 = v8;
  v57 = 0LL;
  v64 = v7;
  v75 = *((_BYTE *)a2 + 92);
  v58 = 0;
  LOBYTE(v59) = 0;
  LODWORD(v60) = 0;
  v62 = 0LL;
  v65 = 0;
  memset(v76, 0, 3);
  v63 = a3;
  v9 = 10LL * (unsigned int)(*(_DWORD *)(v6 + 1032) - 1);
  if ( !*(_BYTE *)(*(_QWORD *)(v6 + 1008) + 80LL * (unsigned int)(*(_DWORD *)(v6 + 1032) - 1) + 76) )
  {
LABEL_13:
    v12 = 0;
    goto LABEL_14;
  }
  v9 = 0LL;
  if ( *(_BYTE *)(v6 + 6048) )
  {
    if ( *(_BYTE *)(v6 + 6049) )
      v9 = *(_QWORD *)(v6 + 3336);
    else
      v9 = *(_QWORD *)(*(_QWORD *)(v6 + 6056) + 24LL);
  }
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 6056) + 32LL) )
  {
    v10 = v9 + 328;
  }
  else
  {
    TreeDataListHead = (__int64 *)CVisual::GetTreeDataListHead((CVisual *)v9);
    if ( TreeDataListHead )
    {
      v9 = *TreeDataListHead;
      if ( (__int64 *)*TreeDataListHead != TreeDataListHead )
      {
        while ( *(_QWORD *)(v9 + 32) != v34 )
        {
          v9 = *(_QWORD *)v9;
          if ( (__int64 *)v9 == TreeDataListHead )
            goto LABEL_9;
        }
        v10 = v9 - 224;
      }
    }
  }
LABEL_9:
  v11 = *(_DWORD *)(v6 + 1032);
  v12 = 0;
  v13 = *(_QWORD *)(v10 + 152);
  if ( !v11 || (v14 = *(_DWORD *)(*(_QWORD *)(v6 + 1008) + 80LL * (unsigned int)(v11 - 1) + 4)) == 0 )
  {
    v15 = 0LL;
    goto LABEL_12;
  }
  v35 = *(_QWORD *)(v6 + 1840);
  v36 = v35;
  if ( *(_QWORD *)(136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1) + v35 + 88)
    || (v37 = 0LL, v38 = *(_DWORD *)(v6 + 1864) - v14, LODWORD(v82) = v38, v38 >= *(_DWORD *)(v6 + 1864)) )
  {
LABEL_53:
    v9 = 136LL * (unsigned int)(*(_DWORD *)(v6 + 1864) - 1);
    v15 = *(_QWORD *)(v9 + v36 + 88);
    goto LABEL_54;
  }
  while ( 1 )
  {
    v39 = 136LL * v38;
    v40 = (__int64 *)(v35 + v39);
    if ( !*(_QWORD *)(v35 + v39 + 88) )
      break;
LABEL_67:
    v36 = *(_QWORD *)(v6 + 1840);
    ++v38;
    v35 = v36;
    LODWORD(v82) = v38;
    v37 = *(_QWORD *)(v36 + v39 + 88);
    if ( v38 >= *(_DWORD *)(v6 + 1864) )
      goto LABEL_53;
  }
  if ( v37 )
  {
    v43 = CShape::Combine(v37, v35, *v40, (__int64)(v40 + 2), 1, (_QWORD *)(v35 + v39 + 88));
    v12 = v43;
    if ( v43 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v44, 0LL, 0, v43, 0xD8u, 0LL);
      goto LABEL_76;
    }
    goto LABEL_66;
  }
  v41 = CShapePtr::CopyShape((CShape **)v40, (const struct CMILMatrix *)(v40 + 2), (struct CShape **)(v35 + v39 + 88));
  v12 = v41;
  if ( v41 >= 0 )
  {
LABEL_66:
    v38 = v82;
    goto LABEL_67;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v42, 0LL, 0, v41, 0xCCu, 0LL);
LABEL_76:
  v15 = v82;
LABEL_54:
  if ( v12 >= 0 )
  {
LABEL_12:
    v56 = v13;
    v57 = 0LL;
    v58 = 0;
    LOBYTE(v59) = 0;
    v55 = v15;
    goto LABEL_13;
  }
  MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0x33Fu, 0LL);
LABEL_14:
  if ( v12 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, v12, 0x100u, 0LL);
    goto LABEL_42;
  }
  v16 = *(CDrawingContext **)this;
  v81 = 0;
  CDrawingContext::GetWorldTransform(v16, (struct CMILMatrix *)&v77);
  if ( *((_BYTE *)a2 + 94) )
    v17 = 1;
  else
    v17 = *(_DWORD *)(*(_QWORD *)this + 252LL) != 0;
  v72 = v17;
  v73 = sqrtf_0((float)(v77 * v77) + (float)(v78 * v78));
  v74 = sqrtf_0((float)(v79 * v79) + (float)(v80 * v80));
  if ( v55 && !v17 )
  {
    if ( CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v55) && CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)&v77) )
      *(_WORD *)((char *)v76 + 1) = 256;
    else
      *(_WORD *)((char *)v76 + 1) = 1;
  }
  v18 = *((unsigned int *)this + 18);
  LODWORD(v62) = v18;
  HIDWORD(v62) = v18;
  v19 = 8 * v18;
  if ( v19 )
  {
    if ( this != (CBrushDrawListGenerator *)-40LL && v19 <= 0x28 )
    {
      memcpy_0(v61, (char *)this + 40, v19);
      goto LABEL_22;
    }
    memset_0(v61, 0, sizeof(v61));
    if ( this == (CBrushDrawListGenerator *)-40LL )
    {
      *(_DWORD *)_o__errno() = 22;
      goto LABEL_83;
    }
    if ( v19 > 0x28 )
    {
      *(_DWORD *)_o__errno() = 34;
LABEL_83:
      invalid_parameter_noinfo();
    }
  }
LABEL_22:
  if ( *(_QWORD *)a2 )
  {
    v61[(unsigned int)v62] = *(_QWORD *)a2;
    LODWORD(v62) = v62 + 1;
  }
  v65 = *((_DWORD *)a2 + 4) & ((1 << SBYTE4(v62)) - 1);
  if ( v65 )
  {
    v45 = *(_OWORD *)((char *)a2 + 20);
    v46 = *(_OWORD *)((char *)a2 + 36);
    v68 = *((_DWORD *)a2 + 13);
    v47 = *((_DWORD *)a2 + 22);
    v66 = v45;
    v71 = v47;
    v48 = *(_OWORD *)((char *)a2 + 56);
    v67 = v46;
    v49 = *(_OWORD *)((char *)a2 + 72);
    v69 = v48;
    v70 = v49;
  }
  if ( *((_BYTE *)a2 + 93) )
    goto LABEL_28;
  if ( !*(_BYTE *)(*(_QWORD *)this + 6353LL) )
    goto LABEL_28;
  TopByReference = CMatrixStack::GetTopByReference((CMatrixStack *)(*(_QWORD *)this + 480LL));
  if ( !CMILMatrix::Is2DAxisAlignedPreserving<1>((__int64)TopByReference)
    || !*(_DWORD *)(v51 + 768) && *(_DWORD *)(v51 + 696) )
  {
    goto LABEL_28;
  }
  if ( *(_QWORD *)(v51 + 3512) )
    goto LABEL_28;
  LOBYTE(v76[0]) = 1;
  if ( ((unsigned int (__fastcall *)(void ***))(*v64)[1])(v64) != 1 )
    goto LABEL_28;
  if ( (v55 || v57) && !CCpuClip::IsAxisAlignedRectangle((CCpuClip *)&v55) )
    goto LABEL_28;
  if ( *(_DWORD *)(*(_QWORD *)this + 256LL) == 4 )
    goto LABEL_28;
  if ( (*((_DWORD *)this + 4) & 0x200) != 0 )
  {
    v52 = *(_DWORD *)(*(_QWORD *)this + 248LL);
    if ( v52 >= 1 )
    {
      switch ( v52 )
      {
        case 4:
        case 6:
          goto LABEL_28;
        default:
          break;
      }
    }
  }
  if ( CBrushDrawListGenerator::IsColorConversionRequired(this) || v65 )
  {
LABEL_28:
    LOBYTE(v76[0]) = 0;
  }
  else if ( LOBYTE(v76[0]) )
  {
    CShapePtr::Release((CShapePtr *)&v57);
    LOBYTE(v59) = 0;
    v55 = 0LL;
    v56 = 0LL;
  }
  v20 = v60;
  v21 = (_DWORD)v60 == (_DWORD)v62;
  if ( (unsigned int)v60 < (unsigned int)v62 )
  {
    do
    {
      v22 = v61[v20];
      if ( v22 && (*(unsigned __int8 (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 8LL))(v22, 3LL) )
        break;
      ++v20;
    }
    while ( v20 < (unsigned int)v62 );
    v21 = v20 == (_DWORD)v62;
  }
  if ( v21 )
  {
    DrawListPrimitive = CBrushDrawListGenerator::GenerateDrawListPrimitive(
                          v54,
                          (struct CBrushDrawListGenerator::GenerateDrawListParameters *)&v54);
    v12 = DrawListPrimitive;
    if ( DrawListPrimitive >= 0 )
      goto LABEL_35;
    MilInstrumentationCheckHR_MaybeFailFast(v32, 0LL, 0, DrawListPrimitive, 0x1A2u, 0LL);
    goto LABEL_101;
  }
  v23 = v60;
  v24 = v61[v20];
  LODWORD(v60) = v20;
  v25 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 (__fastcall *)(), CBrushDrawListGenerator **))(*(_QWORD *)v24 + 32LL))(
          v24,
          *(_QWORD *)v54,
          lambda_80f3bab51e93826f691483b340804ef9_::_lambda_invoker_cdecl_,
          &v54);
  v61[v20] = v24;
  v12 = v25;
  LODWORD(v60) = v23;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0x1E2u, 0LL);
LABEL_101:
    MilInstrumentationCheckHR_MaybeFailFast(v53, 0LL, 0, v12, 0x173u, 0LL);
    goto LABEL_42;
  }
LABEL_35:
  v12 = 0;
  if ( *((_QWORD *)a3 + 4) )
  {
    BuiltHWPrimitiveEntry = CDrawListEntryBuilder::ExtractBuiltHWPrimitiveEntry(a3, 0, 0LL, 0LL);
    v12 = BuiltHWPrimitiveEntry;
    if ( BuiltHWPrimitiveEntry < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v28, 0LL, 0, BuiltHWPrimitiveEntry, 0x1A7u, 0LL);
    v29 = *((_QWORD *)a3 + 4);
    if ( v29 )
    {
      *((_QWORD *)a3 + 4) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 8LL))(v29);
    }
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v29, 0LL, 0, v12, 0x178u, 0LL);
  }
LABEL_42:
  if ( v58 && v57 )
    (**v57)(v57, 1LL);
  return (unsigned int)v12;
}
