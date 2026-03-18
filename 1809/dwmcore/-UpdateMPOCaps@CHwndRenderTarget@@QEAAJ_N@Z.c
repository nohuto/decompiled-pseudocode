/*
 * XREFs of ?UpdateMPOCaps@CHwndRenderTarget@@QEAAJ_N@Z @ 0x1800D8014
 * Callers:
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18004D3B8 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ @ 0x18005E420 (-CheckOcclusionState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ @ 0x1800D7F88 (-UpdateMPOCaps@CRenderTargetManager@@QEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x1800D8220 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800D89C4 (-UpdateMPOCaps@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::UpdateMPOCaps(CHwndRenderTarget *this, bool a2)
{
  unsigned int v3; // ebx
  COverlayContext *v4; // rcx
  int updated; // eax
  __int64 v6; // rcx
  bool v8; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v4 = (COverlayContext *)*((_QWORD *)this + 106);
  if ( v4 )
  {
    v8 = 0;
    updated = COverlayContext::UpdateMPOCaps(v4, a2, &v8);
    v3 = updated;
    if ( updated < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, updated, 0x26Bu);
    }
    else if ( v8 )
    {
      (*(void (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)this + 184LL))(this);
    }
  }
  return v3;
}
