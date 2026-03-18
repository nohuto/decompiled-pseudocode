/*
 * XREFs of ExpLookupHandleTableEntry @ 0x1405E8990
 * Callers:
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1405D11B0 (ObpReferenceProcessObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405E8390 (ObpReferenceObjectByHandleWithTag.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     ExMapHandleToPointer @ 0x1405F56A0 (ExMapHandleToPointer.c)
 *     AlpcpLookupMessage @ 0x140636970 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x140638C40 (NtWriteFile.c)
 *     PspReferenceCidTableEntry @ 0x140646D30 (PspReferenceCidTableEntry.c)
 *     ExEnumHandleTable @ 0x14068FAF0 (ExEnumHandleTable.c)
 *     ExpGetNextHandleTableEntry @ 0x14068FC00 (ExpGetNextHandleTableEntry.c)
 *     ExDupHandleTable @ 0x1406965A0 (ExDupHandleTable.c)
 *     ExSweepHandleTable @ 0x140697AB0 (ExSweepHandleTable.c)
 *     ExpGetHandleExtraInfo @ 0x1408CE130 (ExpGetHandleExtraInfo.c)
 *     ExpSetHandleExtraInfo @ 0x1408CE17C (ExpSetHandleExtraInfo.c)
 *     ExpSnapShotHandleTables @ 0x1408CE234 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExpLookupHandleTableEntry(unsigned int *a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rax

  v2 = a2 & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v2 >= *a1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 1);
  if ( (v3 & 3) == 1 )
  {
    v4 = *(_QWORD *)(v3 + 8 * (v2 >> 10) - 1);
    return v4 + 4 * (v2 & 0x3FF);
  }
  if ( (v3 & 3) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(v3 + 8 * (v2 >> 19) - 2) + 8 * ((v2 >> 10) & 0x1FF));
    return v4 + 4 * (v2 & 0x3FF);
  }
  return v3 + 4 * v2;
}
