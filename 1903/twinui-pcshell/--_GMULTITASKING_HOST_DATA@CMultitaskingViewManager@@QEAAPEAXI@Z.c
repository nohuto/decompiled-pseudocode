/*
 * XREFs of ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180349468
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1803491F8 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18034B1F0 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CMultitaskingViewManager::MULTITASKING_HOST_DATA *__fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  return this;
}
