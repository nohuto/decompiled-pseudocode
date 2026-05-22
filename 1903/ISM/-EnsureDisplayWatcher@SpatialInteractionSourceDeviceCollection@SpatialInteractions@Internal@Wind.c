/*
 * XREFs of ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1E70
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800E60D4 (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800DFBA8 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollectio_ea_1800DFBA8.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E21B4 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
        volatile signed __int32 **this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v6; // eax
  __int64 v7; // rbx
  int v8; // eax
  __int64 v9; // rdx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v10; // rcx
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v11; // [rsp+20h] [rbp-20h] BYREF
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v12[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v14; // [rsp+68h] [rbp+28h] BYREF
  struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF

  v14 = a2;
  v12[1] = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)-2LL;
  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)this,
         a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 591LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v3);
    return v3;
  }
  if ( !this[41] )
  {
    if ( !this[51] )
    {
      v3 = -2147418113;
      v4 = 595LL;
      goto LABEL_3;
    }
    v16 = 0LL;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
    v6 = (**(__int64 (__fastcall ***)(volatile signed __int32 *, GUID *, __int64 *))this[51])(
           this[51],
           &GUID_e464b452_7eb3_434b_95d6_1339477e80c7,
           &v16);
    v3 = v6;
    if ( v6 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x256,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v6);
LABEL_19:
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
      return v3;
    }
    v15 = 0LL;
    v7 = v16;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
    v8 = (*(__int64 (__fastcall **)(__int64, struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher **))(*(_QWORD *)v7 + 48LL))(
           v7,
           &v15);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 601LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v8);
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
      goto LABEL_19;
    }
    LOBYTE(v14) = 1;
    v11 = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)this;
    v12[0] = v15;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
           this + 39,
           v12,
           &v11,
           (bool *)&v14);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 603LL;
      goto LABEL_18;
    }
    LOBYTE(v14) = 0;
    v12[0] = (struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *)this;
    v11 = v15;
    v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>(
           this + 40,
           &v11,
           v12,
           (bool *)&v14);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 604LL;
      goto LABEL_18;
    }
    v8 = (*(__int64 (__fastcall **)(struct Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *))(*(_QWORD *)v15 + 120LL))(v15);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 606LL;
      goto LABEL_18;
    }
    v10 = v15;
    v15 = 0LL;
    v14 = (const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *)this[41];
    this[41] = (volatile signed __int32 *)v10;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v14);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v15);
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v16);
  }
  return 0LL;
}
