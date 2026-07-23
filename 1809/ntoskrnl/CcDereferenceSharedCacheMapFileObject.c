/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x140022EF8
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14007C260 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2E0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7978 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012DA80 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x140187504 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x140187600 (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187C98 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x140269FC0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405F384C (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C0FA0 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall CcDereferenceSharedCacheMapFileObject(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 96));
  v2 = *(_QWORD *)(a1 + 96);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 96), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
