/*
 * XREFs of ExLockHandleTableEntry @ 0x140053220
 * Callers:
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x140646D30 (PspReferenceCidTableEntry.c)
 *     ExDupHandleTable @ 0x1406965A0 (ExDupHandleTable.c)
 *     ObpAuditObjectAccess @ 0x1408613B4 (ObpAuditObjectAccess.c)
 *     ExQueryProcessHandleInformation @ 0x1408CDE90 (ExQueryProcessHandleInformation.c)
 *     ExpSnapShotHandleTables @ 0x1408CE234 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpBlockOnLockedHandleEntry @ 0x140697884 (ExpBlockOnLockedHandleEntry.c)
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
    ExpBlockOnLockedHandleEntry(a1, a2);
  }
  return 0;
}
