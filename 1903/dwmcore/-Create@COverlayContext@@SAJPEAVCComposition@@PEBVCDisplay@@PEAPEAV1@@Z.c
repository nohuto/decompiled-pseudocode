/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DE398
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800B0E38 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180089A74 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x1800AF814 (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ??0COverlayContext@@IEAA@PEAVCComposition@@@Z @ 0x1800DE41C (--0COverlayContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x180159A90 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct CComposition *a1,
        const struct CDisplay *a2,
        struct COverlayContext **a3)
{
  unsigned int v6; // ebx
  COverlayContext *v7; // rax
  __int64 v8; // r8
  COverlayContext *v9; // rax
  __int64 v10; // rcx
  COverlayContext *v11; // rdi
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = 0;
  v7 = (COverlayContext *)DefaultHeap::AllocClear(0x5460uLL);
  if ( !v7 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr, v8);
  v9 = COverlayContext::COverlayContext(v7, a1);
  v11 = v9;
  if ( v9 )
  {
    (**(void (__fastcall ***)(COverlayContext *))v9)(v9);
    COverlayContext::UpdateDisplay(v11, a2);
    *a3 = v11;
  }
  else
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, 0x8007000E, 0x1Bu, 0LL);
  }
  return v6;
}
