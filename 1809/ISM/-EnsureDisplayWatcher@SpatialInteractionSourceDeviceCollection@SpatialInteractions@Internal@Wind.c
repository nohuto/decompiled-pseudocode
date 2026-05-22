/*
 * XREFs of ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B04E4
 * Callers:
 *     ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800B123C (-TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800B21C8 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ??$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@V12345@PEAUIHolographicDisplayWatcher@4Holographic@Graphics@5@PEAV2345@_N@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@$$QEAPEAVSpatialInteractionSourceDeviceCollection@SpatialInteractions@58@$$QEA_N@Z @ 0x1800B58A0 (--$MakeAndInitialize@VDisplayChangedHandler@SpatialInteractionSourceDeviceCollection@SpatialInte.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rcx
  int v7; // eax
  int v8; // eax
  __int64 v9; // rdx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v10; // rcx
  __int64 v11; // rcx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v12; // rax
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v16; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v17[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v19; // [rsp+68h] [rbp+28h] BYREF
  Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *v20; // [rsp+70h] [rbp+30h] BYREF
  __int64 v21; // [rsp+78h] [rbp+38h] BYREF

  v19 = a2;
  v17[1] = -2LL;
  v3 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(this, a2);
  if ( (v3 & 0x80000000) != 0 )
  {
    v4 = 692LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)v3);
    return v3;
  }
  if ( !*((_QWORD *)this + 41) )
  {
    v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 51);
    if ( !v6 )
    {
      v3 = -2147418113;
      v4 = 696LL;
      goto LABEL_3;
    }
    v21 = 0LL;
    v7 = (**v6)(v6, &GUID_e464b452_7eb3_434b_95d6_1339477e80c7, &v21);
    v3 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2BB,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v7);
LABEL_20:
      v11 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      return v3;
    }
    v20 = 0LL;
    v8 = (*(__int64 (__fastcall **)(__int64, Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **))(*(_QWORD *)v21 + 48LL))(
           v21,
           &v20);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 702LL;
      goto LABEL_18;
    }
    LOBYTE(v19) = 1;
    v16 = this;
    v17[0] = v20;
    v8 = ((__int64 (__fastcall *)(char *, _QWORD *, Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>)(
           (char *)this + 312,
           v17,
           &v16,
           &v19);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 704LL;
      goto LABEL_18;
    }
    LOBYTE(v19) = 0;
    v17[0] = this;
    v16 = v20;
    v8 = ((__int64 (__fastcall *)(char *, Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **, _QWORD *, const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection **))Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DisplayChangedHandler,Windows::Graphics::Holographic::Internal::IHolographicDisplayWatcher *,Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *,bool>)(
           (char *)this + 320,
           &v16,
           v17,
           &v19);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 705LL;
      goto LABEL_18;
    }
    v8 = (*(__int64 (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *))(*(_QWORD *)v20 + 120LL))(v20);
    v3 = v8;
    if ( v8 < 0 )
    {
      v9 = 707LL;
LABEL_18:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v9,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v8);
      v10 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *))(*(_QWORD *)v10 + 16LL))(v10);
      }
      goto LABEL_20;
    }
    v12 = v20;
    v13 = 0LL;
    v20 = 0LL;
    v14 = *((_QWORD *)this + 41);
    *((_QWORD *)this + 41) = v12;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = v20;
    }
    if ( v13 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *))(*(_QWORD *)v13 + 16LL))(v13);
    }
    v15 = v21;
    if ( v21 )
    {
      v21 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  return 0LL;
}
