/*
 * XREFs of _lambda_6af16b50654dcdcb9558a84173d25568_::operator() @ 0x1800E0B6C
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_6af16b50654dcdcb9558a84173d25568__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&_::_Do_call @ 0x1800E6340 (std--_Func_impl_no_alloc__lambda_6af16b50654dcdcb9558a84173d25568__void_std--shared_ea_1800E6340.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18002A3F4 (-InternalUnlock@SyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E033C (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E04E8 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E18BC (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJAEBVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@@Z @ 0x1800E1F74 (-EnsureResources@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z @ 0x1800E4A20 (-StartActivity@DeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXKK@Z.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E4ED0 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall lambda_6af16b50654dcdcb9558a84173d25568_::operator()(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **a1,
        _QWORD *a2)
{
  unsigned int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rbx
  struct _RTL_CRITICAL_SECTION *v7; // rdi
  const struct Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection *v8; // rdx
  int v9; // eax
  struct _RTL_CRITICAL_SECTION *v10; // rdi
  __int64 v11; // rdi
  unsigned int v12; // eax
  int v13[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v14; // [rsp+30h] [rbp-D8h] BYREF
  struct _RTL_CRITICAL_SECTION *v15; // [rsp+38h] [rbp-D0h] BYREF
  struct _RTL_CRITICAL_SECTION *v16[2]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[40]; // [rsp+58h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D0h] [rbp+C8h]

  v16[1] = (struct _RTL_CRITICAL_SECTION *)-2LL;
  v4 = *(_DWORD *)(*a2 + 12LL);
  v5 = *(_DWORD *)(*a2 + 8LL);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)v17,
    (__int64)"DeviceRemoved");
  v17[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved *)v17,
    v5,
    v4);
  v6 = 0LL;
  *(_QWORD *)v13 = 0LL;
  v7 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 96);
  EnterCriticalSection(v7);
  v16[0] = v7;
  v9 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::EnsureResources(*a1, v8);
  if ( v9 >= 0 )
  {
    v10 = (struct _RTL_CRITICAL_SECTION *)((char *)*a1 + 360);
    EnterCriticalSection(v10);
    v15 = v10;
    v11 = *((_QWORD *)*a1 + 52);
    if ( v11 )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11 + 8LL))(*((_QWORD *)*a1 + 52));
      v14 = 0LL;
      v6 = v11;
      *(_QWORD *)v13 = v11;
      Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v14);
    }
    Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(&v15);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      241LL,
      (__int64)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\devices\\spatialinteractionsourcedevicecollection.cpp",
      (const char *)(unsigned int)v9);
  }
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::InternalUnlock(v16);
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a2 + 168LL))(*a2, 2LL, v6);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v17,
    v12);
  Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease((__int64 *)v13);
  v17[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v17);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v17);
}
