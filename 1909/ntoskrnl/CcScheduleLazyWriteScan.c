/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14012013C
 * Callers:
 *     CcInitializeCacheMapEx @ 0x14000D930 (CcInitializeCacheMapEx.c)
 *     CcUninitializeCacheMap @ 0x14000E560 (CcUninitializeCacheMap.c)
 *     CcSetDirtyInMask @ 0x14006F190 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x140079B20 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x14007A114 (CcChargeDirtyPages.c)
 *     CcDecrementOpenCount @ 0x14007A66C (CcDecrementOpenCount.c)
 *     CcNotifyOfMappedWrite @ 0x14007BABC (CcNotifyOfMappedWrite.c)
 *     CcWriteBehindInternal @ 0x14007E5E0 (CcWriteBehindInternal.c)
 *     CcRescheduleLazyWriteScan @ 0x1400E294C (CcRescheduleLazyWriteScan.c)
 *     CcCanIWrite @ 0x1400F2E80 (CcCanIWrite.c)
 *     CcAddDirtyPagesToExternalCache @ 0x14016F620 (CcAddDirtyPagesToExternalCache.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14017181C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcCoalescingCallBackHelper @ 0x14027C750 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x14027CF20 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14027EB34 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x1400E2AF0 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x1401201EC (CcNotifyWriteBehindInternal.c)
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
