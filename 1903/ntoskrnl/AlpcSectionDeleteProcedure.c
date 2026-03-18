/*
 * XREFs of AlpcSectionDeleteProcedure @ 0x1406D9460
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpRemoveResourcePort @ 0x14064C4F0 (AlpcpRemoveResourcePort.c)
 *     AlpcDeleteBlobByHandle @ 0x14064CA20 (AlpcDeleteBlobByHandle.c)
 */

char __fastcall AlpcSectionDeleteProcedure(_QWORD *BugCheckParameter2)
{
  __int64 v2; // rcx
  char result; // al
  void *v4; // rdi

  v2 = BugCheckParameter2[2];
  if ( v2 )
  {
    result = AlpcDeleteBlobByHandle(v2, BugCheckParameter2[3], (__int64)BugCheckParameter2);
    BugCheckParameter2[2] = 0LL;
  }
  v4 = (void *)BugCheckParameter2[5];
  if ( v4 )
  {
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)BugCheckParameter2);
    AlpcpRemoveResourcePort((__int64)v4, (__int64)BugCheckParameter2);
    BugCheckParameter2[5] = 0LL;
    AlpcpUnlockBlob((ULONG_PTR)BugCheckParameter2);
    return ObfDereferenceObject(v4);
  }
  return result;
}
