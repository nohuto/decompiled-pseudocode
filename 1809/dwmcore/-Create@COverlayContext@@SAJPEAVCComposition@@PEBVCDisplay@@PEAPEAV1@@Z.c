/*
 * XREFs of ?Create@COverlayContext@@SAJPEAVCComposition@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800D59D4
 * Callers:
 *     ?InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@_N4@Z @ 0x1800D879C (-InitFullScreen@CHwndRenderTarget@@AEAAJPEAVCDesktopRenderTarget@@PEAVCDisplay@@U_D3DCOLORVALUE@.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18004F094 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??0COverlayContext@@IEAA@PEAVCComposition@@@Z @ 0x1800D5810 (--0COverlayContext@@IEAA@PEAVCComposition@@@Z.c)
 *     ?UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z @ 0x1800D7C58 (-UpdateDisplay@COverlayContext@@QEAAJPEBVCDisplay@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

__int64 __fastcall COverlayContext::Create(
        struct CComposition *a1,
        const struct CDisplay *a2,
        struct COverlayContext **a3)
{
  COverlayContext *v6; // rax
  COverlayContext *v7; // rax
  __int64 v8; // rcx
  COverlayContext *v9; // rdi
  int updated; // eax
  __int64 v11; // rcx
  int v12; // ebx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v6 = (COverlayContext *)WPF::ProcessHeapImpl::AllocClear(0x5450uLL);
  if ( !v6 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  v7 = COverlayContext::COverlayContext(v6, a1);
  v9 = v7;
  if ( v7 )
  {
    (**(void (__fastcall ***)(COverlayContext *))v7)(v7);
    updated = COverlayContext::UpdateDisplay(v9, a2);
    v12 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, updated, 0x20u);
    else
      *a3 = v9;
    if ( v12 < 0 )
      (*(void (__fastcall **)(COverlayContext *))(*(_QWORD *)v9 + 8LL))(v9);
  }
  else
  {
    v12 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(v8, 0LL, 0, -2147024882, 0x1Du);
  }
  return (unsigned int)v12;
}
