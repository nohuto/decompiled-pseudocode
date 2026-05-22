/*
 * XREFs of ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150
 * Callers:
 *     _lambda_a518e9677c20752b15edab298cff80bd_::operator() @ 0x1800AF714 (_lambda_a518e9677c20752b15edab298cff80bd_--operator().c)
 *     ?OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2910 (-OnSpatialObjectDeviceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Interna.c)
 *     ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2CC0 (-OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Inter.c)
 *     ?OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UEAAJPEAVSpatialInteractionObjectDevice@234@AEBU_GUID@@AEBV?$shared_ptr@VSpatialInteractionSourceObject@SpatialInteractions@Internal@Windows@@@std@@@Z @ 0x1800B2FD0 (-OnSourceAdded@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@UE.c)
 *     _lambda_34c6fe1e55b6e4140dcfd37dea589bfc_::operator() @ 0x1800B31F0 (_lambda_34c6fe1e55b6e4140dcfd37dea589bfc_--operator().c)
 *     _lambda_46e712f1d4a8bfe7f662a31e53621789_::operator() @ 0x1800B35CC (_lambda_46e712f1d4a8bfe7f662a31e53621789_--operator().c)
 *     std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7A00 (std--_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std--shared_ea_1800B7A00.c)
 *     ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BECA0 (-OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@E.c)
 *     ?OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BEE00 (-OnSpatialObjectRemoved@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@.c)
 * Callees:
 *     _TlgWrite @ 0x180001144 (_TlgWrite.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x1800031D8 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?LockExclusive@?$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x180064040 (-LockExclusive@-$ActivityBase@VHolographicDriverClientContinuousTrace@@$0A@$0A@$04U_TlgReflector.c)
 *     ?Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ @ 0x1800A2798 (-Instance@SpatialInteractionTrace@SpatialInteractionDevices@@KAPEAV12@XZ.c)
 *     ?IgnoreCurrentThread@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B4284 (-IgnoreCurrentThread@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
        _QWORD *a1,
        int a2)
{
  __int64 v4; // rax
  int v5; // edi
  RTL_SRWLOCK *v6; // rcx
  int v7; // edi
  const struct _TlgProvider_t *v8; // rdi
  DWORD CurrentThreadId; // eax
  const struct wil::FailureInfo *v11; // rdx
  __int64 v12; // [rsp+38h] [rbp-D0h] BYREF
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v14[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  __int64 *v16; // [rsp+F8h] [rbp-10h]
  int v17; // [rsp+100h] [rbp-8h]
  int v18; // [rsp+104h] [rbp-4h]
  PSRWLOCK *p_SRWLock; // [rsp+108h] [rbp+0h]
  int v20; // [rsp+110h] [rbp+8h]
  int v21; // [rsp+114h] [rbp+Ch]

  wil::ActivityBase<HolographicDriverClientContinuousTrace,0,0,5,_TlgReflectorTag_Param0IsProviderType>::LockExclusive(
    (__int64)a1,
    &SRWLock);
  v4 = a1[6];
  v5 = *(_DWORD *)(v4 + 72);
  if ( v5 < 1 )
  {
    memset_0(v14, 0, sizeof(v14));
    wil::details::WilFailFast((wil::details *)v14, v11);
  }
  if ( *(int *)(v4 + 76) >= 0 )
    *(_DWORD *)(v4 + 76) = a2;
  v6 = SRWLock;
  v7 = v5 - 1;
  *(_DWORD *)(v4 + 72) = v7;
  if ( v6 )
    ReleaseSRWLockExclusive(v6);
  if ( v7 )
  {
    v8 = (const struct _TlgProvider_t *)*((_QWORD *)SpatialInteractionDevices::SpatialInteractionTrace::Instance() + 1);
    if ( *(_DWORD *)v8 > 5u )
    {
      v18 = 0;
      LODWORD(v12) = a2;
      v17 = 4;
      v16 = &v12;
      CurrentThreadId = GetCurrentThreadId();
      v21 = 0;
      LODWORD(SRWLock) = CurrentThreadId;
      p_SRWLock = &SRWLock;
      v20 = 4;
      TlgWrite(v8, &unk_180169CF6, (LPCGUID)(a1[6] + 8LL), 0LL, 4u, &pData);
    }
  }
  else
  {
    (*(void (__fastcall **)(_QWORD *))(*a1 + 8LL))(a1);
  }
  return wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(a1);
}
