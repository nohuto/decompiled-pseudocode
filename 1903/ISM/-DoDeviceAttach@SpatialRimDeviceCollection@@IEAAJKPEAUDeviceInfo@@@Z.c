/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x18009C914
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x18009E2E0 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180002678 (-InternalRelease@-$ComPtr@UIGipGameControllerProviderPrivate@Internal@Input@Gaming@Windows@@@WRL.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180010FD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18002C580 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180037DA0 (_guard_dispatch_icall_nop.c)
 *     ?FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z @ 0x18009A684 (-FindDevice@RIMDeviceCollection@@AEAAJKPEAXPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??$?0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U?$integral_constant@D$0A@@wistd@@AEAK@Z @ 0x18009B014 (--$-0AEAK@DeviceAttached@RawInputProvidersTracing@@AEAA@U-$integral_constant@D$0A@@wistd@@AEAK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x18009B194 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18009BFEC (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18009F8FC (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(void **this, __int64 a2, struct DeviceInfo *a3)
{
  int v4; // ebx
  int Device; // eax
  __int64 v7; // r8
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  int v12; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v13; // [rsp+4Ch] [rbp-BCh] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h] BYREF
  struct RIMDevice *v16; // [rsp+60h] [rbp-A8h] BYREF
  struct RIMDevice *v17[2]; // [rsp+68h] [rbp-A0h]
  _BYTE *v18; // [rsp+78h] [rbp-90h]
  __int64 v19; // [rsp+80h] [rbp-88h]
  __int128 v20; // [rsp+88h] [rbp-80h]
  _BYTE *v21; // [rsp+98h] [rbp-70h]
  char v22; // [rsp+A0h] [rbp-68h]
  _BYTE v23[320]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+210h] [rbp+108h]

  v19 = -2LL;
  v4 = a2;
  LODWORD(v14) = a2;
  v12 = 0;
  v13 = 0;
  RawInputProvidersTracing::DeviceAttached::DeviceAttached(
    (RawInputProvidersTracing::DeviceAttached *)v23,
    a2,
    (unsigned int *)&v14);
  v17[0] = (struct RIMDevice *)&v12;
  v17[1] = (struct RIMDevice *)&v13;
  v18 = v23;
  v20 = *(_OWORD *)v17;
  v21 = v23;
  v22 = 1;
  v16 = 0LL;
  Device = RIMDeviceCollection::FindDevice((RIMDeviceCollection *)this, v4, 0LL, &v16, 0LL);
  v8 = Device;
  v12 = Device;
  if ( Device >= 0 )
  {
    _InterlockedExchange(
      &MPCInputInfoHelper::m_nextSpectrumId,
      (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
    v13 = MPCInputInfoHelper::m_nextSpectrumId;
    v15 &= v7;
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
           &v15,
           &v16,
           this + 10);
    v8 = v9;
    v12 = v9;
    if ( v9 >= 0 )
    {
      v9 = (*(__int64 (__fastcall **)(void *, _QWORD, _QWORD, __int64, char *, unsigned __int64))(*(_QWORD *)this[347]
                                                                                                + 48LL))(
             this[347],
             (unsigned int)v14,
             v13,
             v15,
             (char *)a3 + 612,
             (unsigned __int64)(this + 345) & -(__int64)(this != 0LL));
      v8 = v9;
      v12 = v9;
      if ( v9 >= 0 )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v10 = 390LL;
    }
    else
    {
      v10 = 385LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
LABEL_9:
    Microsoft::WRL::ComPtr<Windows::Gaming::Input::Internal::IGipGameControllerProviderPrivate>::InternalRelease(&v15);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x179,
    (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
    (const char *)(unsigned int)Device);
LABEL_10:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v23, v12, v13);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v23);
  return v8;
}
