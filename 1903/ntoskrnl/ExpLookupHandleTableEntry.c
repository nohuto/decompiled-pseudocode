/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1405FAA80
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0680 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0860 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3660 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6820 (ObpReferenceProcessObjectByHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC0E0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FA4A0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x14060F3C0 (ExMapHandleToPointer.c)
 *     ObReferenceFileObjectForWrite @ 0x1406299E0 (ObReferenceFileObjectForWrite.c)
 *     ExSweepHandleTable @ 0x140692F10 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406BABF0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1406BAD0C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406BBBA0 (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x14090B6D8 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14090B720 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14090B7D8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
    return *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1) + 4 * (v2 & 0x3FF);
  if ( (v3 & 3) != 0 )
    return *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF)) + 4 * (v2 & 0x3FF);
  return v3 + 4 * v2;
}
