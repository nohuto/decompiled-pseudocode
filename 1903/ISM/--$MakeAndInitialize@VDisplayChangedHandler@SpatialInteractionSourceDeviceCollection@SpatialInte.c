/*
 * XREFs of ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJPEAPEAVDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@$$QEAPEAUIHolographicDisplayWatcher@6Holographic@Graphics@7@$$QEAPEAV4567@$$QEA_N@Z @ 0x1800DFAE4
 * Callers:
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800DFBA8 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollectio_ea_1800DFBA8.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ @ 0x1800945EC (-InternalRelease@-$ComPtr@VSpectrumListener@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x1800E06A4 (--0DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@W.c)
 *     ?RuntimeClassInitialize@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJPEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Z @ 0x1800E47FC (-RuntimeClassInitialize@DisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialIn.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
        volatile signed __int32 **a1,
        struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **a2,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **a3,
        bool *a4)
{
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *v8; // rax
  int v9; // edi
  volatile signed __int32 *v10; // rbx
  volatile signed __int32 *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *)operator new(0x58uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (volatile signed __int32 *)Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::DisplayChangedHandler(v8);
    v12 = v10;
    v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler::RuntimeClassInitialize(
           (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler *)v10,
           *a2,
           *a3,
           *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        _InterlockedIncrement(v10 + 3);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<SpectrumListener>::InternalRelease(&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
