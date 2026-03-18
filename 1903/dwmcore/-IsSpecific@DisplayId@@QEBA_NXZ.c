/*
 * XREFs of ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180042568
 * Callers:
 *     ?Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z @ 0x18002D874 (-Snapshot@CCachedVisualImage@@QEAAJPEBUtagRECT@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z @ 0x180042404 (-ValidateAdapterLuidAndDisplayId@CDisplaySet@@IEBAJU_LUID@@VDisplayId@@@Z.c)
 *     ?ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z @ 0x1800424C8 (-ValidateAdapterLuidAndDisplayId@CD3DDeviceManager@@QEAAJU_LUID@@VDisplayId@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x18004322C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x1801AC690 (-IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ @ 0x1801C9570 (-IsMonitorSpecificContent@CCachedVisualImage@@UEBA_NXZ.c)
 *     ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x180252B10 (-IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsSpecific(DisplayId *this)
{
  return *(_DWORD *)this != (_DWORD)DisplayId::None && *(_DWORD *)this != (_DWORD)DisplayId::All;
}
