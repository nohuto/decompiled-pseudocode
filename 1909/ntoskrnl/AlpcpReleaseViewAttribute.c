/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x1406E4D18
 * Callers:
 *     AlpcpSendMessage @ 0x1405E1E30 (AlpcpSendMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x14065BAE8 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x14065C548 (AlpcpReleaseAttributes.c)
 *     AlpcMessageCleanupProcedure @ 0x1406B6CB0 (AlpcMessageCleanupProcedure.c)
 * Callees:
 *     AlpcpUnlockBlob @ 0x1405E4F60 (AlpcpUnlockBlob.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14065E4F8 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14065EDF0 (AlpcpDereferenceBlobEx.c)
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
