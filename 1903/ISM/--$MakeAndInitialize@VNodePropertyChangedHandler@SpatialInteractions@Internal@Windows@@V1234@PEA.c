/*
 * XREFs of ??$MakeAndInitialize@VNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@V1234@PEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@34@@Details@WRL@Microsoft@@YAJPEAPEAVNodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@$$QEAPEAVSpatialInteractionSourceController@456@AEBUSPATIAL_NODE_ID@@AEAPEAUISpatialGraphDriverClient@Holographic@56@@Z @ 0x180162080
 * Callers:
 *     ?CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Internal@Windows@@AEAAJAEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x180164F90 (-CreateNodePropertyChangedHandler@SpatialInteractionSourceController@SpatialInteractions@Interna.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002C8C8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAA@XZ @ 0x180162BC8 (--0NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAJPEAVSpatialInteractionSourceController@234@AEBUSPATIAL_NODE_ID@@PEAUISpatialGraphDriverClient@Holographic@34@@Z @ 0x180167E94 (-RuntimeClassInitialize@NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@QEAAJPE.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::NodePropertyChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceController *,SPATIAL_NODE_ID const &,Windows::Internal::Holographic::ISpatialGraphDriverClient * &>(
        Windows::Internal::SpatialInteractions::NodePropertyChangedHandler **a1,
        struct Windows::Internal::SpatialInteractions::SpatialInteractionSourceController **a2,
        const struct SPATIAL_NODE_ID *a3,
        struct Windows::Internal::Holographic::ISpatialGraphDriverClient **a4)
{
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *v8; // rax
  int v9; // edi
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *v10; // rbx
  Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *v12; // [rsp+50h] [rbp+8h] BYREF

  *a1 = 0LL;
  v8 = (Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *)operator new(
                                                                               0x70uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v8 )
  {
    v10 = (Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *)Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::NodePropertyChangedHandler(v8);
    v12 = v10;
    v9 = Windows::Internal::SpatialInteractions::NodePropertyChangedHandler::RuntimeClassInitialize(v10, *a2, a3, *a4);
    if ( v9 >= 0 )
    {
      if ( v10 )
        (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::NodePropertyChangedHandler *))(*(_QWORD *)v10 + 8LL))(v10);
      *a1 = v10;
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v12);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v9;
}
