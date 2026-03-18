/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800DEA88
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800285B8 (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z @ 0x18002BA4C (-UpdateDisplay@COverlayContext@@QEAAXPEBVCDisplay@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180079254 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??0COverlayContext@@IEAA@PEAVCComposition@@@Z @ 0x1800DEB0C (--0COverlayContext@@IEAA@PEAVCComposition@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0230 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801583B0 (ModuleFailFastForHRESULT.c)
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
