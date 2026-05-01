/*
 * XREFs of ?MarshalObjectToPropertySet@CLaunchActivatedEventArgs@@UEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061490
 * Callers:
 *     <none>
 * Callees:
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800436F0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180061750 (-MarshalObjectToPropertySet@CActivatedEventArgsWithPrelaunchAndViewIdBase@@QEAAJPEAUIPropertySet.c)
 *     ??$GetActivationFactory@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180062354 (--$GetActivationFactory@V-$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Fo.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D3F20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLaunchActivatedEventArgs::MarshalObjectToPropertySet(
        CLaunchActivatedEventArgs *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  int v9; // eax
  int v10; // eax
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rbx
  __int64 v15; // rbx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rbx
  int v26; // [rsp+20h] [rbp-39h]
  _BYTE v27[8]; // [rsp+30h] [rbp-29h] BYREF
  __int64 v28; // [rsp+38h] [rbp-21h] BYREF
  HSTRING string; // [rsp+40h] [rbp-19h] BYREF
  HSTRING v30; // [rsp+48h] [rbp-11h] BYREF
  __int64 v31; // [rsp+50h] [rbp-9h] BYREF
  __int64 v32; // [rsp+58h] [rbp-1h] BYREF
  __int64 v33; // [rsp+60h] [rbp+7h] BYREF
  __int64 v34; // [rsp+68h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+17h] BYREF
  __int64 v36; // [rsp+88h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v4 = CActivatedEventArgsWithPrelaunchAndViewIdBase::MarshalObjectToPropertySet(
         (CLaunchActivatedEventArgs *)((char *)this - 232),
         a2);
  v5 = v4;
  if ( v4 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
      (const char *)(unsigned int)v4,
      v26);
    return v5;
  }
  v28 = 0LL;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  v6 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))a2)(
         a2,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v28);
  v5 = v6;
  if ( v6 < 0 )
  {
    v22 = 105LL;
LABEL_24:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v22,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
      (const char *)(unsigned int)v6,
      v26);
    goto LABEL_19;
  }
  v36 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Foundation.PropertyValue",
    0x21u,
    0x20u);
  v6 = Windows::Foundation::GetActivationFactory<Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValueStatics>>(
         v36,
         &v34);
  v5 = v6;
  if ( v6 < 0 )
  {
    v22 = 106LL;
    goto LABEL_24;
  }
  v30 = 0LL;
  WindowsDeleteString(0LL);
  v30 = 0LL;
  v7 = (*(__int64 (__fastcall **)(char *, HSTRING *))(*((_QWORD *)this - 2) + 48LL))((char *)this - 16, &v30);
  v5 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
      (const char *)(unsigned int)v7,
      v26);
    goto LABEL_18;
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  v8 = *((_QWORD *)this - 2);
  string = 0LL;
  v9 = (*(__int64 (__fastcall **)(char *, HSTRING *))(v8 + 56))((char *)this - 16, &string);
  v5 = v9;
  if ( v9 >= 0 )
  {
    v33 = 0LL;
    v10 = (*(__int64 (__fastcall **)(char *, __int64 *))(*((_QWORD *)this - 1) + 48LL))((char *)this - 8, &v33);
    v5 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x74,
        (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
        (const char *)(unsigned int)v10,
        v26);
LABEL_15:
      v20 = v33;
      if ( v33 )
      {
        v33 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
      }
      goto LABEL_17;
    }
    v11 = v34;
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
    v12 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v11 + 144LL))(v11, v30, &v32);
    v5 = v12;
    if ( v12 < 0 )
    {
      v23 = 120LL;
    }
    else
    {
      v13 = v28;
      v14 = v32;
      v27[0] = 0;
      v36 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"Arguments", 0xAu, 9u);
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v13 + 80LL))(v13, v36, v14, v27);
      v5 = v12;
      if ( v12 >= 0 )
      {
        v15 = v34;
        v31 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
        v16 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v15 + 144LL))(v15, string, &v31);
        v5 = v16;
        if ( v16 < 0 )
        {
          v24 = 125LL;
        }
        else
        {
          v17 = v28;
          v18 = v31;
          v36 = 0LL;
          Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"TileId", 7u, 6u);
          v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v17 + 80LL))(
                  v17,
                  v36,
                  v18,
                  v27);
          v5 = v16;
          if ( v16 < 0 )
          {
            v24 = 126LL;
          }
          else
          {
            v19 = v33;
            if ( !v33
              || (v25 = v28,
                  v36 = 0LL,
                  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
                    &hstringHeader,
                    L"TileActivatedInfo",
                    0x12u,
                    0x11u),
                  v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _BYTE *))(*(_QWORD *)v25 + 80LL))(
                          v25,
                          v36,
                          v19,
                          v27),
                  v5 = v16,
                  v16 >= 0) )
            {
              v5 = 0;
LABEL_13:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
LABEL_14:
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
              goto LABEL_15;
            }
            v24 = 130LL;
          }
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v24,
          (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
          (const char *)(unsigned int)v16,
          v26);
        goto LABEL_13;
      }
      v23 = 122LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v23,
      (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
      (const char *)(unsigned int)v12,
      v26);
    goto LABEL_14;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x71,
    (unsigned int)"onecoreuap\\shell\\lib\\activationevents\\launchactivated.cpp",
    (const char *)(unsigned int)v9,
    v26);
LABEL_17:
  WindowsDeleteString(string);
  string = 0LL;
LABEL_18:
  WindowsDeleteString(v30);
  v30 = 0LL;
LABEL_19:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v28);
  return v5;
}
