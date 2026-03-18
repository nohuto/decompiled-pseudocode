/*
 * XREFs of ?IsCandidateDirectFlipCompatbile@COverlayContext@@AEBA_NPEAVISwapChainContent@@AEBUDXGI_MULTIPLANE_OVERLAY_ATTRIBUTES@@W4DXGI_MODE_ROTATION@@I_N3@Z @ 0x180184D2C
 * Callers:
 *     ?CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@22W4DXGI_MODE_ROTATION@@I_N4@Z @ 0x1801829B0 (-CheckAndRecordOverlayCandidate@COverlayContext@@QEAAJPEAVCVisual@@PEAVISwapChainContent@@PEAV-$.c)
 * Callees:
 *     ?IsEquivalentTo@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x18007C35C (-IsEquivalentTo@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 */

char __fastcall COverlayContext::IsCandidateDirectFlipCompatbile(
        COverlayContext *this,
        struct ISwapChainContent *a2,
        const struct DXGI_MULTIPLANE_OVERLAY_ATTRIBUTES *a3,
        enum DXGI_MODE_ROTATION a4,
        char a5,
        bool a6)
{
  char v6; // di
  __int64 i; // rax
  char v12; // bl
  struct D2D_RECT_F v14; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  for ( i = 0LL; i < 4; ++i )
    *(&v14.left + i) = (float)*((int *)a3 + i + 9);
  if ( *((int *)this + 3304) <= 0 )
  {
    v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 496LL))(*((_QWORD *)this + 2));
    if ( (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 96LL))(a2) == v12
      && !(*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *))(*(_QWORD *)a2 + 112LL))(a2)
      && (EqualRect((const RECT *)((char *)a3 + 4), (const RECT *)((char *)a3 + 20)) || *((_DWORD *)this + 42))
      && EqualRect((const RECT *)((char *)a3 + 20), (const RECT *)((char *)a3 + 36))
      && (TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v14, (float *)this + 10)
       || *((_DWORD *)this + 42)
       && TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEquivalentTo(&v14, (float *)this + 14))
      && a4 == DXGI_MODE_ROTATION_IDENTITY
      && (a5 & 3) == 0
      && !a6 )
    {
      return (*(unsigned __int8 (__fastcall **)(struct ISwapChainContent *, _QWORD))(*(_QWORD *)a2 + 168LL))(
               a2,
               *((_QWORD *)this + 2)) != 0;
    }
  }
  return v6;
}
