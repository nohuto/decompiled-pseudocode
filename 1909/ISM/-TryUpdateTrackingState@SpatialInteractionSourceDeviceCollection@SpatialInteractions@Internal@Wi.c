/*
 * XREFs of ?TryUpdateTrackingState@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x1800E5EA4
 * Callers:
 *     ?FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800E22E4 (-FinalizeInitialization@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wi.c)
 *     std::_Func_impl_no_alloc__lambda_0086d0cda67d8c5c9d3e468e3d1f1723__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800E6240 (std--_Func_impl_no_alloc__lambda_0086d0cda67d8c5c9d3e468e3d1f1723__void_std--shared_ea_1800E6240.c)
 *     std::_Func_impl_no_alloc__lambda_2cb64318c66c56ad0c33e0d7e27426db__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800E6300 (std--_Func_impl_no_alloc__lambda_2cb64318c66c56ad0c33e0d7e27426db__void_std--shared_ea_1800E6300.c)
 *     std::_Func_impl_no_alloc__lambda_7c31b355e69a3460c373bef10f27483a__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800E6350 (std--_Func_impl_no_alloc__lambda_7c31b355e69a3460c373bef10f27483a__void_std--shared_ea_1800E6350.c)
 * Callees:
 *     ??1?$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x180002344 (--1-$com_ptr_t@VAsyncHRESULTPrincipal@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010F44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x1800AC800 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z @ 0x1800D8450 (-IsEnabled@SpatialInteractionTrace@SpatialInteractionDevices@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpatialInteractionTrace@SpatialInteractionDevices@@P6AXXZ@Z @ 0x1800D9FDC (-get@-$static_lazy@VSpatialInteractionTrace@SpatialInteractionDevices@@@details@wil@@QEAAPEAVSpa.c)
 *     ?ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z @ 0x1800E15FC (-ControllerNodeTrackingSkipped_@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXK@Z.c)
 *     ?EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1C30 (-EnsureDisplayWatcher@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Wind.c)
 *     ?EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1E30 (-EnsureHmdNode@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AE.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::TryUpdateTrackingState(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        __int64 *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // r12
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v5; // rdx
  int v6; // eax
  int v7; // ebx
  struct _RTL_CRITICAL_SECTION **v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // r13
  __int64 v13; // rcx
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v14; // rdx
  int v15; // eax
  int v16; // ebx
  __int64 v17; // rcx
  SpatialInteractionDevices::SpatialInteractionTrace *v18; // rcx
  __int64 v20; // [rsp+30h] [rbp-40h] BYREF
  __int64 v21; // [rsp+38h] [rbp-38h] BYREF
  struct _RTL_CRITICAL_SECTION *v22; // [rsp+40h] [rbp-30h] BYREF
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+48h] [rbp-28h] BYREF
  __int64 v24; // [rsp+50h] [rbp-20h] BYREF
  HSTRING v25[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]
  HSTRING string; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+58h] BYREF

  v25[1] = (HSTRING)-2LL;
  v21 = 0LL;
  v20 = 0LL;
  string = 0LL;
  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 96);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  v22 = v4;
  v6 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureDisplayWatcher(
         (volatile int **)this,
         v5);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x332,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v6);
    v8 = &v22;
LABEL_13:
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v8);
    goto LABEL_18;
  }
  v9 = *((_QWORD *)this + 17);
  v10 = 0LL;
  if ( v9 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)this + 17));
    v10 = v9;
    v24 = 0LL;
    v21 = v9;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v24);
  }
  v11 = *((_QWORD *)this + 18);
  v12 = 0LL;
  if ( v11 )
  {
    v28 = *((_QWORD *)this + 18);
    wil::com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>::~com_ptr_t<AsyncHRESULTPrincipal,wil::err_exception_policy>(&v28);
    v28 = 0LL;
    v20 = v11;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v28);
    v12 = v11;
  }
  v25[0] = *((HSTRING *)this + 19);
  Microsoft::WRL::Wrappers::HString::Set(&string, v25);
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v22);
  v13 = *a2;
  *(_BYTE *)(*a2 + 107) = 0;
  if ( !v10 || !v12 || !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 32LL))(*a2) )
  {
    v16 = *(_DWORD *)(*a2 + 8);
    if ( SpatialInteractionDevices::SpatialInteractionTrace::IsEnabled(v13) )
    {
      wil::details::static_lazy<SpatialInteractionDevices::SpatialInteractionTrace>::get(
        v17,
        (void (__cdecl *)())lambda_169e34f0547c812b04d058e5b6da2245_::_lambda_invoker_cdecl_);
      SpatialInteractionDevices::SpatialInteractionTrace::ControllerNodeTrackingSkipped_(v18, v16);
    }
    goto LABEL_17;
  }
  v7 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, HSTRING, int))(*(_QWORD *)*a2 + 160LL))(
         *a2,
         v21,
         v20,
         string,
         1);
  if ( v7 >= 0 )
  {
    EnterCriticalSection(v4);
    v23 = v4;
    v15 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureHmdNode(
            (struct _RTL_CRITICAL_SECTION *)this,
            v14);
    v7 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x347,
        (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
        (const char *)(unsigned int)v15);
      v8 = &v23;
      goto LABEL_13;
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v23);
    *(_BYTE *)(*a2 + 105) = 1;
LABEL_17:
    *(_BYTE *)(*a2 + 107) = 1;
    v7 = 0;
  }
LABEL_18:
  WindowsDeleteString(string);
  string = 0LL;
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v20);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v21);
  return (unsigned int)v7;
}
