/*
 * XREFs of ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x1800516B4
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x18005014C (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180005A38 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x18003A5B0 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180050720 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1?WindowsDeleteString@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHSTRING__@@@Z @ 0x180051A74 (-reset@-$unique_storage@U-$resource_policy@PEAUHSTRING__@@P6AJPEAU1@@Z$1-WindowsDeleteString@@YA.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180051AD0 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     __security_check_cookie @ 0x180063BD0 (__security_check_cookie.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180066DC0 (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     _guard_dispatch_icall_nop @ 0x18006B930 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSpatialAudioFormatSubtypeInfoArray(void **a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  __int64 v4; // rbx
  int v5; // eax
  PCWSTR StringRawBuffer; // rax
  void *v7; // rcx
  __int64 v8; // rbx
  int v9; // eax
  PCWSTR v10; // rax
  void *v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  PCWSTR v14; // rax
  void *v15; // rcx
  void **cotaskmem_string_nothrow; // rax
  void **v17; // rsi
  __int64 v18; // rbx
  int v19; // eax
  PCWSTR v20; // rax
  void *v21; // rcx
  __int64 v22; // rbx
  int v23; // eax
  PCWSTR v24; // rax
  void *v25; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  LPVOID pv; // [rsp+20h] [rbp-50h] BYREF
  HSTRING v30; // [rsp+28h] [rbp-48h] BYREF
  __int64 v31[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v31[1] = -2LL;
  v31[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Media.Audio.SpatialAudioFormatSubtype", 0x2Du, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_b3de8a47_83ee_4266_a945_bedf507afeed, v31);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)ActivationFactory);
    goto LABEL_42;
  }
  v30 = 0LL;
  v4 = v31[0];
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v5 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v4 + 64LL))(v4, &v30);
  v3 = v5;
  if ( v5 < 0 )
  {
    v27 = (unsigned int)v5;
    v28 = 83LL;
    goto LABEL_61;
  }
  StringRawBuffer = WindowsGetStringRawBuffer(v30, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    StringRawBuffer,
    -1LL);
  if ( a1 + 5 == &pv )
  {
    v7 = pv;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      a1 + 5,
      pv);
    v7 = 0LL;
  }
  if ( v7 )
    CoTaskMemFree(v7);
  if ( !a1[5] )
  {
    v28 = 85LL;
LABEL_60:
    v3 = -2147024882;
    v27 = 2147942414LL;
    goto LABEL_61;
  }
  *((_BYTE *)a1 + 33) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v8 = v31[0];
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v9 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 72LL))(v8, &v30);
  v3 = v9;
  if ( v9 < 0 )
  {
    v27 = (unsigned int)v9;
    v28 = 90LL;
    goto LABEL_61;
  }
  v10 = WindowsGetStringRawBuffer(v30, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v10,
    -1LL);
  if ( a1 + 13 == &pv )
  {
    v11 = pv;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      a1 + 13,
      pv);
    v11 = 0LL;
  }
  if ( v11 )
    CoTaskMemFree(v11);
  if ( !a1[13] )
  {
    v28 = 92LL;
    goto LABEL_60;
  }
  *((_BYTE *)a1 + 97) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v12 = v31[0];
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v12 + 56LL))(v12, &v30);
  v3 = v13;
  if ( v13 < 0 )
  {
    v27 = (unsigned int)v13;
    v28 = 97LL;
    goto LABEL_61;
  }
  v14 = WindowsGetStringRawBuffer(v30, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v14,
    -1LL);
  if ( a1 + 9 == &pv )
  {
    v15 = pv;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      a1 + 9,
      pv);
    v15 = 0LL;
  }
  if ( v15 )
    CoTaskMemFree(v15);
  if ( !a1[9] )
  {
    v28 = 99LL;
    goto LABEL_60;
  }
  *((_BYTE *)a1 + 65) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  cotaskmem_string_nothrow = (void **)wil::make_cotaskmem_string_nothrow(
                                        &pv,
                                        L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}",
                                        -1LL);
  v17 = cotaskmem_string_nothrow;
  if ( a1 + 1 != cotaskmem_string_nothrow )
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      a1 + 1,
      *cotaskmem_string_nothrow);
    *v17 = 0LL;
  }
  if ( pv )
    CoTaskMemFree(pv);
  if ( !a1[1] )
  {
    v28 = 106LL;
    goto LABEL_60;
  }
  *((_BYTE *)a1 + 1) = 1;
  v18 = v31[0];
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v18 + 80LL))(v18, &v30);
  v3 = v19;
  if ( v19 < 0 )
  {
    v27 = (unsigned int)v19;
    v28 = 110LL;
    goto LABEL_61;
  }
  v20 = WindowsGetStringRawBuffer(v30, 0LL);
  wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
    &pv,
    v20,
    -1LL);
  if ( a1 + 17 == &pv )
  {
    v21 = pv;
  }
  else
  {
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
      a1 + 17,
      pv);
    v21 = 0LL;
  }
  if ( v21 )
    CoTaskMemFree(v21);
  if ( !a1[17] )
  {
    v28 = 112LL;
    goto LABEL_60;
  }
  *((_BYTE *)a1 + 129) = 1;
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v22 = v31[0];
  wil::details::unique_storage<wil::details::resource_policy<HSTRING__ *,long (*)(HSTRING__ *),&long WindowsDeleteString(HSTRING__ *),wistd::integral_constant<unsigned __int64,0>,HSTRING__ *,HSTRING__ *,0,std::nullptr_t>>::reset(
    &v30,
    0LL);
  v23 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v22 + 88LL))(v22, &v30);
  v3 = v23;
  if ( v23 >= 0 )
  {
    v24 = WindowsGetStringRawBuffer(v30, 0LL);
    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
      &pv,
      v24,
      -1LL);
    if ( a1 + 21 == &pv )
    {
      v25 = pv;
    }
    else
    {
      wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::reset(
        a1 + 21,
        pv);
      v25 = 0LL;
    }
    if ( v25 )
      CoTaskMemFree(v25);
    if ( a1[21] )
    {
      *((_BYTE *)a1 + 161) = 1;
      v3 = 0;
      goto LABEL_40;
    }
    v28 = 119LL;
    goto LABEL_60;
  }
  v27 = (unsigned int)v23;
  v28 = 117LL;
LABEL_61:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v28,
    (__int64)"onecoreuap\\private\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
    (const char *)v27);
LABEL_40:
  if ( v30 )
    WindowsDeleteString(v30);
LABEL_42:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v31);
  return v3;
}
