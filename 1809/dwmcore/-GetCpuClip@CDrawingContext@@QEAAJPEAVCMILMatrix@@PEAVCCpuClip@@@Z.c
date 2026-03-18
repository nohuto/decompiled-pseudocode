/*
 * XREFs of ?GetCpuClip@CDrawingContext@@QEAAJPEAVCMILMatrix@@PEAVCCpuClip@@@Z @ 0x180028EF0
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180027D70 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 *     ?GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180028330 (-GenerateDrawList@CAtlasedRectsGroup@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCac.c)
 *     ?GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1@PEAPEAVCSurfaceDrawListBrush@@@Z @ 0x180182BCC (-GenerateIntermediateSurfaceBrush@CBrushDrawListGenerator@@QEAAJAEBUGenerateDrawListProperties@1.c)
 *     ?BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuilder@@@Z @ 0x1801906A4 (-BuildDrawList@CCompositionSkyBoxBrush@@AEAAJPEAVCBrushDrawListGenerator@@PEAVCDrawListEntryBuil.c)
 * Callees:
 *     ?GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ @ 0x1800291C0 (-GetCurrentVisual@CDrawingContext@@UEBAPEAVCVisual@@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ @ 0x180030AD4 (-HasCpuClipsInScope@CScopedClipStack@@QEBA_NXZ.c)
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x1800659B4 (-Release@CShapePtr@@QEAAXXZ.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18006C438 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z @ 0x18006D534 (-CopyShape@CShapePtr@@QEBAJPEBVCMILMatrix@@PEAPEAVCShape@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDrawingContext::GetCpuClip(CDrawingContext *this, struct CMILMatrix *a2, struct CCpuClip *a3)
{
  CScopedClipStack *v3; // rdi
  int v5; // ebp
  __int64 v7; // r14
  CVisual *CurrentVisual; // rax
  struct CTreeData *TreeData; // rax
  int v10; // ebx
  __int64 v11; // r15
  struct CMILMatrix *v12; // rdi
  __int64 v14; // r9
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r10
  unsigned int v18; // ebp
  __int64 v19; // r14
  _QWORD *v20; // rax
  struct CShape **v21; // rcx
  int v22; // eax
  unsigned int v23; // ecx
  __int64 v24; // rcx
  int v25; // eax
  unsigned int v26; // ecx

  v3 = (CDrawingContext *)((char *)this + 1008);
  v5 = *((_DWORD *)this + 258);
  v7 = *((_QWORD *)this + 126);
  if ( !*(_BYTE *)(v7 + 80LL * (unsigned int)(v5 - 1) + 76) )
    return 0;
  CurrentVisual = CDrawingContext::GetCurrentVisual((CDrawingContext *)((char *)this + 8));
  TreeData = CVisual::FindTreeData(CurrentVisual, *((const struct CVisualTree **)this + 757));
  v10 = 0;
  v11 = *((_QWORD *)TreeData + 19);
  if ( !CScopedClipStack::HasCpuClipsInScope(v3) )
  {
    v12 = 0LL;
    goto LABEL_4;
  }
  v14 = *((_QWORD *)v3 + 104);
  v15 = v14;
  if ( *(_QWORD *)(136LL * (unsigned int)(*((_DWORD *)v3 + 214) - 1) + v14 + 88)
    || (v16 = *((unsigned int *)v3 + 214),
        v17 = 0LL,
        v18 = *((_DWORD *)v3 + 214) - *(_DWORD *)(v7 + 80LL * (unsigned int)(v5 - 1) + 4),
        v18 >= (unsigned int)v16) )
  {
LABEL_17:
    v24 = 136LL * (unsigned int)(*((_DWORD *)v3 + 214) - 1);
    v12 = *(struct CMILMatrix **)(v24 + v15 + 88);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v19 = 136LL * v18;
    v20 = (_QWORD *)(v19 + v14);
    v21 = (struct CShape **)(v19 + v14 + 88);
    if ( *v21 )
      goto LABEL_16;
    if ( v17 )
      break;
    v22 = CShapePtr::CopyShape((CShapePtr *)v20, (const struct CMILMatrix *)(v20 + 2), v21);
    v10 = v22;
    if ( v22 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v23, 0LL, 0, v22, 0xCCu);
      goto LABEL_13;
    }
LABEL_16:
    v15 = *((_QWORD *)v3 + 104);
    ++v18;
    v14 = v15;
    v17 = *(_QWORD *)(v19 + v15 + 88);
    if ( v18 >= *((_DWORD *)v3 + 214) )
      goto LABEL_17;
  }
  v25 = CShape::Combine(v17, v16, *v20, v20 + 2, 1, v21);
  v10 = v25;
  if ( v25 >= 0 )
    goto LABEL_16;
  MilInstrumentationCheckHR_MaybeFailFast(v26, 0LL, 0, v25, 0xD8u);
LABEL_13:
  v12 = a2;
LABEL_18:
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v24, 0LL, 0, v10, 0x342u);
    return (unsigned int)v10;
  }
LABEL_4:
  CShapePtr::Release((struct CCpuClip *)((char *)a3 + 16));
  *((_BYTE *)a3 + 32) = 0;
  *(_QWORD *)a3 = v12;
  *((_QWORD *)a3 + 1) = v11;
  return 0;
}
