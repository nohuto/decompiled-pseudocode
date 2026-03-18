/*
 * XREFs of ?IsPrimary@CDisplay@@QEBA_NXZ @ 0x1800A4DB0
 * Callers:
 *     ?LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z @ 0x1800A2AC8 (-LogTelemetry@CDisplaySet@@SAXPEAV1@0W4Enum@DisplayStateComparison@@@Z.c)
 *     ?AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z @ 0x1800A3850 (-AddHwndRenderTarget@CDesktopRenderTarget@@IEAAJPEAVCHwndRenderTarget@@@Z.c)
 *     ?GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x1800A4C00 (-GetDisplayInfo@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ @ 0x1800A4C90 (-ArrangeCloneDisplays@CDisplaySet@@AEAAJXZ.c)
 *     ?IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ @ 0x1800A4DA0 (-IsPrimary@CHwFullScreenRenderTarget@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CDisplay::IsPrimary(CDisplay *this)
{
  bool result; // al

  result = 0;
  if ( *((_BYTE *)this + 313) )
    return *((_BYTE *)this + 314) != 0;
  return result;
}
