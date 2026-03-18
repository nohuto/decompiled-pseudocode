/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x1406A5224
 * Callers:
 *     ExFastReferenceHandleTableEntry @ 0x140006480 (ExFastReferenceHandleTableEntry.c)
 *     ExLockHandleTableEntry @ 0x14003FA90 (ExLockHandleTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC8B0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400F8900 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
