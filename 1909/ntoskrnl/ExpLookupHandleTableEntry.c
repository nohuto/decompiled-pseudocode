/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1405FBAD0
 * Callers:
 *     PspReferenceCidTableEntry @ 0x1405D0B80 (PspReferenceCidTableEntry.c)
 *     PsLookupThreadByThreadId @ 0x1405D0D60 (PsLookupThreadByThreadId.c)
 *     AlpcpLookupMessage @ 0x1405E3E30 (AlpcpLookupMessage.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405E6FF0 (ObpReferenceProcessObjectByHandle.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1405EC8B0 (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405FB4F0 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ExMapHandleToPointer @ 0x140610ED0 (ExMapHandleToPointer.c)
 *     ObReferenceFileObjectForWrite @ 0x14062D830 (ObReferenceFileObjectForWrite.c)
 *     ExSweepHandleTable @ 0x140686480 (ExSweepHandleTable.c)
 *     ExEnumHandleTable @ 0x1406B6380 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x1406B649C (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406B73C0 (ExDupHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x14090B138 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x14090B180 (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x14090B238 (ExpSnapShotHandleTables.c)
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
