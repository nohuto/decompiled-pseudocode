/*
 * XREFs of ?OnSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectWatcher@Holographic@34@AEBU_GUID@@@Z @ 0x1800BECA0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     ?StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_WAEBU_GUID@@@Z @ 0x1800BD028 (-StartActivity@HandSpatialObjectAdded@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPE.c)
 *     ?OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Windows@@AEAAJAEBU_GUID@@@Z @ 0x1800BEF5C (-OnHandSpatialObjectAdded@SpatialInteractionHandObjectDevice@SpatialInteractions@Internal@Window.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnSpatialObjectAdded(
        Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *this,
        struct Windows::Internal::Holographic::ISpatialObjectWatcher *a2,
        const struct _GUID *a3)
{
  const wchar_t *v5; // rbx
  int v6; // eax
  _QWORD v7[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v8; // [rsp+50h] [rbp-B0h]
  int *v9; // [rsp+58h] [rbp-A8h]
  int *v10; // [rsp+60h] [rbp-A0h]
  int v11; // [rsp+68h] [rbp-98h] BYREF
  char v12; // [rsp+6Ch] [rbp-94h]
  int v13; // [rsp+90h] [rbp-70h] BYREF
  const char *v14; // [rsp+98h] [rbp-68h]
  __int64 v15; // [rsp+A0h] [rbp-60h]
  char v16; // [rsp+A8h] [rbp-58h]
  __int64 v17; // [rsp+B0h] [rbp-50h]
  _BYTE v18[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v19; // [rsp+148h] [rbp+48h]
  __int64 v20; // [rsp+150h] [rbp+50h]
  __int64 v21; // [rsp+158h] [rbp+58h]
  __int64 v22; // [rsp+160h] [rbp+60h]

  if ( *(_OWORD *)(*(__int64 (__fastcall **)(struct Windows::Internal::Holographic::ISpatialObjectWatcher *))(*(_QWORD *)a2 + 32LL))(a2) == __PAIR128__(0x840AF7A562EA27A0uLL, SPATIALPROP_HandTracker_HandList) )
  {
    v5 = (const wchar_t *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v5 = *(const wchar_t **)v5;
    v17 = 1LL;
    v7[1] = 0LL;
    v7[2] = v7;
    v7[3] = 0LL;
    v9 = &v13;
    v8 = 0;
    v10 = &v11;
    v11 = 0;
    v14 = "HandSpatialObjectAdded";
    v12 = 0;
    v16 = 0;
    v13 = 0;
    v15 = 0LL;
    v19 = 0LL;
    memset_0(v18, 0, sizeof(v18));
    v22 = 0LL;
    v20 = 0LL;
    v21 = 0LL;
    v7[0] = &SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::`vftable';
    SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::StartActivity(
      (SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded *)v7,
      v5,
      a3);
    v6 = Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice::OnHandSpatialObjectAdded(
           (Windows::Internal::SpatialInteractions::SpatialInteractionHandObjectDevice *)((char *)this - 8),
           a3);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
      v7,
      v6);
    v7[0] = &SpatialInteractionDevices::SpatialInteractionTrace::HandSpatialObjectAdded::`vftable';
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v7);
    wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v7);
  }
}
