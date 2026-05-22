/*
 * XREFs of std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_&___ptr64_::_Do_call @ 0x1800B7A00
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXXZ @ 0x1800AC314 (-StartActivity@InitializeSpatialObjectDeviceSupport@SpatialInteractionTrace@SpatialInteractionDe.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEAUISpatialObjectDDIClientFactory@Holographic@34@@Z @ 0x1800B263C (-InitializeDdiDevicesOnWorkerThread@SpatialInteractionSourceDeviceCollection@SpatialInteractions.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_24502c691939f16d0a2037af5bc6e768__void_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__const_____ptr64_::_Do_call(
        __int64 a1)
{
  int v2; // eax
  _QWORD v3[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v4; // [rsp+50h] [rbp-B0h]
  int *v5; // [rsp+58h] [rbp-A8h]
  int *v6; // [rsp+60h] [rbp-A0h]
  int v7; // [rsp+68h] [rbp-98h] BYREF
  char v8; // [rsp+6Ch] [rbp-94h]
  int v9; // [rsp+90h] [rbp-70h] BYREF
  const char *v10; // [rsp+98h] [rbp-68h]
  __int64 v11; // [rsp+A0h] [rbp-60h]
  char v12; // [rsp+A8h] [rbp-58h]
  __int64 v13; // [rsp+B0h] [rbp-50h]
  _BYTE v14[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v15; // [rsp+148h] [rbp+48h]
  __int64 v16; // [rsp+150h] [rbp+50h]
  __int64 v17; // [rsp+158h] [rbp+58h]
  __int64 v18; // [rsp+160h] [rbp+60h]

  v3[1] = 0LL;
  v3[2] = v3;
  v3[3] = 0LL;
  v4 = 0;
  v5 = &v9;
  v6 = &v7;
  v7 = 0;
  v8 = 0;
  v12 = 0;
  v9 = 0;
  v10 = "InitializeSpatialObjectDeviceSupport";
  v11 = 0LL;
  v13 = 1LL;
  v15 = 0LL;
  memset_0(v14, 0, sizeof(v14));
  v16 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v3[0] = &SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::StartActivity((SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport *)v3);
  v2 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::InitializeDdiDevicesOnWorkerThread(
         *(Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection **)(a1 + 16),
         *(struct Windows::Internal::Holographic::ISpatialObjectDDIClientFactory **)(a1 + 8));
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v3,
    v2);
  v3[0] = &SpatialInteractionDevices::SpatialInteractionTrace::InitializeSpatialObjectDeviceSupport::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v3);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v3);
}
