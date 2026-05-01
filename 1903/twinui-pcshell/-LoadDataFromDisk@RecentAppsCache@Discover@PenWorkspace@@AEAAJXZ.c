/*
 * XREFs of ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E105C
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001D85C (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??$?0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z @ 0x180040358 (--$-0PEAG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEAGUDummy@Details@23@@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800403C0 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x180069C3C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??1?$CCoTaskMemPtr@E@@QEAA@XZ @ 0x180141298 (--1-$CCoTaskMemPtr@E@@QEAA@XZ.c)
 *     ?FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801E06B0 (-FailedToParseJsonString@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E1558 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  unsigned int JsonDataFromDisk; // edi
  HANDLE FileW; // rax
  void *v4; // rbx
  DWORD FileSize; // eax
  __int64 v6; // rsi
  SIZE_T v7; // r14
  void *v8; // rcx
  int v9; // eax
  const CHAR *v10; // rdi
  const char *v11; // r9
  __int64 v12; // rbx
  int ActivationFactory; // eax
  PVOID Reserved1; // rsi
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *); // rdi
  int v17; // eax
  __int64 v18; // rcx
  __int64 v20; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID lpBuffer; // [rsp+60h] [rbp-A8h] BYREF
  WCHAR *v24; // [rsp+68h] [rbp-A0h] BYREF
  DWORD NumberOfBytesRead[2]; // [rsp+70h] [rbp-98h] BYREF
  void *v26[2]; // [rsp+78h] [rbp-90h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-80h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  WCHAR Dst[264]; // [rsp+A8h] [rbp-60h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+2F0h] [rbp+1E8h]

  v26[1] = (void *)-2LL;
  if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat", Dst, 0x104u) )
  {
    FileW = CreateFileW(Dst, 0x80000000, 1u, 0LL, 3u, 0x8000080u, 0LL);
    v4 = FileW;
    v26[0] = FileW;
    if ( FileW == (HANDLE)-1LL )
    {
      JsonDataFromDisk = -2147023728;
    }
    else
    {
      FileSize = GetFileSize(FileW, 0LL);
      v6 = FileSize;
      v7 = FileSize + 1;
      lpBuffer = 0LL;
      v9 = CTCoAllocPolicy::Alloc(v8, 1, v7, &lpBuffer);
      JsonDataFromDisk = v9;
      if ( v9 >= 0 )
      {
        v10 = (const CHAR *)lpBuffer;
        if ( ReadFile(v4, lpBuffer, v6, NumberOfBytesRead, 0LL) )
        {
          v10[v6] = 0;
          v24 = (WCHAR *)CoTaskMemAlloc(2 * v7);
          if ( MultiByteToWideChar(0xFDE9u, 0, v10, -1, v24, v7) )
          {
            v22 = 0LL;
            v28 = 0LL;
            Microsoft::WRL::Wrappers::HStringReference::CreateReference(
              &hstringHeader,
              L"Windows.Data.Json.JsonObject",
              0x1Du,
              0x1Cu);
            v12 = v28;
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v22);
            ActivationFactory = RoGetActivationFactory(v12, &GUID_2289f159_54de_45d8_abcc_22603fa066a0, &v22);
            JsonDataFromDisk = ActivationFactory;
            if ( ActivationFactory >= 0 )
            {
              v21 = 0LL;
              Reserved1 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
                            &hstringHeader,
                            (const WCHAR **)&v24)[1].Reserved.Reserved1;
              v28 = 0LL;
              v15 = v22;
              v16 = *(__int64 (__fastcall **)(__int64, PVOID, struct Windows::Data::Json::IJsonObject **, __int64 *))(*(_QWORD *)v22 + 56LL);
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v21);
              v17 = v16(v15, Reserved1, &v21, &v20);
              JsonDataFromDisk = v17;
              if ( v17 >= 0 )
              {
                if ( (_BYTE)v20 || (PenWorkspaceBrokerTelemetry::FailedToParseJsonString(v18), (_BYTE)v20) )
                  JsonDataFromDisk = PenWorkspace::Discover::RecentAppsCache::LoadJsonDataFromDisk(this, v21);
                else
                  JsonDataFromDisk = -2147467259;
              }
              else
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x22D,
                  (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                  (const char *)(unsigned int)v17);
              }
              Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&v21);
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x228,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)(unsigned int)ActivationFactory);
            }
            Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>(&v22);
          }
          else
          {
            JsonDataFromDisk = -2147467259;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x225,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)0x80004005LL);
          }
          CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>((void **)&v24);
        }
        else
        {
          JsonDataFromDisk = wil::details::in1diag3::Return_GetLastError(
                               retaddr,
                               (void *)0x220,
                               (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                               v11);
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x21D,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)v9);
      }
      CCoTaskMemPtr<unsigned char>::~CCoTaskMemPtr<unsigned char>(&lpBuffer);
    }
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(v26);
  }
  else
  {
    JsonDataFromDisk = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x213,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)0x80004005LL);
  }
  return JsonDataFromDisk;
}
