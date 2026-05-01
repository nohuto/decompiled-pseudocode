/*
 * XREFs of ?TabletModeChanged@ScreenManager@@UEAAJ_N@Z @ 0x1803D9980
 * Callers:
 *     <none>
 * Callees:
 *     ?RemoveAll@?$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardCompareHelper@UCacheEntry@ScreenManager@@@@V?$CSimpleArrayStandardMergeHelper@UCacheEntry@ScreenManager@@@@@@QEAAXXZ @ 0x1803D9728 (-RemoveAll@-$CTSimpleArray@UCacheEntry@ScreenManager@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@UCacheEntr.c)
 */

__int64 __fastcall ScreenManager::TabletModeChanged(ScreenManager *this, char a2)
{
  *((_BYTE *)this + 344) = a2;
  if ( !a2 )
    CTSimpleArray<ScreenManager::CacheEntry,4294967294,CTPolicyCoTaskMem<ScreenManager::CacheEntry>,CSimpleArrayStandardCompareHelper<ScreenManager::CacheEntry>,CSimpleArrayStandardMergeHelper<ScreenManager::CacheEntry>>::RemoveAll((__int64)this + 312);
  return 0LL;
}
