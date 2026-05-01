/*
 * XREFs of ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18007FB1C
 * Callers:
 *     ?TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z @ 0x18001D1A0 (-TrackProcess@RecentAppsCache@Discover@PenWorkspace@@AEAAJKAEBU_FILETIME@@@Z.c)
 *     ?LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Windows@@@Z @ 0x1801E1558 (-LoadJsonDataFromDisk@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEAUIJsonObject@Json@Data@Wind.c)
 *     ?PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z @ 0x1801E23C8 (-PrependDefaultApp@RecentAppsCache@Discover@PenWorkspace@@AEAAJPEBGAEAU_FILETIME@@@Z.c)
 * Callees:
 *     ??$?0$$V@?$_Ref_count_obj@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x18007FB58 (--$-0$$V@-$_Ref_count_obj@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180087898 (--2@YAPEAX_K@Z.c)
 */

__int64 *__fastcall std::make_shared<PenWorkspace::Discover::AppUsageData,>(__int64 *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 *result; // rax
  void *v5; // [rsp+30h] [rbp+8h]

  v5 = operator new(0x48uLL);
  v2 = std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>(v5);
  a1[1] = v2;
  v3 = v2 + 16;
  result = a1;
  *a1 = v3;
  return result;
}
