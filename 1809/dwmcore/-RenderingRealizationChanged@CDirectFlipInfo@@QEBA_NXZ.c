/*
 * XREFs of ?RenderingRealizationChanged@CDirectFlipInfo@@QEBA_NXZ @ 0x180179534
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z @ 0x180030B48 (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0@Z.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?Render@CHwndRenderTarget@@UEAAJPEA_N@Z @ 0x18004C730 (-Render@CHwndRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z @ 0x180178BB8 (-AddOverdrawToDirtyRegion@CDirectFlipInfo@@QEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDirectFlipInfo::RenderingRealizationChanged(CDirectFlipInfo *this)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = *((_QWORD *)this + 4);
  v2 = 0;
  if ( v1 )
    return *((_DWORD *)this + 20) != *(_DWORD *)(v1 + 72);
  return v2;
}
