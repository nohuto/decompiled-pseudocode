/*
 * XREFs of ?GetRecentItems@PenWorkspaceDiscoverBroker@@UEAAJHPEAPEAUIObjectArray@@@Z @ 0x1801FBB40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006145C (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800755D8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800831C8 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Details@WRL@Microsoft@@YAJPEAPEAVObjectArray@Discover@PenWorkspace@@AEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801F9C4C (--$MakeAndInitialize@VObjectArray@Discover@PenWorkspace@@V123@AEAV-$vector@V-$ComPtr@UIDiscoverR.c)
 *     ?GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV?$vector@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIDiscoverRecentItem@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1801FFB98 (-GetMRUApps@RecentAppsCache@Discover@PenWorkspace@@QEAAJHAEAV-$vector@V-$ComPtr@UIDiscoverRecent.c)
 *     ?EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ @ 0x180426A88 (-EnsureCallingProcessIsShellExperience@CallerIdentity@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall PenWorkspaceDiscoverBroker::GetRecentItems(
        PenWorkspace::Discover::RecentAppsCache **this,
        __int64 a2,
        struct IObjectArray **a3)
{
  int IsShellExperience; // eax
  unsigned int v6; // ebx
  int MRUApps; // eax
  unsigned int v9; // edi
  int v10; // eax
  PenWorkspace::Discover::ObjectArray *v11; // rax
  struct IUnknown **v12; // rsi
  __int64 *v13; // rbx
  struct IUnknown **v14; // [rsp+28h] [rbp-18h] BYREF
  __int128 v15; // [rsp+30h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]
  PenWorkspace::Discover::ObjectArray *v17; // [rsp+70h] [rbp+30h] BYREF

  *a3 = 0LL;
  IsShellExperience = CallerIdentity::EnsureCallingProcessIsShellExperience((CallerIdentity *)this);
  v6 = IsShellExperience;
  if ( IsShellExperience >= 0 )
  {
    v14 = 0LL;
    v15 = 0LL;
    MRUApps = PenWorkspace::Discover::RecentAppsCache::GetMRUApps(this[5]);
    v9 = MRUApps;
    if ( MRUApps >= 0 )
    {
      v17 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
      v10 = Microsoft::WRL::Details::MakeAndInitialize<PenWorkspace::Discover::ObjectArray,PenWorkspace::Discover::ObjectArray,std::vector<Microsoft::WRL::ComPtr<IDiscoverRecentItem>> &>(
              &v17,
              &v14);
      v9 = v10;
      if ( v10 >= 0 )
      {
        v11 = v17;
        v17 = 0LL;
        *a3 = (struct IObjectArray *)(((unsigned __int64)v11 + 32) & -(__int64)(v11 != 0LL));
        v9 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x26,
          (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
          (const char *)(unsigned int)v10);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v17);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x23,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
        (const char *)(unsigned int)MRUApps);
    }
    v12 = v14;
    if ( v14 )
    {
      v13 = (__int64 *)v14;
      if ( v14 != (struct IUnknown **)v15 )
      {
        do
          Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v13++);
        while ( v13 != (__int64 *)v15 );
      }
      std::_Deallocate<16,0>(
        v12,
        (const struct std::nothrow_t *)((*((_QWORD *)&v15 + 1) - (_QWORD)v12) & 0xFFFFFFFFFFFFFFF8uLL));
    }
    return v9;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x20,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\discoverbroker.cpp",
      (const char *)(unsigned int)IsShellExperience);
    return v6;
  }
}
