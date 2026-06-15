/*
 * XREFs of ?GetDeviceInterfaceIdFromMMDevice@@YAJPEAUIMMDevice@@PEAPEAG@Z @ 0x180138C24
 * Callers:
 *     _lambda_1767d809cf1afad7e40eca6e6d461b38_::operator() @ 0x180137708 (_lambda_1767d809cf1afad7e40eca6e6d461b38_--operator().c)
 *     ?GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z @ 0x180138B04 (-GetDefaultAudioDeviceId@AtmosCheck@@AEBAJPEAPEAG@Z.c)
 *     ?UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ @ 0x18013C370 (-UpdateLicenseMapForAllEndpoints@AtmosCheck@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetDeviceInterfaceIdFromMMDevice(struct IMMDevice *a1, unsigned __int16 **a2)
{
  unsigned int v3; // ebx
  int v4; // eax
  unsigned __int64 v5; // r9
  __int64 v6; // rdx
  int v7; // eax
  __int64 v8; // rbx
  unsigned __int16 *v9; // rcx
  __int64 v11; // [rsp+28h] [rbp-18h] BYREF
  char *v12; // [rsp+30h] [rbp-10h]
  __int64 v13; // [rsp+38h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  __int64 v15; // [rsp+60h] [rbp+20h] BYREF
  unsigned __int16 *v16; // [rsp+68h] [rbp+28h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v15 = 0LL;
    v4 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v15);
    v3 = v4;
    if ( v4 >= 0 )
    {
      v11 = 0LL;
      v12 = 0LL;
      v13 = 0LL;
      v7 = (*(__int64 (__fastcall **)(__int64, void *, __int64 *))(*(_QWORD *)v15 + 40LL))(
             v15,
             &PKEY_SWD_DeviceInterfaceId,
             &v11);
      v3 = v7;
      if ( v7 >= 0 )
      {
        if ( (_WORD)v11 == 31 )
        {
          v8 = -1LL;
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
            &v16,
            v12,
            0xFFFFFFFFFFFFFFFFuLL);
          v9 = v16;
          if ( v16 )
          {
            do
              ++v8;
            while ( v16[v8] );
            if ( v8 )
            {
              v9 = 0LL;
              *a2 = v16;
            }
            v3 = 0;
            if ( v9 )
              CoTaskMemFree(v9);
            goto LABEL_18;
          }
          v3 = -2147024882;
          v6 = 48LL;
        }
        else
        {
          v3 = -2147023728;
          v6 = 45LL;
        }
        v5 = v3;
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
      v6,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)v5);
LABEL_18:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
    return v3;
  }
  v3 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    35LL,
    (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
    (const char *)0x80070057LL);
  return v3;
}
