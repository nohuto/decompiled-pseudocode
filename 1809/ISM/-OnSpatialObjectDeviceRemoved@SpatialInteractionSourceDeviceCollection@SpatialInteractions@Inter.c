/*
 * XREFs of ?OnSpatialObjectDeviceRemoved@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@EEAAXPEAUISpatialObjectDeviceWatcher@Holographic@34@PEB_W@Z @ 0x1800B2CC0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEAAXPEB_W@Z @ 0x1800ACCF8 (-StartActivity@SpatialObjectDeviceRemoved@SpatialInteractionTrace@SpatialInteractionDevices@@QEA.c)
 *     ??1?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ADF9C (--1-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorT.c)
 *     ?RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal@Windows@@AEAAJPEB_W@Z @ 0x1800B2DD0 (-RemoveSpatialObjectDevice@SpatialInteractionSourceDeviceCollection@SpatialInteractions@Internal.c)
 *     ?Destroy@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800B3D10 (-Destroy@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgRefl.c)
 *     ?Stop@?$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B4150 (-Stop@-$ActivityBase@VSpatialInteractionTrace@SpatialInteractionDevices@@$0A@$0A@$03U_TlgReflect.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::OnSpatialObjectDeviceRemoved(
        Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *this,
        struct Windows::Internal::Holographic::ISpatialObjectDeviceWatcher *a2,
        const wchar_t *a3)
{
  unsigned int v5; // eax
  _QWORD v6[4]; // [rsp+20h] [rbp-E0h] BYREF
  int v7; // [rsp+40h] [rbp-C0h]
  int *v8; // [rsp+48h] [rbp-B8h]
  int *v9; // [rsp+50h] [rbp-B0h]
  int v10; // [rsp+58h] [rbp-A8h] BYREF
  char v11; // [rsp+5Ch] [rbp-A4h]
  int v12; // [rsp+80h] [rbp-80h] BYREF
  const char *v13; // [rsp+88h] [rbp-78h]
  __int64 v14; // [rsp+90h] [rbp-70h]
  char v15; // [rsp+98h] [rbp-68h]
  __int64 v16; // [rsp+A0h] [rbp-60h]
  _BYTE v17[144]; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v18; // [rsp+138h] [rbp+38h]
  __int64 v19; // [rsp+140h] [rbp+40h]
  __int64 v20; // [rsp+148h] [rbp+48h]
  __int64 v21; // [rsp+150h] [rbp+50h]

  v16 = 1LL;
  v6[1] = 0LL;
  v6[2] = v6;
  v6[3] = 0LL;
  v8 = &v12;
  v7 = 0;
  v9 = &v10;
  v10 = 0;
  v13 = "SpatialObjectDeviceRemoved";
  v11 = 0;
  v15 = 0;
  v12 = 0;
  v14 = 0LL;
  v18 = 0LL;
  memset_0(v17, 0, sizeof(v17));
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v6[0] = &SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceRemoved::`vftable';
  SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceRemoved::StartActivity(
    (SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceRemoved *)v6,
    a3);
  v5 = Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection::RemoveSpatialObjectDevice(
         (Windows::Internal::SpatialInteractions::SpatialInteractionSourceDeviceCollection *)((char *)this - 40),
         a3);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v6,
    v5);
  v6[0] = &SpatialInteractionDevices::SpatialInteractionTrace::SpatialObjectDeviceRemoved::`vftable';
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::Destroy(v6);
  wil::ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SpatialInteractionDevices::SpatialInteractionTrace,0,0,4,_TlgReflectorTag_Param0IsProviderType>((__int64)v6);
}
