/*
 * XREFs of SeLocateProcessImageName @ 0x1406671B0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405B8B50 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1406671C4 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
