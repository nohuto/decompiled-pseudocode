/*
 * XREFs of ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1803BA210
 * Callers:
 *     ??_EScreenManager@@UEAAPEAXI@Z @ 0x1803B9540 (--_EScreenManager@@UEAAPEAXI@Z.c)
 *     ?AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1803B95B0 (-AppLayoutChanged@ScreenManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z.c)
 *     ?Destroy@ScreenManager@@UEAAJXZ @ 0x1803B97B0 (-Destroy@ScreenManager@@UEAAJXZ.c)
 *     ?GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPEAPEAUIAppLayoutOperation@@@Z @ 0x1803B98B0 (-GetAppViewCloseOverrideOperation@ScreenManager@@UEAAJPEAUIAppLayout@@PEAUIApplicationView@@_NPE.c)
 *     ?TabletModeChanged@ScreenManager@@UEAAJ_N@Z @ 0x1803BA460 (-TabletModeChanged@ScreenManager@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1CacheEntry@ScreenManager@@QEAA@XZ @ 0x1803B941C (--1CacheEntry@ScreenManager@@QEAA@XZ.c)
 */

void __fastcall CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll(
        __int64 a1)
{
  void *v2; // rcx
  unsigned __int64 v3; // rsi
  __int64 v4; // rdi

  v2 = *(void **)a1;
  if ( v2 )
  {
    v3 = 0LL;
    if ( *(_QWORD *)(a1 + 8) )
    {
      v4 = 0LL;
      do
      {
        ScreenManager::CacheEntry::~CacheEntry((ScreenManager::CacheEntry *)(v4 + *(_QWORD *)a1));
        ++v3;
        v4 += 24LL;
      }
      while ( v3 < *(_QWORD *)(a1 + 8) );
      v2 = *(void **)a1;
    }
    CoTaskMemFree(v2);
    *(_QWORD *)a1 = 0LL;
  }
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
}
