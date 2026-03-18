/*
 * XREFs of ?ProcessCreate@COverlayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015EC64
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x1800D0FD0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x1800C7F7C (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800F00A0 (_guard_dispatch_icall_nop.c)
 *     ??0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z @ 0x18015E180 (--0COverlayRenderTargetEngine@@AEAA@PEAVCComposition@@@Z.c)
 *     ??2CNotificationResource@@SAPEAX_K@Z @ 0x18015E27C (--2CNotificationResource@@SAPEAX_K@Z.c)
 *     ?Create@COverlayRenderTargetEngine@@QEAAJPEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z @ 0x18015E4C8 (-Create@COverlayRenderTargetEngine@@QEAAJPEBUMILCMD_OVERLAYRENDERTARGET_CREATE@@@Z.c)
 */

__int64 __fastcall COverlayRenderTarget::ProcessCreate(
        struct CComposition **this,
        struct CResourceTable *a2,
        const struct MILCMD_OVERLAYRENDERTARGET_CREATE *a3)
{
  COverlayRenderTargetEngine *v5; // rax
  COverlayRenderTargetEngine *v6; // rcx
  struct CComposition *v7; // rdi
  COverlayRenderTargetEngine *v8; // rcx
  unsigned int v9; // ebx
  int v10; // eax
  __int64 v11; // rcx

  v5 = (COverlayRenderTargetEngine *)CNotificationResource::operator new(0xF8uLL);
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
      MilInstrumentationCheckHR_MaybeFailFast(v11, 0LL, 0, v10, 0x1EAu);
  }
  else
  {
    v9 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0LL, 0LL, 0, -2147024882, 0x1E8u);
  }
  return v9;
}
