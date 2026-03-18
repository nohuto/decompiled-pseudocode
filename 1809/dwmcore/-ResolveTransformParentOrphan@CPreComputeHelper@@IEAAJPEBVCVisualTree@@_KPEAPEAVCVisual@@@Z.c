/*
 * XREFs of ?ResolveTransformParentOrphan@CPreComputeHelper@@IEAAJPEBVCVisualTree@@_KPEAPEAVCVisual@@@Z @ 0x180225CBC
 * Callers:
 *     ?BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualTree@@PEAVCVisual@@_K@Z @ 0x180006BA0 (-BuildTransformParentStack@CTransformParentPreComputeHelper@@EEAAJPEAVCComposition@@PEBVCVisualT.c)
 * Callees:
 *     ?GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ @ 0x180004250 (-GetTransformParentNoRef@CVisual@@QEBAPEAV1@XZ.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x180030964 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x180065958 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?Pop@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z @ 0x1800767C0 (-Pop@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEAA_NPEAPEAVCVisual@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1802259F8 (-InvalidateVisual@CPreComputeHelper@@IEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 *     ?Top@?$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z @ 0x180225DA4 (-Top@-$CWatermarkStack@PEAVCVisual@@$0EA@$01$09@@QEBAJPEAPEAVCVisual@@I@Z.c)
 */

__int64 __fastcall CPreComputeHelper::ResolveTransformParentOrphan(
        CPreComputeHelper *this,
        const struct CVisualTree *a2,
        struct _LIST_ENTRY *a3,
        struct CVisual **a4)
{
  unsigned int v4; // ebx
  int *v5; // rsi
  int v9; // eax
  __int64 v10; // rcx
  CVisual *v11; // rdi
  struct TransformParentData *TransformParentDataInternal; // rax
  __int64 v13; // r10
  CPreComputeHelper *v14; // rcx
  CVisual *v16; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = (int *)((char *)this + 8);
  v16 = 0LL;
  *a4 = 0LL;
  while ( *v5 )
  {
    v9 = CWatermarkStack<CVisual *,64,2,10>::Top(v5, &v16);
    v4 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, v9, 0x127u);
      return v4;
    }
    v11 = v16;
    if ( CVisual::GetTransformParentNoRef(v16) )
    {
      CVisual::FindTreeData(v11, a2);
      TransformParentDataInternal = CVisual::GetTransformParentDataInternal(v11);
      LOBYTE(v14) = *(_BYTE *)(v13 + 16) & 0xF7;
      *(_BYTE *)(v13 + 16) = (_BYTE)v14;
      if ( *((_BYTE *)TransformParentDataInternal + 8) )
      {
        if ( ((unsigned __int8)v14 & 4) == 0 || *(struct _LIST_ENTRY **)(v13 + 216) != a3 )
        {
          CPreComputeHelper::InvalidateVisual(v14, v11, a2, a3);
          *a4 = v11;
          return v4;
        }
      }
    }
    CWatermarkStack<CVisual *,64,2,10>::Pop(v5, 0LL);
  }
  return v4;
}
