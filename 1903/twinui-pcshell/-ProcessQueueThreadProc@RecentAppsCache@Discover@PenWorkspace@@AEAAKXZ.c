/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800FF1B0
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x1801E4050 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001D1A0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18004DC78 (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800609CC (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072ADC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18008BBC0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B0F80 (_guard_dispatch_icall_nop.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x180167508 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801E064C (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x1801E07D8 (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E105C (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E13B4 (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E256C (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x1801E27BC (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HRESULT Instance; // eax
  int v3; // edi
  int Defaults; // eax
  struct _FILETIME v6; // rax
  unsigned __int64 v7; // rax
  __int64 v8; // r14
  DWORD v9; // eax
  const char *v10; // r9
  __int64 v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  int v14; // r15d
  int v15; // eax
  RTL_SRWLOCK *v16; // rdi
  volatile signed __int32 *v17; // rdi
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rax
  int v21; // eax
  int v22; // eax
  struct _FILETIME FileTime; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v24; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v25[4]; // [rsp+40h] [rbp-30h]
  __int64 v26; // [rsp+50h] [rbp-20h]
  _SYSTEMTIME SystemTime; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v26 = -2LL;
  CoInitializeEx(0LL, 2u);
  if ( *((_QWORD *)this + 23)
    || (Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 23),
        Instance = CoCreateInstance(
                     &CLSID_StartMenuCacheAndAppResolver,
                     0LL,
                     3u,
                     &GUID_de25675a_72de_44b4_9373_05170450c140,
                     (LPVOID *)this + 23),
        v3 = Instance,
        Instance >= 0) )
  {
    v3 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x19F,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)Instance);
  }
  if ( v3 >= 0 )
  {
    if ( (int)PenWorkspace::Discover::RecentAppsCache::LoadDataFromDisk(this) < 0 )
    {
      PenWorkspaceBrokerTelemetry::FailedToLoadDataFromDisk();
      Defaults = PenWorkspace::Discover::RecentAppsCache::LoadDefaults(this);
      if ( Defaults < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x150,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
          (const char *)(unsigned int)Defaults);
    }
    anonymous_namespace_::GetCurTime((LPFILETIME)this + 22);
    FileTime = (struct _FILETIME)(*((_QWORD *)this + 22) + 72000000000LL);
    v6 = FileTime;
    *((_DWORD *)this + 44) = FileTime.dwLowDateTime;
    v7 = HIDWORD(*(unsigned __int64 *)&v6);
    v8 = 0LL;
LABEL_11:
    *((_DWORD *)this + 45) = v7;
    while ( 1 )
    {
      if ( !v8 )
      {
        v9 = WaitForSingleObjectEx(*((HANDLE *)this + 19), 0xFFFFFFFF, 0);
        if ( v9 != 258 && v9 )
        {
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            2512LL,
            (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
            v10);
          __debugbreak();
        }
        if ( v9 )
          break;
      }
      if ( *((_BYTE *)this + 200) )
        break;
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      v24 = (RTL_SRWLOCK *)((char *)this + 160);
      v11 = *((_QWORD *)this + 17);
      if ( v11 )
      {
        v12 = (_QWORD *)*((_QWORD *)this + 13);
        if ( v12 )
          v12 = (_QWORD *)*v12;
        v13 = *(_QWORD *)(v12[1] + 8 * (*((_QWORD *)this + 16) & (v12[2] - 1LL)));
        *(_QWORD *)v25 = *(_QWORD *)v13;
        v14 = *(_DWORD *)(v13 + 8);
        *((_QWORD *)this + 17) = v11 - 1;
        if ( v11 == 1 )
          *((_QWORD *)this + 16) = 0LL;
        else
          ++*((_QWORD *)this + 16);
        v8 = v11 - 1;
        if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
        GetSystemTime(&SystemTime);
        SystemTimeToFileTime(&SystemTime, &FileTime);
        v15 = *((_DWORD *)this + 20);
        if ( v15 )
        {
          if ( v15 == v25[0] )
          {
            v16 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
            AcquireSRWLockExclusive(v16);
            *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v14;
            *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime;
            if ( v16 )
              ReleaseSRWLockExclusive(v16);
          }
        }
        *((_DWORD *)this + 20) = 0;
        *((_QWORD *)this + 11) = 0LL;
        v17 = (volatile signed __int32 *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = 0LL;
        if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v17)(v17);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v17);
        }
        if ( v25[1] )
          PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v25[1], &FileTime);
        if ( CompareFileTime(&FileTime, (const FILETIME *)this + 22) > 0 )
        {
          v18 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x187,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v18);
          v19 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x189,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v19);
          v20 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          v7 = HIDWORD(v20);
          goto LABEL_11;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v24);
      }
    }
    v21 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x18F,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v21);
    v22 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x192,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v22);
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 1LL;
  }
  else
  {
    CoUninitialize();
    (*(void (__fastcall **)(PenWorkspace::Discover::RecentAppsCache *))(*(_QWORD *)this + 16LL))(this);
    return 0LL;
  }
}
