/*
 * XREFs of ?IsRenderMirrorEnabled@CMonitorManager@@AEAA_NPEAUIMMDevice@@PEAPEAG@Z @ 0x18005DDC0
 * Callers:
 *     ?Initialize@CMonitorManager@@QEAAJK_KPEBK@Z @ 0x18005DA28 (-Initialize@CMonitorManager@@QEAAJK_KPEBK@Z.c)
 *     ?CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x180108488 (-CreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z @ 0x1801088F8 (-DoCreateMonitorForCaptureDeviceIfAppropriate@CMonitorManager@@AEAAJPEAUIMMDevice@@@Z.c)
 *     ?DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEBG@Z @ 0x180108E68 (-DoHandleDefaultDeviceChanged@CMonitorManager@@AEAAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_00.c)
 *     ?HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z @ 0x180109E10 (-HandleDeviceAdded@CMonitorManager@@AEAAXPEBG@Z.c)
 *     ?OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z @ 0x18010B980 (-OnMonitorEnabledChanged@CMonitorManager@@AEAAXPEBGPEBU_tagpropertykey@@@Z.c)
 * Callees:
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ?IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z @ 0x18010AC8C (-IsEndpointActiveHmdEndpoint@CMonitorManager@@AEAA_NPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall CMonitorManager::IsRenderMirrorEnabled(
        CMonitorManager *this,
        struct IMMDevice *a2,
        unsigned __int16 **a3)
{
  char v6; // di
  __int64 v8; // rcx
  __int64 v9; // rbx
  LPVOID pv; // [rsp+30h] [rbp-50h] BYREF
  __int64 v11[2]; // [rsp+38h] [rbp-48h] BYREF
  PROPVARIANT v12; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int16 *v13; // [rsp+50h] [rbp-30h]
  __int64 v14; // [rsp+58h] [rbp-28h]
  PROPVARIANT pvar; // [rsp+60h] [rbp-20h] BYREF
  __int64 v16; // [rsp+68h] [rbp-18h]
  __int64 v17; // [rsp+70h] [rbp-10h]
  LPVOID v18; // [rsp+C0h] [rbp+40h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+48h] BYREF

  v11[1] = -2LL;
  v11[0] = 0LL;
  pv = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  pvar = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  v6 = 0;
  if ( a3 && a2 )
  {
    *a3 = 0LL;
    if ( *((_BYTE *)this + 352) )
    {
      v11[0] = 0LL;
      if ( ((int (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a2->lpVtbl->OpenPropertyStore)(a2, 0LL, v11) >= 0
        && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11[0] + 40LL))(
             v11[0],
             &PKEY_MonitorEnabled,
             &pvar) >= 0
        && (_WORD)pvar == 11
        && (_WORD)v16 == 0xFFFF
        && CMonitorManager::IsEndpointActiveHmdEndpoint(this, a2) )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
          &pv,
          0LL);
        if ( ((int (__fastcall *)(struct IMMDevice *, LPVOID *))a2->lpVtbl->GetId)(a2, &pv) >= 0
          && (*(int (__fastcall **)(__int64, void *, PROPVARIANT *))(*(_QWORD *)v11[0] + 40LL))(
               v11[0],
               &PKEY_MonitorOutput,
               &v12) >= 0
          && (_WORD)v12 == 31
          && v13 )
        {
          v18 = 0LL;
          v8 = *((_QWORD *)this + 8);
          v19 = 0LL;
          if ( (*(int (__fastcall **)(__int64, _QWORD, _QWORD, __int64 *))(*(_QWORD *)v8 + 32LL))(v8, 0LL, 0LL, &v19) >= 0 )
          {
            v9 = v19;
            wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
              &v18,
              0LL);
            if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)v9 + 40LL))(v9, &v18) >= 0
              && !(unsigned int)_o__wcsicmp(pv, v18)
              && (unsigned int)_o__wcsicmp(pv, v13) )
            {
              *a3 = v13;
              LOWORD(v12) = 0;
              v6 = 1;
            }
          }
          if ( v18 )
            CoTaskMemFree(v18);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
        }
      }
    }
  }
  else
  {
    v6 = 0;
  }
  PropVariantClear(&pvar);
  PropVariantClear(&v12);
  if ( pv )
    CoTaskMemFree(pv);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v11);
  return v6;
}
