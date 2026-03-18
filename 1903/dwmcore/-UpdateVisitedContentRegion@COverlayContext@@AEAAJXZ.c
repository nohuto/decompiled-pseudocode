/*
 * XREFs of ?UpdateVisitedContentRegion@COverlayContext@@AEAAJXZ @ 0x180187604
 * Callers:
 *     ?CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180183F34 (-CheckAndNotifyFullScreenSwapChain@COverlayContext@@QEAAJPEAVISwapChainContent@@PEAV-$TMilRect_@.c)
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x180184090 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x18003D3C0 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800B74F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@FastRegion@@QEAAJAEBV12@@Z @ 0x1800B7904 (-Union@CRegion@FastRegion@@QEAAJAEBV12@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800B8A58 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     __security_check_cookie @ 0x1800E6FB0 (__security_check_cookie.c)
 */

__int64 __fastcall COverlayContext::UpdateVisitedContentRegion(COverlayContext *this)
{
  signed int v1; // ebx
  unsigned int v3; // esi
  __int64 v4; // rcx
  signed int v5; // eax
  __int64 v6; // rcx
  int *v8; // [rsp+38h] [rbp-59h] BYREF
  int v9; // [rsp+40h] [rbp-51h] BYREF
  void *v10[10]; // [rsp+88h] [rbp-9h] BYREF

  v1 = 0;
  if ( *((_DWORD *)this + 3352) )
  {
    v9 = 0;
    v8 = &v9;
    v3 = 0;
    do
    {
      FastRegion::CRegion::CRegion(
        (FastRegion::CRegion *)v10,
        (const struct tagRECT *)(*((_QWORD *)this + 1673) + 16LL * v3));
      v1 = FastRegion::CRegion::Union((void **)&v8, (const struct FastRegion::Internal::CRgnData **)v10);
      FastRegion::CRegion::FreeMemory(v10);
      if ( v1 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, v1, 0xF6Cu, 0LL);
        goto LABEL_9;
      }
      ++v3;
    }
    while ( v3 < *((_DWORD *)this + 3352) );
    v5 = FastRegion::CRegion::Union((void **)this + 1664, (const struct FastRegion::Internal::CRgnData **)&v8);
    v1 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, v5, 0xF72u, 0LL);
    }
    else
    {
      *((_DWORD *)this + 3352) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 13384, 0x10u);
    }
LABEL_9:
    FastRegion::CRegion::FreeMemory((void **)&v8);
  }
  return (unsigned int)v1;
}
