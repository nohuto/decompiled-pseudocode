/*
 * XREFs of _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator() @ 0x18006A448
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___::Run @ 0x18006B370 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_7d6fb6ca628c3c64296120b05a8db9c8___--Run.c)
 * Callees:
 *     _TlgWrite @ 0x18001AD10 (_TlgWrite.c)
 *     ??I?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x1800428F8 (--I-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z @ 0x180053804 (-AddArrayToLicenseMap@AtmosCheck@@AEAAJPEBG@Z.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z @ 0x18006ACF0 (-PerformLicenseCheckForEndpoint@AtmosCheck@@AEAAJPEBGPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18013E870 (-GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z.c)
 *     ?StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ @ 0x180140330 (-StartDeviceIdRecheckTimer@AtmosCheck@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator()(PVOID *a1)
{
  __int64 v2; // rcx
  __int64 *v3; // rax
  __int64 v4; // rdx
  const GUID *v5; // r8
  const GUID *v6; // r9
  struct IMMDevice *v7; // rbx
  void **v8; // rax
  int DeviceInterfaceIdFromMMDevice; // eax
  bool v11; // [rsp+38h] [rbp-9h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-1h] BYREF
  struct IMMDevice *v13; // [rsp+48h] [rbp+7h] BYREF
  int v14; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v15; // [rsp+58h] [rbp+17h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+60h] [rbp+1Fh] BYREF
  int *v17; // [rsp+80h] [rbp+3Fh]
  int v18; // [rsp+88h] [rbp+47h]
  int v19; // [rsp+8Ch] [rbp+4Bh]

  v15 = -2LL;
  v13 = 0LL;
  pv = 0LL;
  v2 = *((_QWORD *)*a1 + 28);
  v13 = 0LL;
  v3 = (__int64 *)a1[1];
  if ( v3 )
    v4 = *v3;
  else
    v4 = 0LL;
  v14 = (*(__int64 (__fastcall **)(__int64, __int64, struct IMMDevice **))(*(_QWORD *)v2 + 40LL))(v2, v4, &v13);
  if ( v14 >= 0 )
  {
    v7 = v13;
    v8 = wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::operator&(&pv);
    DeviceInterfaceIdFromMMDevice = GetDeviceInterfaceIdFromMMDevice(v7, (unsigned __int16 **)v8);
    if ( DeviceInterfaceIdFromMMDevice < 0 )
    {
      if ( DeviceInterfaceIdFromMMDevice == -2147023728 )
        AtmosCheck::StartDeviceIdRecheckTimer(*a1);
    }
    else
    {
      AtmosCheck::AddArrayToLicenseMap((AtmosCheck *)*a1, (const unsigned __int16 *)pv);
      v11 = 0;
      AtmosCheck::PerformLicenseCheckForEndpoint((AtmosCheck *)*a1, (const unsigned __int16 *)pv, &v11);
    }
  }
  if ( (unsigned int)dword_1801B64F0 > 5 )
  {
    v17 = &v14;
    v18 = 4;
    v19 = 0;
    TlgWrite((TraceLoggingHProvider)&dword_1801B64F0, &unk_18017D3EF, v5, v6, 3u, &pData);
  }
  if ( pv )
    CoTaskMemFree(pv);
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v13);
}
