/*
 * XREFs of ?OnHeadEventOccurred@SpatialRimDeviceCollectionHeadEventHandler@@EEAAXUMPCMatrix4x4@@PEAUIPerceptionTimestamp@Perception@Windows@@@Z @ 0x18009E3E0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180029260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationCompletedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180066F9C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedE.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SpatialRimDeviceCollectionHeadEventHandler::OnHeadEventOccurred(__int64 a1, _OWORD *a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  volatile int *v7; // rdx
  __int64 v8; // rax
  volatile int *v9; // rdx
  struct _RTL_CRITICAL_SECTION *v10[5]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+78h] [rbp+20h] BYREF

  v10[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 32));
  v10[0] = v6;
  if ( *(_QWORD *)(a1 + 72) )
  {
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::InternalAddRef(
      a1,
      v7);
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 80));
    v12 = (struct _RTL_CRITICAL_SECTION *)(a1 + 80);
    v8 = *(_QWORD *)(a1 + 184);
    if ( v8 != a3 )
    {
      if ( a3 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a3 + 8LL))(a3);
        v8 = *(_QWORD *)(a1 + 184);
      }
      v11 = v8;
      *(_QWORD *)(a1 + 184) = a3;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v11);
    }
    *(_OWORD *)(a1 + 120) = *a2;
    *(_OWORD *)(a1 + 136) = a2[1];
    *(_OWORD *)(a1 + 152) = a2[2];
    *(_OWORD *)(a1 + 168) = a2[3];
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v12);
    if ( (*(int (__fastcall **)(_QWORD, __int64 (__fastcall *)(SpatialRimDeviceCollectionHeadEventHandler *), __int64, __int64))(**(_QWORD **)(a1 + 72) + 136LL))(
           *(_QWORD *)(a1 + 72),
           lambda_8f38397fb510ec0288b294132d0aacc6_::_lambda_invoker_cdecl_,
           a1,
           3LL) < 0 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release(
        a1,
        v9);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v10);
}
