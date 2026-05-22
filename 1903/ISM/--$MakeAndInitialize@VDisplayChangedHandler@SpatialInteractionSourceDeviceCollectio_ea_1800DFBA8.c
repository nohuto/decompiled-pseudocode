/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800DFBA8
 * Callers:
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1E70 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800945EC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
        volatile signed __int32 **a1,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **a2,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **a3,
        bool *a4)
{
  Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(a1);
  return Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
           a1,
           a2,
           a3,
           a4);
}
