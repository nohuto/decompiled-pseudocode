/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x18010FB08
 * Callers:
 *     ??_G?$RuntimeClass@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@WRL@Microsoft@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18010FF00 (--_G-$RuntimeClass@UIConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@VFtmBase@WRL@Mi.c)
 *     ??_EHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x1801100C0 (--_EHomeGestureEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x180110200 (--_EServerConnectionArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z @ 0x18011AF60 (--_EConstantChangedEventArgs@MPCManager@Input@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAA@XZ @ 0x18016325C (--1NodePropertyChangedHandler@SpatialInteractions@Internal@Windows@@EEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Input::MPCManager::IConstantChangedEventArgs,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rcx

  v3 = *(_QWORD *)(a1 + 56);
  result = (unsigned __int64)v3 >> 63;
  if ( v3 < 0 )
    result = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
               2 * v3,
               a2);
  v5 = *(_QWORD *)(a1 + 40);
  if ( v5 )
  {
    *(_QWORD *)(a1 + 40) = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
