/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1406BCCE4
 * Callers:
 *     ExFastReferenceHandleTableEntry @ 0x1400063F0 (ExFastReferenceHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x14003FD50 (ExLockHandleTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x14010B950 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
