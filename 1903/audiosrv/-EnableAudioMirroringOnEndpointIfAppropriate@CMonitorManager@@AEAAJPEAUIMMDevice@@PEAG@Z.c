/*
 * XREFs of ?EnableAudioMirroringOnEndpointIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@PEAG@Z @ 0x18010961C
 * Callers:
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180108E68 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CMonitorManager::EnableAudioMirroringOnEndpointIfAppropriate(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 *a3)
{
  int v6; // ebx
  bool v7; // zf
  PROPVARIANT pvar; // [rsp+28h] [rbp-38h] BYREF
  unsigned __int16 *v10; // [rsp+30h] [rbp-30h]
  __int64 v11; // [rsp+38h] [rbp-28h]
  PROPVARIANT v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  LPVOID pv; // [rsp+98h] [rbp+38h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+48h] BYREF

  v16 = 0LL;
  pvar = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  if ( !a2 )
  {
    v6 = -2147467261;
    goto LABEL_27;
  }
  v16 = 0LL;
  v6 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 2LL, &v16);
  if ( v6 < 0 )
    goto LABEL_27;
  if ( a3 )
  {
    pv = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      &pv,
      0LL);
    v6 = ((__int64 (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv);
    if ( v6 < 0
      || (unsigned int)_o__wcsicmp(a3, pv)
      && ((v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
                  v16,
                  &PKEY_MonitorOutput,
                  &pvar),
           v6 < 0)
       || ((_WORD)pvar != 31 || !v10 || (unsigned int)_o__wcsicmp(a3, v10))
       && (unsigned int)_o__wcsicmp(a3, pv)
       && (unsigned int)_o__wcsicmp(a3, v10)
       && (PropVariantClear(&pvar),
           LOWORD(pvar) = 31,
           v10 = a3,
           v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
                  v16,
                  &PKEY_MonitorOutput,
                  &pvar),
           LOWORD(pvar) = 0,
           v6 < 0)) )
    {
      if ( pv )
        CoTaskMemFree(pv);
      goto LABEL_27;
    }
    if ( pv )
      CoTaskMemFree(pv);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 40LL))(
         v16,
         &PKEY_MonitorEnabled,
         &v12);
  if ( v6 >= 0 )
  {
    if ( (_WORD)v12 == 11 )
    {
      if ( *((_BYTE *)this + 352) )
      {
        if ( (_WORD)v13 == 0xFFFF )
          goto LABEL_27;
      }
      else if ( !(_WORD)v13 )
      {
        goto LABEL_27;
      }
    }
    LOWORD(v12) = 11;
    v7 = *((_BYTE *)this + 352) == 0;
    LOWORD(v13) = -1;
    if ( v7 )
      LOWORD(v13) = 0;
    v6 = (*(__int64 (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v16 + 48LL))(
           v16,
           &PKEY_MonitorEnabled,
           &v12);
  }
LABEL_27:
  PropVariantClear(&v12);
  PropVariantClear(&pvar);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
  return (unsigned int)v6;
}
