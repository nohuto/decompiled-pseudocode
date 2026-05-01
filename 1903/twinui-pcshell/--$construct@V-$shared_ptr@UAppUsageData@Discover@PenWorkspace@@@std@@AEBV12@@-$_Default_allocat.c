/*
 * XREFs of ??$construct@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@AEBV12@@?$_Default_allocator_traits@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@1@QEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@1@AEBV31@@Z @ 0x1801DFB64
 * Callers:
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1801E0C08 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<std::shared_ptr<PenWorkspace::Discover::AppUsageData>>>::construct<std::shared_ptr<PenWorkspace::Discover::AppUsageData>,std::shared_ptr<PenWorkspace::Discover::AppUsageData> const &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v3; // rax
  __int64 result; // rax

  *a2 = 0LL;
  a2[1] = 0LL;
  v3 = a3[1];
  if ( v3 )
    _InterlockedIncrement((volatile signed __int32 *)(v3 + 8));
  *a2 = *a3;
  result = a3[1];
  a2[1] = result;
  return result;
}
