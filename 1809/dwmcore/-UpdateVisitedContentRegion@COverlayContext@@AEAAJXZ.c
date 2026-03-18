/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x18016C768
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168F90 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801690E4 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180057AF0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180064868 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18009B314 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800A6FB4 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // rcx
  int v5; // eax
  __int64 v6; // rcx
  int *v8; // [rsp+38h] [rbp-59h] BYREF
  int v9; // [rsp+40h] [rbp-51h] BYREF
  void *v10[10]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 3348) )
  {
    v9 = 0;
    v8 = &v9;
    v3 = 0;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v10,
        (const struct tagRECT *)(*((_QWORD *)this + 1671) + 16LL * v3));
      v1 = FastRegion::CRegion::Union(
             (const struct FastRegion::Internal::CRgnData **)&v8,
             (const struct FastRegion::Internal::CRgnData **)v10);
      FastRegion::CRegion::FreeMemory(v10);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0xF65u);
        goto LABEL_9;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 3348) );
    v5 = FastRegion::CRegion::Union(
           (const struct FastRegion::Internal::CRgnData **)this + 1662,
           (const struct FastRegion::Internal::CRgnData **)&v8);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF6Bu);
    }
    else
    {
      *((_DWORD *)this + 3348) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 13368, 0x10u);
    }
LABEL_9:
    FastRegion::CRegion::FreeMemory((void **)&v8);
  }
  return (unsigned int)v1;
}
