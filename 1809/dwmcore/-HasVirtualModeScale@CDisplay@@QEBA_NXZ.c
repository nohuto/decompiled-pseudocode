/*
 * XREFs of ?HasVirtualModeScale@CDisplay@@QEBA_NXZ @ 0x180031C88
 * Callers:
 *     ?DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@H_N222@Z @ 0x180030C68 (-DrawVisualTree@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@AEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180030D74 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1800317B0 (-AddInvalidRects@CHwndRenderTarget@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@.c)
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall CDisplay::HasVirtualModeScale(CDisplay *this)
{
  char v1; // r9
  bool v2; // zf

  v1 = 0;
  if ( ((*((_DWORD *)this + 76) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( *((_DWORD *)this + 28) - *((_DWORD *)this + 26) != *((_DWORD *)this + 33) - *((_DWORD *)this + 31) )
      return 1;
    v2 = *((_DWORD *)this + 29) - *((_DWORD *)this + 27) == *((_DWORD *)this + 32) - *((_DWORD *)this + 30);
  }
  else
  {
    if ( *((_DWORD *)this + 28) - *((_DWORD *)this + 26) != *((_DWORD *)this + 32) - *((_DWORD *)this + 30) )
      return 1;
    v2 = *((_DWORD *)this + 29) - *((_DWORD *)this + 27) == *((_DWORD *)this + 33) - *((_DWORD *)this + 31);
  }
  if ( !v2 )
    return 1;
  return v1;
}
