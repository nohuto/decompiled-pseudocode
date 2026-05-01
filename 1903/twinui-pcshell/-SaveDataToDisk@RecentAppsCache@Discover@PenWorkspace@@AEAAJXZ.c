/*
 * XREFs of ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E27BC
 * Callers:
 *     ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0 (-ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180103910 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$As@UIJsonValue@Json@Data@Windows@@@?$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIJsonValue@Json@Data@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x1801DEC40 (--$As@UIJsonValue@Json@Data@Windows@@@-$ComPtr@UIJsonArray@Json@Data@Windows@@@WRL@Microsoft@@QE.c)
 *     ?SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E2AF4 (-SaveDataToJson@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAPEAUIJsonObject@Json@Data@Windows.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  int v2; // eax
  unsigned int LastError; // esi
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  unsigned __int64 v8; // r9
  __int64 v9; // rdx
  const char *v10; // r9
  HANDLE FileW; // rbx
  __int64 v12; // rsi
  PCWSTR StringRawBuffer; // rax
  void *v14; // rdi
  const WCHAR *v15; // rax
  const char *v16; // r9
  HSTRING string; // [rsp+48h] [rbp-C0h] BYREF
  struct Windows::Data::Json::IJsonObject *v19; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v20[2]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR Dst[264]; // [rsp+68h] [rbp-A0h] BYREF
  WCHAR FileName[264]; // [rsp+278h] [rbp+170h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+4B0h] [rbp+3A8h]

  v20[1] = -2LL;
  v19 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v2 = PenWorkspace::Discover::RecentAppsCache::SaveDataToJson(this, &v19);
  LastError = v2;
  if ( v2 >= 0 )
  {
    v20[0] = 0LL;
    v4 = Microsoft::WRL::ComPtr<Windows::Data::Json::IJsonArray>::As<Windows::Data::Json::IJsonValue>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))&v19,
           v20);
    LastError = v4;
    if ( v4 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x2F5,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v4);
LABEL_28:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
      goto LABEL_29;
    }
    string = 0LL;
    v5 = v20[0];
    v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v20[0] + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v7 = v6(v5, &string);
    LastError = v7;
    if ( v7 >= 0 )
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
                          v10);
LABEL_27:
            WindowsDeleteString(string);
            string = 0LL;
            goto LABEL_28;
          }
          FileW = CreateFileW(FileName, 0x40000000u, 2u, 0LL, 2u, 0x8000080u, 0LL);
          v12 = -1LL;
          if ( FileW != (HANDLE)-1LL )
          {
            StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
            do
              ++v12;
            while ( StringRawBuffer[v12] );
            v14 = CoTaskMemAlloc((unsigned int)v12);
            v15 = WindowsGetStringRawBuffer(string, 0LL);
            if ( WideCharToMultiByte(0xFDE9u, 0, v15, v12, (LPSTR)v14, v12, 0LL, 0LL) )
            {
              if ( WriteFile(FileW, v14, v12, 0LL, 0LL) )
                LastError = 0;
              else
                LastError = wil::details::in1diag3::Return_GetLastError(
                              retaddr,
                              (void *)0x30E,
                              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
                              v16);
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
            CoTaskMemFree(v14);
            if ( FileW )
              CloseHandle(FileW);
            goto LABEL_27;
          }
          LastError = -2147023728;
          v9 = 776LL;
        }
        else
        {
          LastError = -2147467259;
          v9 = 766LL;
        }
      }
      else
      {
        LastError = -2147467259;
        v9 = 763LL;
      }
      v8 = LastError;
    }
    else
    {
      v8 = (unsigned int)v7;
      v9 = 760LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)v8);
    goto LABEL_27;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2F2,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
    (const char *)(unsigned int)v2);
LABEL_29:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return LastError;
}
