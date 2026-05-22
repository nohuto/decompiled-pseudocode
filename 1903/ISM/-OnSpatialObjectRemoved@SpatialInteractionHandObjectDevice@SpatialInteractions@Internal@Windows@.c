/*
 * XREFs of ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800F5D90
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x1800E0578 (--0-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800E0724 (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflec.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800E1AFC (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_Tlg.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800E5100 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03$0A@U_TlgRef.c)
 *     ?OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800F59AC (-OnHandSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Wind.c)
 *     ?StartActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800F6BB8 (-StartActivity@OnHandSpatialObjectRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnSpatialObjectRemoved(
        RTL_SRWLOCK *this,
        struct Windows::Internal::Holographic::ISpatialObjectWatcher *a2,
        const struct _GUID *a3)
{
  __int128 v5; // xmm0
  __int64 v6; // rax
  const wchar_t *v7; // rbx
  int v8; // eax
  _QWORD v9[40]; // [rsp+30h] [rbp-168h] BYREF

  v5 = *(_OWORD *)(*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectWatcher *))(*(_QWORD *)a2 + 32LL))(a2);
  v6 = v5 - SPATIALPROP_HandTracker_HandList;
  if ( (_QWORD)v5 == SPATIALPROP_HandTracker_HandList )
    v6 = *((_QWORD *)&v5 + 1) + 0x7BF5085A9D15D860LL;
  if ( !v6 )
  {
    v7 = (const wchar_t *)&this[9];
    if ( this[12].Ptr >= (PVOID)8 )
      v7 = *(const wchar_t **)v7;
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>(
      (__int64)v9,
      (__int64)"OnHandSpatialObjectRemoved");
    v9[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved::`vftable';
    SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved::StartActivity(
      (SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved *)v9,
      v7,
      a3);
    v8 = Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectRemoved(
           this - 1,
           a3);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
      (__int64)v9,
      v8);
    v9[0] = &SpatialInteractionDevices::SpatialInteractionTrace::OnHandSpatialObjectRemoved::`vftable';
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,0,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
  }
}
