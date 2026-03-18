/*
 * XREFs of ?AddRenderTarget@CComposition@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028368
 * Callers:
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18002819C (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x180193E40 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x1801A45B0 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z @ 0x1801A6290 (-CreateAndAddDDARenderTarget@CDesktopRenderTarget@@AEAAJPEAVCDisplay@@@Z.c)
 *     ?Initialize@CCaptureRenderTarget@@MEAAJXZ @ 0x18024DD20 (-Initialize@CCaptureRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z @ 0x180028390 (-AddRenderTarget@CRenderTargetManager@@QEAAJPEAVCRenderTarget@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800738CC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CComposition::AddRenderTarget(CRenderTargetManager **this, struct CRenderTarget *a2)
{
  int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // ebx

  v2 = CRenderTargetManager::AddRenderTarget(this[8], a2);
  v4 = v2;
  if ( v2 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v3, 0LL, 0, v2, 0x170u, 0LL);
  return v4;
}
