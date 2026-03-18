/*
 * XREFs of ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x1801A4E68
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18009D840 (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800969E0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EC570 (_guard_dispatch_icall_nop.c)
 *     ??2CPropertyChangeResource@@SAPEAX_K@Z @ 0x18019E760 (--2CPropertyChangeResource@@SAPEAX_K@Z.c)
 *     ??0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x1801A4334 (--0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z.c)
 *     ?Create@COverlayRenderTargetEngine@@QEAAJPEBUtagMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x1801A4668 (-Create@COverlayRenderTargetEngine@@QEAAJPEBUtagMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z.c)
 */

__int64 __fastcall COverlayRenderTarget::ProcessCreate(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct tagMILCMD_OVERLAYRENDERTARGET_CREATE *a3)
{
  COverlayRenderTargetEngine *v5; // rax
  COverlayRenderTargetEngine *v6; // rcx
  struct CComposition *v7; // rdi
  COverlayRenderTargetEngine *v8; // rcx
  unsigned int v9; // ebx
  signed int v10; // eax
  __int64 v11; // rcx

  v5 = (COverlayRenderTargetEngine *)CPropertyChangeResource::operator new(0xF8uLL);
  if ( v5 )
    v6 = COverlayRenderTargetEngine::COverlayRenderTargetEngine(v5, this[2]);
  else
    v6 = 0LL;
  v7 = this[8];
  this[8] = v6;
  if ( v6 )
    (*(void (__fastcall **)(COverlayRenderTargetEngine *))(*(_QWORD *)v6 + 8LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(struct CComposition *))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = this[8];
  if ( v8 )
  {
    v10 = COverlayRenderTargetEngine::Create(v8, a3);
    v9 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1ECu, 0LL);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, 0x8007000E, 0x1EAu, 0LL);
  }
  return v9;
}
