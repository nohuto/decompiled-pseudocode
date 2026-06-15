/*
 * XREFs of ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x18013E870
 * Callers:
 *     _lambda_7d6fb6ca628c3c64296120b05a8db9c8_::operator() @ 0x18006A448 (_lambda_7d6fb6ca628c3c64296120b05a8db9c8_--operator().c)
 *     ?GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x18013E750 (-GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x180140818 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180051AD0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceInterfaceIdFromMMDevice(struct IMMDevice *a1, unsigned __int16 **a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  const char *v8; // r9
  __int64 v9; // rbx
  unsigned __int16 *v10; // rcx
  __int64 v12; // [rsp+28h] [rbp-18h] BYREF
  char *v13; // [rsp+30h] [rbp-10h]
  __int64 v14; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v16; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 *v17; // [rsp+68h] [rbp+28h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v16 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v16);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v12 = 0LL;
      v13 = 0LL;
      v14 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v16 + 40LL))(
             v16,
             &PKEY_SWD_DeviceInterfaceId,
             &v12);
      v3 = v7;
      if ( v7 >= 0 )
      {
        if ( (_WORD)v12 != 31 )
        {
          v3 = -2147023728;
LABEL_17:
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v16);
          return v3;
        }
        v9 = -1LL;
        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
          &v17,
          v13,
          0xFFFFFFFFFFFFFFFFuLL,
          v8);
        v10 = v17;
        if ( v17 )
        {
          do
            ++v9;
          while ( v17[v9] );
          if ( v9 )
          {
            v10 = 0LL;
            *a2 = v17;
          }
          v3 = 0;
          if ( v10 )
            CoTaskMemFree(v10);
          goto LABEL_17;
        }
        v3 = -2147024882;
        v5 = 2147942414LL;
        v6 = 48LL;
      }
      else
      {
        v5 = (unsigned int)v7;
        v6 = 44LL;
      }
    }
    else
    {
      v5 = (unsigned int)v4;
      v6 = 39LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)v5);
    goto LABEL_17;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x23,
    (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
    (const char *)0x80070057LL);
  return v3;
}
