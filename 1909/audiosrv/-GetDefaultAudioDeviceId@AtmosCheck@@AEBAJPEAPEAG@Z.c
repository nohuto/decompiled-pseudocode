/*
 * XREFs of ?GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x18013E2A0
 * Callers:
 *     ?GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo@@@Z @ 0x18013E500 (-GetEndpointExtendedSpatialLicenseInfo@AtmosCheck@@QEAAJPEBGKPEAUExtendedSpatialAudioEncoderInfo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800034B4 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A58 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003E870 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     _guard_dispatch_icall_nop @ 0x18006C990 (_guard_dispatch_icall_nop.c)
 *     ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18013E3C0 (-GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall AtmosCheck::GetDefaultAudioDeviceId(AtmosCheck *this, LPVOID *a2)
{
  __int64 v3; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  int DeviceInterfaceIdFromMMDevice; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  LPVOID pv; // [rsp+50h] [rbp+8h] BYREF
  struct IMMDevice *v10; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( *((_BYTE *)this + 216) )
  {
    v3 = *((_QWORD *)this + 28);
    if ( !v3 )
      return 2147549183LL;
    v10 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct IMMDevice **))(*(_QWORD *)v3 + 32LL))(
           v3,
           0LL,
           0LL,
           &v10);
    v6 = v5;
    if ( v5 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C6,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)v5);
LABEL_9:
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
      return v6;
    }
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    DeviceInterfaceIdFromMMDevice = GetDeviceInterfaceIdFromMMDevice(v10, (unsigned __int16 **)&pv);
    v6 = DeviceInterfaceIdFromMMDevice;
    if ( DeviceInterfaceIdFromMMDevice < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x8C9,
        (__int64)"avcore\\published\\audiocore\\lib\\atmoscheck\\atmoscheck.cpp",
        (const char *)(unsigned int)DeviceInterfaceIdFromMMDevice);
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_9;
    }
    if ( pv )
      *a2 = pv;
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v10);
  }
  return 0LL;
}
