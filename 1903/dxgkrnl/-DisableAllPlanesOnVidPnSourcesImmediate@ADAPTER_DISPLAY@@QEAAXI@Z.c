/*
 * XREFs of ?DisableAllPlanesOnVidPnSourcesImmediate@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0149B90
 * Callers:
 *     ?SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z @ 0x1C0124BF0 (-SetVidPnSourceVisibility@ADAPTER_DISPLAY@@QEAAJIEIE@Z.c)
 *     ?DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z @ 0x1C01F0EBC (-DisableMPOPlanes@ADAPTER_DISPLAY@@QEAAXIE@Z.c)
 *     ?FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z @ 0x1C01F556C (-FlushPresentReferencesAndDisableOverlays@ADAPTER_RENDER@@QEAAJIIII@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006FF4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007560 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007DEC (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z @ 0x1C00F8088 (-DisableOverlayPlanesUnsafe@DISPLAY_SOURCE@@AEAAXE@Z.c)
 */

void __fastcall ADAPTER_DISPLAY::DisableAllPlanesOnVidPnSourcesImmediate(ADAPTER_DISPLAY *this, int a2)
{
  __int64 v4; // rdx
  unsigned int i; // ebx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v6, (ADAPTER_DISPLAY *)((char *)this + 504), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v6);
  for ( i = 0; i < *((_DWORD *)this + 20); ++i )
  {
    if ( _bittest(&a2, i) )
    {
      LOBYTE(v4) = 1;
      DISPLAY_SOURCE::DisableOverlayPlanesUnsafe((DISPLAY_SOURCE *)(*((_QWORD *)this + 14) + 3968LL * i), v4);
    }
  }
  if ( v6[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v6);
}
