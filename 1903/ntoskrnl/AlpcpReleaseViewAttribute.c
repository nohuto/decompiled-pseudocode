/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1406E3868
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1660 (AlpcpSendMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140647F84 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x1406488D8 (AlpcpReleaseAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x1406BB600 (AlpcMessageCleanupProcedure.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405E4790 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14064A878 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14064B150 (AlpcpDereferenceBlobEx.c)
 */

void __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
