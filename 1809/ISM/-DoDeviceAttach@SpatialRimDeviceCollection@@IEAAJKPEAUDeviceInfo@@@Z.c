/*
 * XREFs of ?DoDeviceAttach@SpatialRimDeviceCollection@@IEAAJKPEAUDeviceInfo@@@Z @ 0x180062694
 * Callers:
 *     ?OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180062570 (-OnDeviceAttach@SpatialRimDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003590 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18005E988 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ??1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ @ 0x18005F898 (--1DeviceAttached@RawInputProvidersTracing@@QEAA@XZ.c)
 *     ?StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z @ 0x18005F9F4 (-StartActivity@DeviceAttached@RawInputProvidersTracing@@QEAAXK@Z.c)
 *     ?Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z @ 0x18005FB64 (-Stop@DeviceAttached@RawInputProvidersTracing@@QEAAXJK@Z.c)
 *     ??$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEAPEAVHIDDevice@@AEAPEAX@Details@WRL@Microsoft@@YAJPEAPEAUIHidDevice@SpatialInteractions@Internal@Windows@@AEAPEAVHIDDevice@@AEAPEAX@Z @ 0x180064404 (--$MakeAndInitialize@VSpatialRimDevice@SpatialInteractions@Internal@Windows@@UIHidDevice@234@AEA.c)
 *     memset_0 @ 0x18012BDEE (memset_0.c)
 *     __security_check_cookie @ 0x18012BF70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18012DB90 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall SpatialRimDeviceCollection::DoDeviceAttach(
        SpatialRimDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo *a3)
{
  unsigned int *v6; // r9
  int DeviceId; // eax
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v13[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  struct RIMDevice *v15; // [rsp+58h] [rbp-B0h] BYREF
  struct RIMDevice *v16[2]; // [rsp+60h] [rbp-A8h]
  _QWORD *v17; // [rsp+70h] [rbp-98h]
  _QWORD v18[4]; // [rsp+78h] [rbp-90h]
  char v19; // [rsp+98h] [rbp-70h]
  _QWORD v20[4]; // [rsp+A8h] [rbp-60h] BYREF
  int v21; // [rsp+C8h] [rbp-40h]
  int *v22; // [rsp+D0h] [rbp-38h]
  int *v23; // [rsp+D8h] [rbp-30h]
  int v24; // [rsp+E0h] [rbp-28h] BYREF
  char v25; // [rsp+E4h] [rbp-24h]
  int v26; // [rsp+108h] [rbp+0h] BYREF
  const char *v27; // [rsp+110h] [rbp+8h]
  __int64 v28; // [rsp+118h] [rbp+10h]
  char v29; // [rsp+120h] [rbp+18h]
  __int64 v30; // [rsp+128h] [rbp+20h]
  _BYTE v31[144]; // [rsp+130h] [rbp+28h] BYREF
  __int64 v32; // [rsp+1C0h] [rbp+B8h]
  __int64 v33; // [rsp+1C8h] [rbp+C0h]
  __int64 v34; // [rsp+1D0h] [rbp+C8h]
  __int64 v35; // [rsp+1D8h] [rbp+D0h]
  wil::details::in1diag3 *retaddr; // [rsp+220h] [rbp+118h]

  v18[0] = -2LL;
  v13[0] = 0;
  v13[1] = 0;
  v20[1] = 0LL;
  v20[2] = v20;
  v20[3] = 0LL;
  v21 = 0;
  v22 = &v26;
  v23 = &v24;
  v24 = 0;
  v25 = 0;
  v29 = 0;
  v26 = 0;
  v27 = "DeviceAttached";
  v28 = 0LL;
  v30 = 1LL;
  v32 = 0LL;
  memset_0(v31, 0, sizeof(v31));
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v20[0] = &RawInputProvidersTracing::DeviceAttached::`vftable';
  RawInputProvidersTracing::DeviceAttached::StartActivity((RawInputProvidersTracing::DeviceAttached *)v20, a2);
  v16[0] = (struct RIMDevice *)v13;
  v16[1] = (struct RIMDevice *)&v13[1];
  v17 = v20;
  *(_OWORD *)&v18[1] = *(_OWORD *)v16;
  v18[3] = v20;
  v19 = 1;
  v15 = 0LL;
  DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v15, v6);
  v8 = DeviceId;
  v13[0] = DeviceId;
  if ( DeviceId < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x17A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)DeviceId);
LABEL_11:
    v9 = v13[0];
    goto LABEL_12;
  }
  _InterlockedExchange(
    &MPCInputInfoHelper::m_nextSpectrumId,
    (MPCInputInfoHelper::m_nextSpectrumId - 2000000000) % 0x3B9AC9FFu + 2000000001);
  v13[1] = MPCInputInfoHelper::m_nextSpectrumId;
  v14 = 0LL;
  v9 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::SpatialRimDevice,Windows::Internal::SpatialInteractions::IHidDevice,HIDDevice * &,void * &>(
         &v14,
         &v15,
         (char *)this + 80);
  v8 = v9;
  v13[0] = v9;
  if ( v9 < 0 )
  {
    v10 = 386LL;
LABEL_7:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialrimdevicecollection.cpp",
      (const char *)(unsigned int)v9);
    v9 = v13[0];
    goto LABEL_9;
  }
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, char *, unsigned __int64))(**((_QWORD **)this + 347)
                                                                                            + 40LL))(
         *((_QWORD *)this + 347),
         a2,
         v13[1],
         v14,
         (char *)a3 + 52,
         ((unsigned __int64)this + 2760) & -(__int64)(this != 0LL));
  v13[0] = v9;
  if ( v9 < 0 )
  {
    v8 = v9;
    v10 = 391LL;
    goto LABEL_7;
  }
  v8 = 0;
LABEL_9:
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    goto LABEL_11;
  }
LABEL_12:
  RawInputProvidersTracing::DeviceAttached::Stop((RawInputProvidersTracing::DeviceAttached *)v20, v9, v13[1]);
  RawInputProvidersTracing::DeviceAttached::~DeviceAttached((RawInputProvidersTracing::DeviceAttached *)v20);
  return v8;
}
