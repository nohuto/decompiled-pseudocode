/*
 * XREFs of CcScheduleLazyWriteScan @ 0x14007EEC8
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1400231C0 (CcSetDirtyPinnedData.c)
 *     CcChargeDirtyPages @ 0x140023780 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x140031460 (CcSetDirtyInMask.c)
 *     CcUninitializeCacheMap @ 0x14007C530 (CcUninitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     CcNotifyOfMappedWrite @ 0x14007D960 (CcNotifyOfMappedWrite.c)
 *     CcInitializeCacheMapEx @ 0x1400AC030 (CcInitializeCacheMapEx.c)
 *     CcDecrementOpenCount @ 0x1400ACF80 (CcDecrementOpenCount.c)
 *     CcRescheduleLazyWriteScan @ 0x1400D77AC (CcRescheduleLazyWriteScan.c)
 *     CcCanIWrite @ 0x140104D00 (CcCanIWrite.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x140160C3C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcAddDirtyPagesToExternalCache @ 0x140166F60 (CcAddDirtyPagesToExternalCache.c)
 *     CcCoalescingCallBackHelper @ 0x140269030 (CcCoalescingCallBackHelper.c)
 *     CcDeferWrite @ 0x140269680 (CcDeferWrite.c)
 *     CcDeleteSectionsForPartition @ 0x14026B254 (CcDeleteSectionsForPartition.c)
 * Callees:
 *     KiSetTimerEx @ 0x14001D380 (KiSetTimerEx.c)
 *     CcNotifyWriteBehindInternal @ 0x14012BF1C (CcNotifyWriteBehindInternal.c)
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
