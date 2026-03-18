/*
 * XREFs of ?ApplyState@CD2DLayer@@UEAAJPEAVCDrawingContext@@@Z @ 0x18006AE30
 * Callers:
 *     ?FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ @ 0x18002F69C (-FlushDeferredD2DLayers@CDrawingContext@@AEAAJXZ.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180033750 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z @ 0x180038F00 (-ApplyRenderStateInternal@CDrawingContext@@AEAAJ_N@Z.c)
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x180046F68 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qqqq @ 0x180149B9C (McTemplateU0qqqq.c)
 */

__int64 __fastcall CD2DLayer::ApplyState(CD2DLayer *this, struct CDrawingContext *a2)
{
  float *v2; // rdi

  v2 = (float *)((char *)this + 8);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qqqq(
      (_DWORD)this,
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Start,
      (int)*v2,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  (*(void (__fastcall **)(_QWORD, char *, float *, _QWORD, unsigned __int64, _DWORD, _DWORD, _DWORD, _DWORD))(**((_QWORD **)a2 + 48) + 56LL))(
    *((_QWORD *)a2 + 48),
    (char *)a2 + 8,
    v2,
    *((_QWORD *)this + 3),
    ((unsigned __int64)this + 32) & -(__int64)(*((_BYTE *)this + 56) != 0),
    *((_DWORD *)this + 15),
    *((_DWORD *)this + 16),
    *((_DWORD *)this + 17),
    *((_DWORD *)this + 18));
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    McTemplateU0qqqq(
      (int)*((float *)this + 4),
      (unsigned int)&EVTDESC_ETWGUID_LAYEREVENT_BeginLayer_Stop,
      (int)*v2,
      (int)*((float *)this + 3),
      (int)*((float *)this + 4),
      (int)*((float *)this + 5));
  return 0LL;
}
