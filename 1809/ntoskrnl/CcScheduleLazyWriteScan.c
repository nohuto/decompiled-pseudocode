/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14007EEB8
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x14007C520 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14007D950 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapEx @ 0x1400ABF90 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x1400ACEE0 (CcDecrementOpenCount.c)
 *     CcRescheduleLazyWriteScan @ 0x1400D784C (CcRescheduleLazyWriteScan.c)
 *     CcCanIWrite @ 0x140104DA0 (CcCanIWrite.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160D5C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x140167080 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x140269320 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x140269970 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14026B544 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14012C00C (CcNotifyWriteBehindInternal.c)
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
