/*
 * XREFs of CcDereferenceSharedCacheMapFileObject @ 0x14007FEF4
 * Callers:
 *     CcGetDirtyPagesHelper @ 0x1400787A0 (CcGetDirtyPagesHelper.c)
 *     CcWriteBehindInternal @ 0x14007E1E0 (CcWriteBehindInternal.c)
 *     CcDeleteSharedCacheMap @ 0x14007F890 (CcDeleteSharedCacheMap.c)
 *     CcUnmapAndPurge @ 0x14007FE7C (CcUnmapAndPurge.c)
 *     CcPurgeAndClearCacheSection @ 0x140125D84 (CcPurgeAndClearCacheSection.c)
 *     CcIsFatalWriteError @ 0x14012E024 (CcIsFatalWriteError.c)
 *     CcPerfLogFlushCache @ 0x1401584FC (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401585FC (CcPerfLogFlushSection.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140158D34 (CcPerfLogWorkItemEnqueue.c)
 *     CcUnpinRepinnedBcb @ 0x14027D810 (CcUnpinRepinnedBcb.c)
 *     CcUnmapVacb @ 0x140607830 (CcUnmapVacb.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x140066860 (ObDereferenceObjectDeferDelete.c)
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
