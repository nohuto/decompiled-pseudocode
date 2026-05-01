/*
 * XREFs of ?ViewVirtualDesktopChanged@VirtualDesktopThumbnailWindowFilter@@UEAAJPEAUIApplicationView@@@Z @ 0x18036C720
 * Callers:
 *     <none>
 * Callees:
 *     ?_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ @ 0x18036C840 (-_MaybeDoUpdates@VirtualDesktopThumbnailWindowFilter@@AEAAXXZ.c)
 */

__int64 __fastcall VirtualDesktopThumbnailWindowFilter::ViewVirtualDesktopChanged(
        VirtualDesktopThumbnailWindowFilter *this,
        struct IApplicationView *a2)
{
  *((_BYTE *)this + 36) = 1;
  VirtualDesktopThumbnailWindowFilter::_MaybeDoUpdates((VirtualDesktopThumbnailWindowFilter *)((char *)this - 8));
  return 0LL;
}
