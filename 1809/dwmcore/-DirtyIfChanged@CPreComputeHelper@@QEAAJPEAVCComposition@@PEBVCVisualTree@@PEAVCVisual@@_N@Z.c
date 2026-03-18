/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001B804
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x18004B1E0 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180067C68 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800753F0 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        CPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        bool a5)
{
  unsigned int v7; // ebx
  unsigned __int64 v10; // rsi
  struct CTreeData *TreeData; // rax
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ecx

  v7 = 0;
  *((_DWORD *)this + 2) = 0;
  v10 = *((_QWORD *)a2 + 46);
  TreeData = CVisual::FindTreeData(a4, a3);
  if ( !TreeData || *((_QWORD *)TreeData + 15) < v10 )
  {
    v12 = (**(__int64 (__fastcall ***)(CPreComputeHelper *, struct CComposition *, const struct CVisualTree *, struct CVisual *, unsigned __int64))this)(
            this,
            a2,
            a3,
            a4,
            v10);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x20u);
    }
    else
    {
      LOBYTE(v14) = a5;
      v15 = (*(__int64 (__fastcall **)(CPreComputeHelper *, const struct CVisualTree *, unsigned __int64, __int64))(*(_QWORD *)this + 8LL))(
              this,
              a3,
              v10,
              v14);
      v7 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x22u);
    }
  }
  return v7;
}
