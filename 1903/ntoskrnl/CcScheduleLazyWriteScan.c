/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14011F3EC
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D700 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E330 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14006EF20 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x140079760 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x140079D54 (CcChargeDirtyPages.c)
 *     CcDecrementOpenCount @ 0x14007A2AC (CcDecrementOpenCount.c)
 *     CcNotifyOfMappedWrite @ 0x14007B6BC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcRescheduleLazyWriteScan @ 0x1400B2864 (CcRescheduleLazyWriteScan.c)
 *     CcCanIWrite @ 0x1400B4600 (CcCanIWrite.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14016EF30 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017112C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcCoalescingCallBackHelper @ 0x14027C9F0 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x14027D1C0 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14027EDD4 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400B2A00 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14011F49C (CcNotifyWriteBehindInternal.c)
 */

char __fastcall CcScheduleLazyWriteScan(__int64 a1, char a2, char a3)
{
  char result; // al
  __int64 v6; // rdx

  result = *(_BYTE *)(a1 + 900);
  if ( !result || a2 )
  {
    if ( a3 )
    {
      v6 = 8LL;
    }
    else
    {
      result = -result;
      v6 = result != 0 ? 16 : 4;
    }
    if ( a2 )
    {
      result = CcNotifyWriteBehindInternal(a1, v6);
    }
    else if ( !*(_BYTE *)(a1 + 592) )
    {
      result = KiSetTimerEx(a1 + 528, CcFirstDelay, 0, 0, a1 + 464);
    }
    if ( !*(_BYTE *)(a1 + 900) )
      *(_BYTE *)(a1 + 592) = 1;
  }
  return result;
}
