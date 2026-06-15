/*
 * XREFs of ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013FA34
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x1800504C0 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180051AD0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x18013D078 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x18013E480 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ProcessSpatialAudioFormatElement(__int64 *a1, char *a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  int v7; // eax
  unsigned int v8; // ebx
  __int64 v9; // rbx
  HSTRING v10; // rdx
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // r14d
  __int64 v15; // rsi
  const WCHAR **v16; // r15
  const WCHAR *v17; // rdi
  UINT32 StringLen; // ebx
  const WCHAR *StringRawBuffer; // rax
  const char *v20; // r9
  __int64 v21; // rdi
  void **v22; // rcx
  void *v23; // rcx
  unsigned __int16 *v24; // rbx
  __int64 (__fastcall ***v26)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-51h] BYREF
  HSTRING string; // [rsp+40h] [rbp-49h] BYREF
  __int64 v28; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v29; // [rsp+50h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-31h] BYREF
  __int64 v31; // [rsp+60h] [rbp-29h] BYREF
  _BYTE *v32; // [rsp+68h] [rbp-21h]
  __int64 *v33; // [rsp+70h] [rbp-19h]
  __int64 v34; // [rsp+78h] [rbp-11h]
  HSTRING v35; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v34 = -2LL;
  v33 = a1;
  pv = a1;
  v32 = a5;
  *a5 = 0;
  v31 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v31);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v7);
    goto LABEL_29;
  }
  v9 = v31;
  v26 = 0LL;
  v10 = *Windows::Internal::StringReference::StringReference(&v35, L"@Name");
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v10, &v26);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD9,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v11);
LABEL_5:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_29;
  }
  v28 = 0LL;
  v12 = (**v26)(v26, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v28);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDC,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v12);
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
    goto LABEL_5;
  }
  string = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v28 + 152LL))(v28, &string);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDF,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v13);
    if ( string )
      WindowsDeleteString(string);
    goto LABEL_8;
  }
  v14 = 0;
  v15 = 0LL;
  v16 = (const WCHAR **)(a3 + 8);
  while ( 1 )
  {
    v17 = *v16;
    StringLen = WindowsGetStringLen(string);
    StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
    if ( CompareStringOrdinal(StringRawBuffer, StringLen, v17, -1, 1) == 2 )
      break;
    ++v14;
    ++v15;
    v16 += 4;
    if ( v15 >= 6 )
      goto LABEL_26;
  }
  v29 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v29,
    0LL);
  if ( (int)GetAppServiceName((const unsigned __int16 *)a2, &v29) < 0 )
  {
    v24 = v29;
  }
  else
  {
    v21 = 32LL * v14;
    *(_BYTE *)(v21 + a3) = 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a2,
      0xFFFFFFFFFFFFFFFFuLL,
      v20);
    v22 = (void **)(v21 + a3 + 16);
    if ( v22 == &pv )
    {
      v23 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        v22,
        pv);
      v23 = 0LL;
    }
    if ( v23 )
      CoTaskMemFree(v23);
    v24 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)(v21 + a3 + 24),
      v29);
  }
  *v32 = 1;
  if ( v24 )
    CoTaskMemFree(v24);
LABEL_26:
  if ( string )
    WindowsDeleteString(string);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
  v8 = 0;
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v31);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v33);
  return v8;
}
