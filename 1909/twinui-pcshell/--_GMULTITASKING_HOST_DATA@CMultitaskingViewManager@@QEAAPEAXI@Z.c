/*
 * XREFs of ??_GMULTITASKING_HOST_DATA@CMultitaskingViewManager@@QEAAPEAXI@Z @ 0x180368C68
 * Callers:
 *     ??1CMultitaskingViewManager@@UEAA@XZ @ 0x1803689F4 (--1CMultitaskingViewManager@@UEAA@XZ.c)
 *     ?_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z @ 0x18036A9B0 (-_DestroyMTVHost@CMultitaskingViewManager@@AEAAX_K@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

CMultitaskingViewManager::MULTITASKING_HOST_DATA *__fastcall CMultitaskingViewManager::MULTITASKING_HOST_DATA::`scalar deleting destructor'(
        CMultitaskingViewManager::MULTITASKING_HOST_DATA *this)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 1);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this);
  return this;
}
