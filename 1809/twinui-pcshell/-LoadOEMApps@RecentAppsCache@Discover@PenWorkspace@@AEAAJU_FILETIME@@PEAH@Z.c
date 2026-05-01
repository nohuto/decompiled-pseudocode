/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x18019AC90
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A50C (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180025DE0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006C60C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x180197D24 (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x180198D54 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x180198DD0 (--0Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutIte.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x180199A2C (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWor.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x18019B480 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x18019DF64 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
 */

// Hidden C++ exception states: #wind=10
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::LoadOEMApps(
        PenWorkspace::Discover::RecentAppsCache *this,
        struct _FILETIME a2,
        int *a3)
{
  HRESULT v5; // eax
  unsigned int v6; // ebx
  LPVOID v7; // rbx
  __int64 v8; // rbx
  HSTRING v9; // r14
  DWORD LastError; // edi
  HSTRING v11; // rcx
  HSTRING_HEADER *v12; // rbx
  HSTRING *v13; // r8
  const unsigned __int16 *v14; // rax
  HSTRING v16; // [rsp+38h] [rbp-79h] BYREF
  HSTRING v17; // [rsp+40h] [rbp-71h] BYREF
  __int64 v18; // [rsp+48h] [rbp-69h] BYREF
  LPVOID ppv; // [rsp+50h] [rbp-61h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+58h] [rbp-59h] BYREF
  struct _FILETIME v21; // [rsp+60h] [rbp-51h] BYREF
  HSTRING string; // [rsp+68h] [rbp-49h] BYREF
  __int64 v23; // [rsp+70h] [rbp-41h] BYREF
  __int64 v24; // [rsp+78h] [rbp-39h] BYREF
  __int64 v25[2]; // [rsp+80h] [rbp-31h] BYREF
  __int64 v26; // [rsp+90h] [rbp-21h] BYREF
  int v27; // [rsp+98h] [rbp-19h]
  int v28; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v29[3]; // [rsp+A8h] [rbp-9h] BYREF
  HSTRING_HEADER v30; // [rsp+C0h] [rbp+Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+110h] [rbp+5Fh]

  v29[2] = -2LL;
  *a3 = 0;
  v16 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v21 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
  ppv = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  v5 = CoCreateInstance(
         &CLSID_PenWorkspaceLayoutPolicyManager,
         0LL,
         1u,
         &GUID_9302a129_7433_42a0_9cb8_5da5964f2756,
         &ppv);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B4,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_26;
  }
  v18 = 0LL;
  v7 = ppv;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
  (*(void (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)v7 + 32LL))(v7, 1LL, &v18);
  if ( !v18 )
    goto LABEL_25;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v26,
    v18);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v24,
    (__int64)&v26,
    0);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v28,
    (__int64)&v26,
    v27);
  while ( (_DWORD)v24 != v28 || v25[1] != v29[1] )
  {
    v8 = v25[0];
    v23 = v25[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v23);
    v17 = 0LL;
    string = 0LL;
    if ( (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 24LL))(v8, &string) < 0 )
    {
      v9 = v17;
      if ( v17 )
      {
        LastError = GetLastError();
        WindowsDeleteString(v9);
        SetLastError(LastError);
      }
      v17 = 0LL;
      if ( (*(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v8 + 32LL))(v8, &v17) >= 0 )
      {
        v11 = v17;
        if ( !v17 )
          goto LABEL_19;
        StringRawBuffer = WindowsGetStringRawBuffer(v17, 0LL);
        v16 = 0LL;
        v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &StringRawBuffer);
        WindowsDeleteString(v16);
        v16 = 0LL;
        if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                    (HSTRING)v12[1].Reserved.Reserved1,
                    (HSTRING)&v16,
                    v13) >= 0 )
        {
          v14 = WindowsGetStringRawBuffer(v16, 0LL);
          if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v14, &v21) >= 0 )
          {
            PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
            ++*a3;
          }
        }
        WindowsDeleteString(v16);
        v16 = 0LL;
      }
    }
    else
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v21) >= 0 )
      {
        PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
        ++*a3;
      }
    }
    v11 = v17;
LABEL_19:
    if ( v11 )
      WindowsDeleteString(v11);
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v23);
    LODWORD(v24) = v24 + 1;
    details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::GetCurrentObject(&v24);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v25);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v26);
LABEL_25:
  v6 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
LABEL_26:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&ppv);
  return v6;
}
