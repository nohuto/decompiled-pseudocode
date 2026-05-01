/*
 * XREFs of ?LoadOEMApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJU_FILETIME@@PEAH@Z @ 0x1801E1B58
 * Callers:
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E13B4 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 * Callees:
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x1800402F0 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18006A5CC (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@U?$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FF570 (--1-$ComPtr@U-$IVectorView@PEAVCoreInputViewOcclusion@Core@ViewManagement@UI@Windows@@@Collectio.c)
 *     ??1last_error_context@wil@@QEAA@XZ @ 0x180100284 (--1last_error_context@wil@@QEAA@XZ.c)
 *     ??$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z @ 0x1801DED2C (--$OemAppLoaded@AEAPEBG@PenWorkspaceBrokerTelemetry@@SAXAEAPEBG@Z.c)
 *     ??0?$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@details@@QEAA@PEAUIObjectArray@@@Z @ 0x1801DFCB8 (--0-$ObjectArrayAdapterImpl@UIImmersiveMonitor@@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@d.c)
 *     ??0Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@QEAA@QEAV12@I@Z @ 0x1801DFD34 (--0Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWorkspaceLayoutIte.c)
 *     ?GetCurrentObject@Iterator@?$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V?$ComPtr@UIPenWorkspaceLayoutItem@@@WRL@Microsoft@@@details@@AEAAXXZ @ 0x1801E08A8 (-GetCurrentObject@Iterator@-$ObjectArrayAdapterImpl@UIPenWorkspaceLayoutItem@@V-$ComPtr@UIPenWor.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801E23C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 *     ?GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z @ 0x1801E4F20 (-GetApplicationUserModelIdFromLinkFile@Discover@PenWorkspace@@YAJQEAUHSTRING__@@PEAPEAU3@@Z.c)
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
  void (__fastcall *v8)(LPVOID, __int64, __int64 *); // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  int (__fastcall *v11)(__int64, HSTRING *); // r14
  HSTRING v12; // rdi
  HSTRING v13; // rcx
  HSTRING_HEADER *v14; // rbx
  HSTRING *v15; // r8
  const unsigned __int16 *v16; // rax
  HSTRING v18; // [rsp+38h] [rbp-89h] BYREF
  HSTRING v19; // [rsp+40h] [rbp-81h] BYREF
  HSTRING string; // [rsp+48h] [rbp-79h] BYREF
  __int64 v21; // [rsp+50h] [rbp-71h] BYREF
  LPVOID ppv; // [rsp+58h] [rbp-69h] BYREF
  const unsigned __int16 *StringRawBuffer; // [rsp+60h] [rbp-61h] BYREF
  struct _FILETIME v24; // [rsp+68h] [rbp-59h] BYREF
  _BYTE v25[4]; // [rsp+70h] [rbp-51h] BYREF
  DWORD LastError; // [rsp+74h] [rbp-4Dh]
  __int64 v27; // [rsp+78h] [rbp-49h] BYREF
  unsigned int v28; // [rsp+80h] [rbp-41h] BYREF
  __int64 v29[2]; // [rsp+88h] [rbp-39h] BYREF
  __int64 v30; // [rsp+98h] [rbp-29h] BYREF
  int v31; // [rsp+A0h] [rbp-21h]
  int v32; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v33[3]; // [rsp+B0h] [rbp-11h] BYREF
  HSTRING_HEADER v34; // [rsp+C8h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+5Fh]

  v33[2] = -2LL;
  *a3 = 0;
  v18 = (HSTRING)(*(_QWORD *)&a2 + 100000000LL);
  v24 = (struct _FILETIME)(*(_QWORD *)&a2 + 100000000LL);
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
  v21 = 0LL;
  v7 = ppv;
  v8 = *(void (__fastcall **)(LPVOID, __int64, __int64 *))(*(_QWORD *)ppv + 32LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
  v8(v7, 1LL, &v21);
  if ( !v21 )
    goto LABEL_25;
  details::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>::ObjectArrayAdapterImpl<IImmersiveMonitor,Microsoft::WRL::ComPtr<IImmersiveMonitor>>(
    (__int64)&v30,
    v21);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v28,
    (__int64)&v30,
    0);
  details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::Iterator(
    (__int64)&v32,
    (__int64)&v30,
    v31);
  while ( v28 != v32 || v29[1] != v33[1] )
  {
    v9 = v29[0];
    v27 = v29[0];
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v27);
    string = 0LL;
    v19 = 0LL;
    v10 = *(_QWORD *)v9;
    string = 0LL;
    if ( (*(int (__fastcall **)(__int64, HSTRING *))(v10 + 24))(v9, &string) < 0 )
    {
      v11 = *(int (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v9 + 32LL);
      v12 = v19;
      if ( v19 )
      {
        v25[0] = 0;
        LastError = GetLastError();
        WindowsDeleteString(v12);
        wil::last_error_context::~last_error_context((wil::last_error_context *)v25);
      }
      v19 = 0LL;
      if ( v11(v9, &v19) >= 0 )
      {
        v13 = v19;
        if ( !v19 )
          goto LABEL_19;
        StringRawBuffer = WindowsGetStringRawBuffer(v19, 0LL);
        v18 = 0LL;
        v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v34, &StringRawBuffer);
        WindowsDeleteString(v18);
        v18 = 0LL;
        if ( (int)PenWorkspace::Discover::GetApplicationUserModelIdFromLinkFile(
                    (HSTRING)v14[1].Reserved.Reserved1,
                    (HSTRING)&v18,
                    v15) >= 0 )
        {
          v16 = WindowsGetStringRawBuffer(v18, 0LL);
          if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, v16, &v24) >= 0 )
          {
            PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
            ++*a3;
          }
        }
        WindowsDeleteString(v18);
        v18 = 0LL;
      }
    }
    else
    {
      StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
      if ( (int)PenWorkspace::Discover::RecentAppsCache::PrependDefaultApp(this, StringRawBuffer, &v24) >= 0 )
      {
        PenWorkspaceBrokerTelemetry::OemAppLoaded<unsigned short const * &>(&StringRawBuffer);
        ++*a3;
      }
    }
    v13 = v19;
LABEL_19:
    if ( v13 )
      WindowsDeleteString(v13);
    if ( string )
      WindowsDeleteString(string);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v27);
    ++v28;
    details::ObjectArrayAdapterImpl<IPenWorkspaceLayoutItem,Microsoft::WRL::ComPtr<IPenWorkspaceLayoutItem>>::Iterator::GetCurrentObject(&v28);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v33);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v29);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v30);
LABEL_25:
  v6 = 0;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v21);
LABEL_26:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>::~ComPtr<Windows::Foundation::Collections::IVectorView<Windows::UI::ViewManagement::Core::CoreInputViewOcclusion *>>((__int64 *)&ppv);
  return v6;
}
