/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x140022EF8
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x140020430 (CcGetDirtyPagesHelper.c)
 *     CcDeleteSharedCacheMap @ 0x14007C270 (CcDeleteSharedCacheMap.c)
 *     CcWriteBehindInternal @ 0x14007D2F0 (CcWriteBehindInternal.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E78F8 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012D9B0 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1401873C4 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401874C0 (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140187B58 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x140269DD0 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x1405F284C (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1400C1060 (ObDereferenceObjectDeferDelete.c)
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
