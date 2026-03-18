/*
 * XREFs of SeLocateProcessImageName @ 0x14066BAB0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x140640DA0 (SeCheckForCriticalAceRemoval.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x14066BAC4 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
