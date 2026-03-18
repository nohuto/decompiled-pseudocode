/*
 * XREFs of SeAuditHardLinkCreation @ 0x1408DB960
 * Callers:
 *     <none>
 * Callees:
 *     SeAuditHardLinkCreationWithTransaction @ 0x1408DB980 (SeAuditHardLinkCreationWithTransaction.c)
 */

void __stdcall SeAuditHardLinkCreation(PUNICODE_STRING FileName, PUNICODE_STRING LinkName, BOOLEAN bSuccess)
{
  SeAuditHardLinkCreationWithTransaction(FileName, LinkName, bSuccess, 0LL);
}
