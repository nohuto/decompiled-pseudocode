/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x180081530
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x18007D9B4 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x18007E678 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008123C (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800812CC (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x1800813E0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ @ 0x1800814EC (-IsPrimaryMonitor@CHwndRenderTarget@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 321) )
    return *((_BYTE *)this + 322) != 0;
  return result;
}
