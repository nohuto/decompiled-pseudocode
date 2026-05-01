/*
 * XREFs of ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1801DF9EC
 * Callers:
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1801DF9EC (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 *     ?GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV?$vector@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@V?$allocator@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@@2@@std@@@Z @ 0x1801E0C08 (-GetSortedAppList@RecentAppsCache@Discover@PenWorkspace@@AEAAJAEAV-$vector@V-$shared_ptr@UAppUsa.c)
 * Callees:
 *     ??$_Insertion_sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@PEAV10@QEAV10@P6A_NAEAV10@2@Z@Z @ 0x1801DF328 (--$_Insertion_sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAE.c)
 *     ??$_Make_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x1801DF42C (--$_Make_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@.c)
 *     ??$_Partition_by_median_guess_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YA?AU?$pair@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@PEAV12@@0@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV20@1@Z@Z @ 0x1801DF5B8 (--$_Partition_by_median_guess_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@s.c)
 *     ??$_Pop_heap_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0P6A_NAEAV10@1@Z@Z @ 0x1801DF944 (--$_Pop_heap_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0.c)
 *     ??$_Sort_unchecked@PEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@std@@YAXPEAV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@0_JP6A_NAEAV10@2@Z@Z @ 0x1801DF9EC (--$_Sort_unchecked@PEAV-$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@std@@P6A_NAEAV12@0@Z@s.c)
 */

__int64 __fastcall std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(__int64 *, __int64 *))
{
  __int64 result; // rax
  char *v7; // rbx
  __int64 *v8; // rdi
  char *v9; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v10; // [rsp+28h] [rbp-10h]

  result = (a2 - (char *)a1) >> 4;
  v7 = a2;
  v8 = a1;
  if ( result <= 32 )
    goto LABEL_12;
  do
  {
    if ( a3 <= 0 )
      break;
    std::_Partition_by_median_guess_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      &v9,
      (unsigned __int64)v8,
      v7,
      (unsigned __int8 (__fastcall *)(_QWORD *, _QWORD *))a4);
    a3 = (a3 >> 2) + (a3 >> 1);
    if ( (__int64)((v9 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL) >= (__int64)((v7 - (char *)v10) & 0xFFFFFFFFFFFFFFF0uLL) )
    {
      std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v10,
        v7,
        a3,
        a4);
      v7 = v9;
    }
    else
    {
      std::_Sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v8,
        v9,
        a3,
        a4);
      v8 = v10;
    }
    result = (v7 - (char *)v8) >> 4;
  }
  while ( result > 32 );
  if ( result <= 32 )
  {
LABEL_12:
    if ( result >= 2 )
      return (__int64)std::_Insertion_sort_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
                        v8,
                        (__int64 *)v7,
                        a4);
  }
  else
  {
    std::_Make_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
      (__int64)v8,
      (__int64)v7,
      (__int64)a4);
    while ( 1 )
    {
      result = (v7 - (char *)v8) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( result < 32 )
        break;
      std::_Pop_heap_unchecked<std::shared_ptr<PenWorkspace::Discover::AppUsageData> *,bool (*)(std::shared_ptr<PenWorkspace::Discover::AppUsageData> &,std::shared_ptr<PenWorkspace::Discover::AppUsageData> &)>(
        v8,
        (__int64)v7,
        (unsigned __int8 (__fastcall *)(__int64, __int64))a4);
      v7 -= 16;
    }
  }
  return result;
}
