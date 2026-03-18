/*
 * XREFs of ExLockHandleTableEntry @ 0x14003FA90
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0B80 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6FF0 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x14089D644 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x14090AEB0 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x14090B238 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x1406A5224 (ExpBlockOnLockedHandleEntry.c)
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
