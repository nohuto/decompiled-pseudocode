/*
 * XREFs of ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x1800179F8
 * Callers:
 *     ?PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x180081E30 (-PreCompute@CPreComputeContext@@IEAAJPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z.c)
 *     ?UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800BFF98 (-UpdateProjectedShadowCasters@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 *     ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x1800C0014 (-UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z.c)
 * Callees:
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180035AFC (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPreComputeHelper::DirtyIfChanged(
        CPreComputeHelper *this,
        struct CComposition *a2,
        const struct CVisualTree *a3,
        struct CVisual *a4,
        bool a5)
{
  unsigned int v7; // ebx
  unsigned __int64 v9; // rsi
  struct CTreeData *TreeData; // rax
  __int64 v11; // r11
  int v12; // eax
  unsigned int v13; // ecx
  __int64 v14; // r9
  int v15; // eax
  unsigned int v16; // ecx

  v7 = 0;
  *((_DWORD *)this + 2) = 0;
  v9 = *((_QWORD *)a2 + 48);
  TreeData = CVisual::FindTreeData(a4, a3);
  if ( !TreeData || *((_QWORD *)TreeData + 15) < v9 )
  {
    v12 = (**(__int64 (__fastcall ***)(CPreComputeHelper *, struct CComposition *, const struct CVisualTree *, __int64, unsigned __int64))this)(
            this,
            a2,
            a3,
            v11,
            v9);
    v7 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v13, 0LL, 0, v12, 0x1Cu, 0LL);
    }
    else
    {
      LOBYTE(v14) = a5;
      v15 = (*(__int64 (__fastcall **)(CPreComputeHelper *, const struct CVisualTree *, unsigned __int64, __int64))(*(_QWORD *)this + 8LL))(
              this,
              a3,
              v9,
              v14);
      v7 = v15;
      if ( v15 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x1Eu, 0LL);
    }
  }
  return v7;
}
