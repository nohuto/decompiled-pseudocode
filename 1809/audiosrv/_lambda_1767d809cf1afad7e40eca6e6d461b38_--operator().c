/*
 * XREFs of _lambda_1767d809cf1afad7e40eca6e6d461b38_::operator() @ 0x180137708
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___::Run @ 0x18013BDE0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_1767d809cf1afad7e40eca6e6d461b38___--Run.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _TlgWrite @ 0x180025550 (_TlgWrite.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x18004AF88 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180138C24 (-GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18013ABA4 (-PerformLicenseCheckInternalAppService@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     ?StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ @ 0x18013BF34 (-StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_1767d809cf1afad7e40eca6e6d461b38_::operator()(PVOID *a1)
{
  unsigned __int16 *v2; // rbx
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v5; // rdx
  const GUID *v6; // r8
  const GUID *v7; // r9
  int DeviceInterfaceIdFromMMDevice; // eax
  bool v10; // [rsp+38h] [rbp-9h] BYREF
  unsigned __int16 *v11; // [rsp+40h] [rbp-1h] BYREF
  struct IMMDevice *v12; // [rsp+48h] [rbp+7h] BYREF
  int v13; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v14; // [rsp+58h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v16; // [rsp+80h] [rbp+3Fh]
  int v17; // [rsp+88h] [rbp+47h]
  int v18; // [rsp+8Ch] [rbp+4Bh]

  v14 = -2LL;
  v12 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  v3 = *((_QWORD *)*a1 + 24);
  v12 = 0LL;
  v4 = (__int64 *)a1[1];
  if ( v4 )
    v5 = *v4;
  else
    v5 = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct IMMDevice **))(*(_QWORD *)v3 + 40LL))(v3, v5, &v12);
  if ( v13 >= 0 )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)&v11,
      0LL);
    DeviceInterfaceIdFromMMDevice = GetDeviceInterfaceIdFromMMDevice(v12, &v11);
    if ( DeviceInterfaceIdFromMMDevice < 0 )
    {
      if ( DeviceInterfaceIdFromMMDevice == -2147023728 )
        AtmosCheck::StartDeviceIdRecheckTimer(*a1);
      v2 = v11;
    }
    else
    {
      v2 = v11;
      AtmosCheck::AddArrayToLicenseMap((AtmosCheck *)*a1, v11);
      v10 = 0;
      AtmosCheck::PerformLicenseCheckInternalAppService((AtmosCheck *)*a1, v2, &v10);
    }
  }
  if ( (unsigned int)dword_1801B1580 > 5 )
  {
    v16 = &v13;
    v17 = 4;
    v18 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B1580, &unk_1801783BF, v6, v7, 3u, &pData);
  }
  if ( v2 )
    CoTaskMemFree(v2);
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v12);
}
