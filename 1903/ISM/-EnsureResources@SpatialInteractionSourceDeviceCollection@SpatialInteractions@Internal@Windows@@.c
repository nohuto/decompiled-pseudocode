/*
 * XREFs of ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E21B4
 * Callers:
 *     _lambda_6af16b50654dcdcb9558a84173d25568_::operator() @ 0x1800E0DA8 (_lambda_6af16b50654dcdcb9558a84173d25568_--operator().c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1E70 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@PEAUIHolographicDisplay@Holographic@Graphics@4@_N@Z @ 0x1800E33DC (-OnDisplayChanged@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A874 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??$GetActivationFactory@V?$ComPtr@UISpatialLocatorStatics@Spatial@Perception@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UISpatialLocatorStatics@Spatial@Perception@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18008EECC (--$GetActivationFactory@V-$ComPtr@UISpatialLocatorStatics@Spatial@Perception@Windows@@@WRL@Micro.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z @ 0x1800E18CC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEB_WII@Z.c)
 */

__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx
  __int64 v4; // rbx
  int ActivationFactory; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 (__fastcall ***v12)(_QWORD, GUID *, char *); // [rsp+20h] [rbp-40h] BYREF
  struct _RTL_CRITICAL_SECTION *v13; // [rsp+28h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+48h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+8h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 360);
  EnterCriticalSection((LPCRITICAL_SECTION)this + 9);
  v13 = v2;
  if ( *((_QWORD *)this + 50)
    || (v15 = 0LL,
        Microsoft::WRL::Wrappers::HStringReference::CreateReference(
          &hstringHeader,
          L"Windows.Perception.PerceptionTimestampHelper",
          0x2Du,
          0x2Cu),
        v4 = v15,
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 50),
        ActivationFactory = RoGetActivationFactory(v4, &GUID_47a611d4_a9df_4edc_855d_f4d339d967ac, (char *)this + 400),
        v6 = ActivationFactory,
        ActivationFactory >= 0) )
  {
    if ( !*((_QWORD *)this + 51) )
    {
      v15 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Graphics.Holographic.HolographicDisplay",
        0x30u,
        0x2Fu);
      v8 = v15;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 51);
      ActivationFactory = RoGetActivationFactory(v8, &GUID_cb374983_e7b0_4841_8355_3ae5b536e9a4, (char *)this + 408);
      v6 = ActivationFactory;
      if ( ActivationFactory < 0 )
      {
        v7 = 1042LL;
        goto LABEL_7;
      }
    }
    if ( !*((_QWORD *)this + 52) )
    {
      v12 = 0LL;
      v15 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Perception.Spatial.SpatialLocator",
        0x2Au,
        0x29u);
      v9 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Perception::Spatial::ISpatialLocatorStatics>>(
             v15,
             (__int64 *)&v12);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 1048LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v10,
          (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
          (const char *)(unsigned int)v9);
        Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v12);
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)this + 52);
      v9 = (**v12)(v12, &GUID_a96534fe_8251_42e7_8755_e3eb989e56e9, (char *)this + 416);
      v6 = v9;
      if ( v9 < 0 )
      {
        v10 = 1050LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)&v12);
    }
    v6 = 0;
    goto LABEL_16;
  }
  v7 = 1037LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
    (const char *)(unsigned int)ActivationFactory);
LABEL_16:
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v13);
  return v6;
}
