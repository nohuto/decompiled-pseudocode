/*
 * XREFs of ?ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@AEAAKXZ @ 0x1800DD46C
 * Callers:
 *     ?s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z @ 0x18019D0B0 (-s_ProcessQueueThreadProc@RecentAppsCache@Discover@PenWorkspace@@CAKPEAX@Z.c)
 * Callees:
 *     ?InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ @ 0x18000EF5C (-InternalUnlock@SyncLockExclusive@Details@Wrappers@WRL@Microsoft@@AEAAXXZ.c)
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x180040220 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18005C2F8 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180081224 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009B300 (_guard_dispatch_icall_nop.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800DF27C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18013C4F8 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ @ 0x1801997D8 (-FailedToLoadDataFromDisk@PenWorkspaceBrokerTelemetry@@SAXXZ.c)
 *     _anonymous_namespace_::GetCurTime @ 0x18019995C (_anonymous_namespace_--GetCurTime.c)
 *     ?LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A198 (-LoadDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019A50C (-LoadDefaults@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019B624 (-PurgeLowUsageApps@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 *     ?SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ @ 0x18019B8EC (-SaveDataToDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::ProcessQueueThreadProc(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  HRESULT Instance; // eax
  int v3; // ebx
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
  __int64 v15; // rax
  int v16; // eax
  RTL_SRWLOCK *v17; // rbx
  volatile signed __int32 *v18; // rbx
  int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rax
  int v22; // eax
  int v23; // eax
  struct _FILETIME FileTime; // [rsp+30h] [rbp-40h] BYREF
  RTL_SRWLOCK *v25; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v26[4]; // [rsp+40h] [rbp-30h]
  __int64 v27; // [rsp+50h] [rbp-20h]
  _SYSTEMTIME SystemTime; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v27 = -2LL;
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
          336LL,
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
            (void *)0xA07,
            (unsigned int)"internal\\sdk\\inc\\wil\\Resource.h",
            v10);
          __debugbreak();
        }
        if ( v9 )
          break;
      }
      if ( *((_BYTE *)this + 200) )
        break;
      AcquireSRWLockExclusive((PSRWLOCK)this + 20);
      v25 = (RTL_SRWLOCK *)((char *)this + 160);
      v11 = *((_QWORD *)this + 17);
      if ( v11 )
      {
        v12 = (_QWORD *)*((_QWORD *)this + 13);
        if ( v12 )
          v12 = (_QWORD *)*v12;
        v13 = *(_QWORD *)(v12[1] + 8 * (*((_QWORD *)this + 16) & (v12[2] - 1LL)));
        *(_QWORD *)v26 = *(_QWORD *)v13;
        v14 = *(_DWORD *)(v13 + 8);
        v15 = v11 - 1;
        *((_QWORD *)this + 17) = v11 - 1;
        if ( v11 != 1 )
          v15 = *((_QWORD *)this + 16) + 1LL;
        *((_QWORD *)this + 16) = v15;
        v8 = *((_QWORD *)this + 17);
        if ( this != (PenWorkspace::Discover::RecentAppsCache *)-160LL )
          ReleaseSRWLockExclusive((PSRWLOCK)this + 20);
        GetSystemTime(&SystemTime);
        SystemTimeToFileTime(&SystemTime, &FileTime);
        v16 = *((_DWORD *)this + 20);
        if ( v16 )
        {
          if ( v16 == v26[0] )
          {
            v17 = (RTL_SRWLOCK *)(*((_QWORD *)this + 11) + 48LL);
            AcquireSRWLockExclusive(v17);
            *(_DWORD *)(*((_QWORD *)this + 11) + 32LL) += v14;
            *(struct _FILETIME *)(*((_QWORD *)this + 11) + 36LL) = FileTime;
            if ( v17 )
              ReleaseSRWLockExclusive(v17);
          }
        }
        *((_DWORD *)this + 20) = 0;
        *((_QWORD *)this + 11) = 0LL;
        v18 = (volatile signed __int32 *)*((_QWORD *)this + 12);
        *((_QWORD *)this + 12) = 0LL;
        if ( v18 && _InterlockedExchangeAdd(v18 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v18)(v18);
          std::_Ref_count_base::_Decwref((std::_Ref_count_base *)v18);
        }
        if ( v26[1] )
          PenWorkspace::Discover::RecentAppsCache::TrackProcess(this, v26[1], &FileTime);
        if ( CompareFileTime(&FileTime, (const FILETIME *)this + 22) > 0 )
        {
          v19 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
          if ( v19 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              391LL,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v19);
          v20 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
          if ( v20 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              393LL,
              (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
              (const char *)(unsigned int)v20);
          v21 = *(_QWORD *)&FileTime + 72000000000LL;
          *((_DWORD *)this + 44) = FileTime.dwLowDateTime - 1014444032;
          v7 = HIDWORD(v21);
          goto LABEL_11;
        }
      }
      else
      {
        Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock(&v25);
      }
    }
    v22 = PenWorkspace::Discover::RecentAppsCache::PurgeLowUsageApps(this);
    if ( v22 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        399LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v22);
    v23 = PenWorkspace::Discover::RecentAppsCache::SaveDataToDisk(this);
    if ( v23 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        402LL,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
        (const char *)(unsigned int)v23);
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
