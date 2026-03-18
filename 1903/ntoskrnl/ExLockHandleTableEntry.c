/*
 * XREFs of ExLockHandleTableEntry @ 0x14003FD50
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0680 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x14089DE24 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x14090B450 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14090B7D8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406BCCE4 (ExpBlockOnLockedHandleEntry.c)
 */

char __fastcall ExLockHandleTableEntry(__int64 a1, signed __int64 *a2)
{
  signed __int64 v4; // r8

  while ( 1 )
  {
    while ( 1 )
    {
      _m_prefetchw(a2);
      v4 = *a2;
      if ( (*a2 & 1) == 0 )
        break;
      if ( v4 == _InterlockedCompareExchange64(a2, v4 - 1, v4) )
        return 1;
    }
    if ( !v4 )
      break;
    ExpBlockOnLockedHandleEntry(a1, a2, v4);
  }
  return 0;
}
