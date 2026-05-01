/*
 * XREFs of ?HaveUsedPen@RecentAppsCache@Discover@PenWorkspace@@QEAAJPEAH@Z @ 0x180199EEC
 * Callers:
 *     ?HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z @ 0x180195B90 (-HaveUsedPen@PenWorkspaceDiscoverBroker@@UEAAJPEAH@Z.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180022328 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049D54 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18007F638 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x180199DC8 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenWorkspace::Discover::RecentAppsCache::HaveUsedPen(RTL_SRWLOCK *this, int *a2)
{
  int SortedAppList; // eax
  unsigned int v4; // ebp
  char *i; // rax
  char *j; // rbx
  std::_Ref_count_base *v7; // rcx
  char *v9; // [rsp+28h] [rbp-20h] BYREF
  __int128 v10; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a2 = 0;
  v9 = 0LL;
  v10 = 0LL;
  SortedAppList = PenWorkspace::Discover::RecentAppsCache::GetSortedAppList(this, (__int64)&v9);
  v4 = SortedAppList;
  if ( SortedAppList >= 0 )
  {
    for ( i = v9; i != (char *)v10; i += 16 )
    {
      if ( !*(_BYTE *)(*(_QWORD *)i + 44LL) && *(int *)(*(_QWORD *)i + 32LL) > 0 )
      {
        *a2 = 1;
        break;
      }
    }
    v4 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xD1,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\recentappscache.cpp",
      (const char *)(unsigned int)SortedAppList);
  }
  if ( v9 )
  {
    for ( j = v9; j != (char *)v10; j += 16 )
    {
      v7 = (std::_Ref_count_base *)*((_QWORD *)j + 1);
      if ( v7 )
        std::_Ref_count_base::_Decref(v7);
    }
    std::_Deallocate<16,0>(
      v9,
      (const struct std::nothrow_t *)((*((_QWORD *)&v10 + 1) - (_QWORD)v9) & 0xFFFFFFFFFFFFFFF0uLL));
  }
  return v4;
}
