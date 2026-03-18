/*
 * XREFs of ExpBlockOnLockedHandleEntry @ 0x140697884
 * Callers:
 *     ExLockHandleTableEntry @ 0x140053220 (ExLockHandleTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     ExMapHandleToPointer @ 0x1405F56A0 (ExMapHandleToPointer.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x140646D30 (PspReferenceCidTableEntry.c)
 *     ExEnumHandleTable @ 0x14068FAF0 (ExEnumHandleTable.c)
 *     ExSweepHandleTable @ 0x140697AB0 (ExSweepHandleTable.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1401119F0 (ExBlockOnAddressPushLock.c)
 */

__int64 __fastcall ExpBlockOnLockedHandleEntry(__int64 a1, _QWORD *a2, __int64 a3)
{
  __int64 v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = a3;
  return ExBlockOnAddressPushLock(a1 + 48, a2, &v4, 8uLL, 0LL);
}
