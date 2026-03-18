/*
 * XREFs of AlpcpReleaseViewAttribute @ 0x14061CCAC
 * Callers:
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140616314 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpReleaseAttributes @ 0x14061A818 (AlpcpReleaseAttributes.c)
 *     AlpcpSendMessage @ 0x1406348F0 (AlpcpSendMessage.c)
 *     AlpcMessageCleanupProcedure @ 0x140696E60 (AlpcMessageCleanupProcedure.c)
 * Callees:
 *     AlpcpLockForCachedReferenceBlob @ 0x140616E4C (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x140618C70 (AlpcpDereferenceBlobEx.c)
 *     AlpcpUnlockBlob @ 0x140637040 (AlpcpUnlockBlob.c)
 */

unsigned __int64 __fastcall AlpcpReleaseViewAttribute(ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v2; // rcx

  AlpcpLockForCachedReferenceBlob(*(_QWORD *)(BugCheckParameter2 + 16));
  v2 = *(_QWORD *)(BugCheckParameter2 + 16);
  --*(_DWORD *)(BugCheckParameter2 + 76);
  AlpcpUnlockBlob(v2);
  return AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
}
