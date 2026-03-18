/*
 * XREFs of ?UpdateCVIRenderTargets@COcclusionContext@@AEAAXPEAVCDrawingContext@@PEBVCVisualTree@@@Z @ 0x1800B52DC
 * Callers:
 *     ?UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z @ 0x1800B5288 (-UpdateCVIRenderTargets@CDrawingContext@@QEAAXPEBVCVisualTree@@@Z.c)
 * Callees:
 *     ?EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBitmapInfo@1@@Z @ 0x18004281C (-EnsureRenderTargetBitmapInfo@CCachedVisualImage@@AEAAJU_LUID@@VDisplayId@@PEAPEAURenderTargetBi.c)
 *     ?RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z @ 0x180086C40 (-RegisterGraphWalkRoot@CThreadContext@@SAJPEAX@Z.c)
 *     ?UnregisterGraphWalkRoot@CThreadContext@@SAXXZ @ 0x180086D88 (-UnregisterGraphWalkRoot@CThreadContext@@SAXXZ.c)
 *     ?IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV?$CRectF@UDeviceHPC@CoordinateSpace@@@@@Z @ 0x18016FD90 (-IsNodeOccluded@CDrawingContext@@AEAA_NPEBVCVisualTree@@PEBVCVisual@@AEBV-$CRectF@UDeviceHPC@Coo.c)
 */

void __fastcall COcclusionContext::UpdateCVIRenderTargets(
        COcclusionContext *this,
        struct CDrawingContext *a2,
        const struct CVisualTree *a3)
{
  __int64 i; // rbx
  __int64 v7; // r14
  void *v8; // r12
  char v9; // r15
  __int64 v10; // [rsp+60h] [rbp+8h]
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 296); i = (unsigned int)(i + 1) )
  {
    v7 = *((_QWORD *)this + 145);
    v8 = *(void **)(v7 + 40 * i);
    v9 = *(_BYTE *)(v7 + 40 * i + 16);
    v10 = *(_QWORD *)(v7 + 40 * i + 8);
    if ( (int)CThreadContext::RegisterGraphWalkRoot(v8) >= 0 )
    {
      if ( v9 || !(unsigned __int8)CDrawingContext::IsNodeOccluded(a2, a3, v8, v7 + 20 + 40 * i) )
        CCachedVisualImage::EnsureRenderTargetBitmapInfo(v10, *((_QWORD *)a2 + 49), *((_DWORD *)a2 + 100), &v11);
      CThreadContext::UnregisterGraphWalkRoot();
    }
  }
  *((_DWORD *)this + 296) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 1160, 40LL);
}
