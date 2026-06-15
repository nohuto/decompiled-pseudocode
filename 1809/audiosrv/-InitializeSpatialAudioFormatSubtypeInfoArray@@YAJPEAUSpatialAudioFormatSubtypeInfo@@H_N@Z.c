/*
 * XREFs of ?InitializeSpatialAudioFormatSubtypeInfoArray@@YAJPEAUSpatialAudioFormatSubtypeInfo@@H_N@Z @ 0x180042730
 * Callers:
 *     ?RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z @ 0x180068220 (-RefreshSpatialAudioLicenseModelState@AtmosCheck@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18000FCFC (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180042B80 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005F87C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180060590 (__security_check_cookie.c)
 *     memset_0 @ 0x18006158E (memset_0.c)
 *     _invalid_parameter_noinfo @ 0x18006165A (_invalid_parameter_noinfo.c)
 *     memcpy_0 @ 0x1800688A3 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800688D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSpatialAudioFormatSubtypeInfoArray(struct SpatialAudioFormatSubtypeInfo *a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // ebx
  int v4; // eax
  PCWSTR StringRawBuffer; // rax
  void **v6; // rdi
  void *v7; // rsi
  HSTRING v8; // rdi
  DWORD v9; // ebx
  int v10; // eax
  PCWSTR v11; // rax
  void **v12; // rdi
  void *v13; // rsi
  HSTRING v14; // rdi
  DWORD v15; // ebx
  int v16; // eax
  PCWSTR v17; // rax
  void **v18; // rdi
  void *v19; // rsi
  HSTRING v20; // rdi
  DWORD v21; // ebx
  __int64 v22; // rcx
  const wchar_t *v23; // rax
  size_t v24; // rbx
  size_t v25; // rdi
  char *v26; // rax
  char *v27; // rsi
  void **v28; // rdi
  void *v29; // r14
  __int64 v30; // rsi
  HSTRING v31; // rdi
  int v32; // eax
  PCWSTR v33; // rax
  void **v34; // rdi
  void *v35; // rsi
  HSTRING v36; // rdi
  DWORD v37; // ebx
  int v38; // eax
  PCWSTR v39; // rax
  void **v40; // rdi
  void *v41; // rsi
  DWORD LastError; // ebx
  DWORD v44; // ebx
  DWORD v45; // ebx
  __int64 v46; // rcx
  DWORD v47; // ebx
  DWORD v48; // ebx
  DWORD v49; // ebx
  DWORD v50; // ebx
  HSTRING v51; // [rsp+20h] [rbp-50h] BYREF
  LPVOID pv; // [rsp+28h] [rbp-48h] BYREF
  __int64 v53[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v53[1] = -2LL;
  v53[0] = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Media.Audio.SpatialAudioFormatSubtype", 0x2Du, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_b3de8a47_83ee_4266_a945_bedf507afeed, v53);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x4E,
      (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
      (const char *)(unsigned int)ActivationFactory,
      (int)v51);
  }
  else
  {
    v51 = 0LL;
    v4 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v53[0] + 64LL))(v53[0], &v51);
    v3 = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x53,
        (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
        (const char *)(unsigned int)v4,
        (int)v51);
    }
    else
    {
      StringRawBuffer = WindowsGetStringRawBuffer(v51, 0LL);
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        &pv,
        StringRawBuffer,
        -1LL);
      v6 = (void **)((char *)a1 + 40);
      if ( (LPVOID *)((char *)a1 + 40) == &pv )
      {
        if ( pv )
          CoTaskMemFree(pv);
      }
      else
      {
        v7 = *v6;
        if ( *v6 )
        {
          LastError = GetLastError();
          CoTaskMemFree(v7);
          SetLastError(LastError);
        }
        *v6 = pv;
      }
      if ( *v6 )
      {
        *((_BYTE *)a1 + 33) = 1;
        v8 = v51;
        if ( v51 )
        {
          v9 = GetLastError();
          WindowsDeleteString(v8);
          SetLastError(v9);
        }
        v51 = 0LL;
        v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v53[0] + 72LL))(v53[0], &v51);
        v3 = v10;
        if ( v10 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x5A,
            (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
            (const char *)(unsigned int)v10,
            (int)v51);
        }
        else
        {
          v11 = WindowsGetStringRawBuffer(v51, 0LL);
          wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
            &pv,
            v11,
            -1LL);
          v12 = (void **)((char *)a1 + 104);
          if ( (LPVOID *)((char *)a1 + 104) == &pv )
          {
            if ( pv )
              CoTaskMemFree(pv);
          }
          else
          {
            v13 = *v12;
            if ( *v12 )
            {
              v44 = GetLastError();
              CoTaskMemFree(v13);
              SetLastError(v44);
            }
            *v12 = pv;
          }
          if ( *v12 )
          {
            *((_BYTE *)a1 + 97) = 1;
            v14 = v51;
            if ( v51 )
            {
              v15 = GetLastError();
              WindowsDeleteString(v14);
              SetLastError(v15);
            }
            v51 = 0LL;
            v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v53[0] + 56LL))(v53[0], &v51);
            v3 = v16;
            if ( v16 < 0 )
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x61,
                (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                (const char *)(unsigned int)v16,
                (int)v51);
            }
            else
            {
              v17 = WindowsGetStringRawBuffer(v51, 0LL);
              wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
                &pv,
                v17,
                -1LL);
              v18 = (void **)((char *)a1 + 72);
              if ( (LPVOID *)((char *)a1 + 72) == &pv )
              {
                if ( pv )
                  CoTaskMemFree(pv);
              }
              else
              {
                v19 = *v18;
                if ( *v18 )
                {
                  v45 = GetLastError();
                  CoTaskMemFree(v19);
                  SetLastError(v45);
                }
                *v18 = pv;
              }
              if ( *v18 )
              {
                *((_BYTE *)a1 + 65) = 1;
                v20 = v51;
                if ( v51 )
                {
                  v21 = GetLastError();
                  WindowsDeleteString(v20);
                  SetLastError(v21);
                }
                v51 = 0LL;
                v22 = 0x7FFFFFFFLL;
                v23 = L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}";
                do
                {
                  if ( !*v23 )
                    break;
                  ++v23;
                  --v22;
                }
                while ( v22 );
                v24 = 2 * (v23 - L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}");
                v25 = v24 + 2;
                v26 = (char *)CoTaskMemAlloc(v24 + 2);
                v27 = v26;
                if ( v26 )
                {
                  if ( v24 )
                  {
                    if ( v25 < v24 )
                    {
                      memset_0(v26, 0, v25);
                      *(_DWORD *)_o__errno(v46) = 34;
                      invalid_parameter_noinfo();
                    }
                    else
                    {
                      memcpy_0(v26, L"{8f3bbd02-6bbe-4b60-9f8b-406837ce466f}", v24);
                    }
                  }
                  *(_WORD *)&v27[v24] = 0;
                }
                v28 = (void **)((char *)a1 + 8);
                if ( (LPVOID *)((char *)a1 + 8) == &pv )
                {
                  if ( v27 )
                    CoTaskMemFree(v27);
                }
                else
                {
                  v29 = *v28;
                  if ( *v28 )
                  {
                    v47 = GetLastError();
                    CoTaskMemFree(v29);
                    SetLastError(v47);
                  }
                  *v28 = v27;
                }
                if ( *v28 )
                {
                  *((_BYTE *)a1 + 1) = 1;
                  v30 = v53[0];
                  v31 = v51;
                  if ( v51 )
                  {
                    v48 = GetLastError();
                    WindowsDeleteString(v31);
                    SetLastError(v48);
                  }
                  v51 = 0LL;
                  v32 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v30 + 80LL))(v30, &v51);
                  v3 = v32;
                  if ( v32 < 0 )
                  {
                    wil::details::in1diag3::Return_Hr(
                      retaddr,
                      (void *)0x6E,
                      (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                      (const char *)(unsigned int)v32,
                      (int)v51);
                  }
                  else
                  {
                    v33 = WindowsGetStringRawBuffer(v51, 0LL);
                    wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
                      &pv,
                      v33,
                      -1LL);
                    v34 = (void **)((char *)a1 + 136);
                    if ( (LPVOID *)((char *)a1 + 136) == &pv )
                    {
                      if ( pv )
                        CoTaskMemFree(pv);
                    }
                    else
                    {
                      v35 = *v34;
                      if ( *v34 )
                      {
                        v49 = GetLastError();
                        CoTaskMemFree(v35);
                        SetLastError(v49);
                      }
                      *v34 = pv;
                    }
                    if ( *v34 )
                    {
                      *((_BYTE *)a1 + 129) = 1;
                      v36 = v51;
                      if ( v51 )
                      {
                        v37 = GetLastError();
                        WindowsDeleteString(v36);
                        SetLastError(v37);
                      }
                      v51 = 0LL;
                      v38 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v53[0] + 88LL))(v53[0], &v51);
                      v3 = v38;
                      if ( v38 < 0 )
                      {
                        wil::details::in1diag3::Return_Hr(
                          retaddr,
                          (void *)0x75,
                          (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                          (const char *)(unsigned int)v38,
                          (int)v51);
                      }
                      else
                      {
                        v39 = WindowsGetStringRawBuffer(v51, 0LL);
                        wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
                          &pv,
                          v39,
                          -1LL);
                        v40 = (void **)((char *)a1 + 168);
                        if ( (LPVOID *)((char *)a1 + 168) == &pv )
                        {
                          if ( pv )
                            CoTaskMemFree(pv);
                        }
                        else
                        {
                          v41 = *v40;
                          if ( *v40 )
                          {
                            v50 = GetLastError();
                            CoTaskMemFree(v41);
                            SetLastError(v50);
                          }
                          *v40 = pv;
                        }
                        if ( *v40 )
                        {
                          *((_BYTE *)a1 + 161) = 1;
                          v3 = 0;
                        }
                        else
                        {
                          v3 = -2147024882;
                          wil::details::in1diag3::Return_Hr(
                            retaddr,
                            (void *)0x77,
                            (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                            (const char *)0x8007000ELL,
                            (int)v51);
                        }
                      }
                    }
                    else
                    {
                      v3 = -2147024882;
                      wil::details::in1diag3::Return_Hr(
                        retaddr,
                        (void *)0x70,
                        (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                        (const char *)0x8007000ELL,
                        (int)v51);
                    }
                  }
                }
                else
                {
                  v3 = -2147024882;
                  wil::details::in1diag3::Return_Hr(
                    retaddr,
                    (void *)0x6A,
                    (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                    (const char *)0x8007000ELL,
                    (int)v51);
                }
              }
              else
              {
                v3 = -2147024882;
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x63,
                  (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
                  (const char *)0x8007000ELL,
                  (int)v51);
              }
            }
          }
          else
          {
            v3 = -2147024882;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x5C,
              (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
              (const char *)0x8007000ELL,
              (int)v51);
          }
        }
      }
      else
      {
        v3 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x55,
          (unsigned int)"internal\\avcore\\inc\\spatialaudiolicensebrokerutil.h",
          (const char *)0x8007000ELL,
          (int)v51);
      }
    }
    if ( v51 )
      WindowsDeleteString(v51);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(v53);
  return v3;
}
