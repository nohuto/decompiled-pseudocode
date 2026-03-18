/*
 * XREFs of SeLocateProcessImageName @ 0x140658A90
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x14063DA60 (SeCheckForCriticalAceRemoval.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140658AA4 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
