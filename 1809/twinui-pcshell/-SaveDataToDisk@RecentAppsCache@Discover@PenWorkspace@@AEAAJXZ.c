/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019B8EC
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180077188 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180197C44 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonObject@Json@Data@Windows@@@WRL@Microsoft@@Q.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x18019BC20 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v2; // eax
  unsigned int LastError; // esi
  int v4; // eax
  __int64 v5; // rbx
  int v6; // eax
  unsigned __int64 v7; // r9
  __int64 v8; // rdx
  const char *v9; // r9
  HANDLE FileW; // rbx
  __int64 v11; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v13; // rdi
  const WCHAR *v14; // rax
  const char *v15; // r9
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v18; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v19[2]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Dst[264]; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR FileName[264]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  v19[1] = -2LL;
  v18 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  v2 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, &v18);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v19[0] = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonObject>::As<Windows::Data::Json::IJsonValue>(&v18, v19);
    LastError = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F5,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v4);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v19);
      goto LABEL_29;
    }
    v5 = v19[0];
    WindowsDeleteString(0LL);
    string = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v5 + 56LL))(v5, &string);
    LastError = v6;
    if ( v6 >= 0 )
    {
      if ( ExpandEnvironmentStringsW(L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace", Dst, 0x104u) )
      {
        if ( ExpandEnvironmentStringsW(
               L"%LOCALAPPDATA%\\Microsoft\\PenWorkspace\\DiscoverCacheData.dat",
               FileName,
               0x104u) )
        {
          if ( GetFileAttributesW(Dst) == -1 && !CreateDirectoryW(Dst, 0LL) )
          {
            LastError = wil::details::in1diag3::Return_GetLastError(
                          retaddr,
                          (void *)0x304,
                          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                          v9);
LABEL_27:
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_28;
          }
          FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
          v11 = -1LL;
          if ( FileW != (HANDLE)-1LL )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            do
              ++v11;
            while ( StringRawBuffer[v11] );
            v13 = CoTaskMemAlloc((unsigned int)v11);
            v14 = WindowsGetStringRawBuffer(string, 0LL);
            if ( WideCharToMultiByte(0xFDE9u, 0, v14, v11, (LPSTR)v13, v11, 0LL, 0LL) )
            {
              if ( WriteFile(FileW, v13, v11, 0LL, 0LL) )
                LastError = 0;
              else
                LastError = wil::details::in1diag3::Return_GetLastError(
                              retaddr,
                              (void *)0x30E,
                              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                              v15);
            }
            else
            {
              LastError = -2147467259;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x30C,
                (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                (const char *)0x80004005LL);
            }
            CoTaskMemFree(v13);
            if ( FileW )
              CloseHandle(FileW);
            goto LABEL_27;
          }
          LastError = -2147023728;
          v8 = 776LL;
        }
        else
        {
          LastError = -2147467259;
          v8 = 766LL;
        }
      }
      else
      {
        LastError = -2147467259;
        v8 = 763LL;
      }
      v7 = LastError;
    }
    else
    {
      v7 = (unsigned int)v6;
      v8 = 760LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)v7);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F2,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v2);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
  return LastError;
}
