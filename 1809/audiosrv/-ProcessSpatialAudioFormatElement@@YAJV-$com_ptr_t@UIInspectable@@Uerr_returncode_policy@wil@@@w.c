/*
 * XREFs of ?ProcessSpatialAudioFormatElement@@YAJV?$com_ptr_t@UIInspectable@@Uerr_returncode_policy@wil@@@wil@@PEBGPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x18013AE24
 * Callers:
 *     ?ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z @ 0x180019B20 (-ScanForInstalledSpatialAudioSubtypeAppServices@@YAJPEAUSpatialAudioFormatSubtypeInfo@@HPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18004C07C (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 *     ??$?0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z @ 0x180135D40 (--$-0$05@StringReference@Internal@Windows@@QEAA@AEAY05$$CBG@Z.c)
 *     ?GetAppServiceName@@YAJPEBGPEAPEAG@Z @ 0x180138740 (-GetAppServiceName@@YAJPEBGPEAPEAG@Z.c)
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
  __int64 v20; // rdi
  void **v21; // rcx
  void *v22; // rcx
  unsigned __int16 *v23; // rbx
  __int64 (__fastcall ***v25)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-51h] BYREF
  HSTRING string; // [rsp+40h] [rbp-49h] BYREF
  __int64 v27; // [rsp+48h] [rbp-41h] BYREF
  unsigned __int16 *v28; // [rsp+50h] [rbp-39h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-31h] BYREF
  __int64 v30; // [rsp+60h] [rbp-29h] BYREF
  _BYTE *v31; // [rsp+68h] [rbp-21h]
  __int64 *v32; // [rsp+70h] [rbp-19h]
  __int64 v33; // [rsp+78h] [rbp-11h]
  HSTRING v34; // [rsp+80h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+57h]

  v33 = -2LL;
  v32 = a1;
  pv = a1;
  v31 = a5;
  *a5 = 0;
  v30 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*a1)(
         *a1,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v30);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      214LL,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v7);
    goto LABEL_29;
  }
  v9 = v30;
  v25 = 0LL;
  v10 = *Windows::Internal::StringReference::StringReference(&v34, L"@Name");
  v11 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v10, &v25);
  v8 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      217LL,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v11);
LABEL_5:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    goto LABEL_29;
  }
  v27 = 0LL;
  v12 = (**v25)(v25, &GUID_4bd682dd_7554_40e9_9a9b_82654ede7e62, &v27);
  v8 = v12;
  if ( v12 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      220LL,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)v12);
LABEL_8:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
    goto LABEL_5;
  }
  string = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v27 + 152LL))(v27, &string);
  v8 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      223LL,
      (__int64)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
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
  v28 = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v28,
    0LL);
  if ( (int)GetAppServiceName((const unsigned __int16 *)a2, &v28) < 0 )
  {
    v23 = v28;
  }
  else
  {
    v20 = 32LL * v14;
    *(_BYTE *)(v20 + a3) = 1;
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      a2,
      0xFFFFFFFFFFFFFFFFuLL);
    v21 = (void **)(v20 + a3 + 16);
    if ( v21 == &pv )
    {
      v22 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
        v21,
        pv);
      v22 = 0LL;
    }
    if ( v22 )
      CoTaskMemFree(v22);
    v23 = 0LL;
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
      (void **)(v20 + a3 + 24),
      v28);
  }
  *v31 = 1;
  if ( v23 )
    CoTaskMemFree(v23);
LABEL_26:
  if ( string )
    WindowsDeleteString(string);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
  v8 = 0;
LABEL_29:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v32);
  return v8;
}
