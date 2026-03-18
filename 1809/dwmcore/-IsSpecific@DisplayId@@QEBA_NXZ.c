/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x1800300C8
 * Callers:
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x18002FE28 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x180030028 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18008C84C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18008FCAC (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x180180BF0 (-IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x18018D3D0 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x180222900 (-IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != DisplayId::None && *(_DWORD *)this != DisplayId::All;
}
