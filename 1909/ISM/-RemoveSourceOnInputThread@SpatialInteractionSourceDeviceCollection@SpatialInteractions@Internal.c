/*
 * XREFs of ?RemoveSourceOnInputThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAXPEAVSpatialInteractionObjectDevice@234@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@PEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800356F0
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows::Internal::SpatialInteractions::ISpatialInteractionSourceCollectionCallbacks___::_Do_call @ 0x180035920 (std--_Func_impl_no_alloc__lambda_4d3a91d4b58fb7dc9d374c8ed2a83795__void_Windows--In_ea_180035920.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AEA0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x18002C200 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800378B0 (_guard_dispatch_icall_nop.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800563B0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E033C (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E04E8 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E18BC (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@QEAAJAEAV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@K_NPEAUISpatialInteractionSourceCollectionCallbacks@234@@Z @ 0x1800E1964 (-DoDeviceRemoval@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E4ED0 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ??$?0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@QEAA@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@1@@Z @ 0x1800E97B8 (--$-0VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@$0A@@-$shared_ptr@VSp.c)
 *     ?StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800EDF84 (-StartActivity@DdiSource_InputThreadRemoval@SpatialInteractionTrace@SpatialInteractionDevices@@Q.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSourceOnInputThread(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        __int64 a2,
        _QWORD *a3,
        __int64 a4)
{
  const wchar_t *v7; // rbx
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+20h] [rbp-E0h]
  _BYTE v12[8]; // [rsp+30h] [rbp-D0h] BYREF
  std::_Ref_count_base *v13; // [rsp+38h] [rbp-C8h]
  __int64 v14; // [rsp+40h] [rbp-C0h]
  struct _GUID v15; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+E8h]

  v14 = -2LL;
  v7 = (const wchar_t *)(a2 + 80);
  if ( *(_QWORD *)(a2 + 104) >= 8uLL )
    v7 = *(const wchar_t **)v7;
  (*(void (__fastcall **)(_QWORD, struct _GUID *))(**(_QWORD **)(*a3 + 120LL) + 48LL))(*(_QWORD *)(*a3 + 120LL), &v15);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
    v16,
    "DdiSource_InputThreadRemoval");
  v16[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval *)v16,
    v7,
    &v15);
  std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>(
    v12,
    a3);
  v8 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::DoDeviceRemoval(this, a4);
  if ( v8 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F6,
      (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v8,
      v11);
  v9 = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a3 + 216LL))(*a3, a4);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1F7,
      (unsigned int)"onecoreuap\\analog\\input\\spatialinteractionclientlib\\ddidevices\\spatialinteractionobjectdevice.cpp",
      (const char *)(unsigned int)v9,
      v11);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v16,
    0LL);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  v16[0] = &SpatialInteractionDevices::SpatialInteractionTrace::DdiSource_InputThreadRemoval::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  return wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(v16);
}
