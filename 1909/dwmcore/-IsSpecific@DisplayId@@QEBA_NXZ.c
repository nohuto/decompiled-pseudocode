/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180053F30
 * Callers:
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004FCC0 (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180053E90 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180053F50 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x1800AE340 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x1801AADD0 (-IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1801C7DD0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x1802513A0 (-IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != (_DWORD)DisplayId::None && *(_DWORD *)this != (_DWORD)DisplayId::All;
}
