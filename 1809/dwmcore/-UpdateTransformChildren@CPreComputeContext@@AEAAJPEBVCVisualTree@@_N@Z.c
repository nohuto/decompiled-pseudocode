/*
 * XREFs of ?UpdateTransformChildren@CPreComputeContext@@AEAAJPEBVCVisualTree@@_N@Z @ 0x180067C68
 * Callers:
 *     ?PreCompute@CVisualTree@@QEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180048740 (-PreCompute@CVisualTree@@QEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniq.c)
 * Callees:
 *     ?DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z @ 0x18001B804 (-DirtyIfChanged@CPreComputeHelper@@QEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_N@Z.c)
 *     ?IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z @ 0x180067D14 (-IsVisibleInTree@CVisualTree@@QEBA_NPEBVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPreComputeContext::UpdateTransformChildren(
        CPreComputeContext *this,
        const struct CVisualTree *a2,
        bool a3)
{
  unsigned int v3; // ebx
  int v4; // edi
  unsigned int v8; // ebp
  __int64 i; // rsi
  struct CVisual *v10; // r9
  struct CComposition *v11; // r10
  int v13; // eax
  unsigned int v14; // ecx

  v3 = 0;
  v4 = 0;
  v8 = *(_DWORD *)(*(_QWORD *)this + 1016LL);
  if ( v8 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      if ( CVisualTree::IsVisibleInTree(a2, *(const struct CVisual **)(i + *(_QWORD *)(*(_QWORD *)this + 992LL))) )
      {
        v13 = CPreComputeHelper::DirtyIfChanged((CPreComputeContext *)((char *)this + 1096), v11, a2, v10, a3);
        v3 = v13;
        if ( v13 < 0 )
          break;
      }
      if ( ++v4 >= v8 )
        return v3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(v14, 0LL, 0, v13, 0x50Au);
  }
  return v3;
}
