/*
 * XREFs of SeLocateProcessImageName @ 0x1406671D0
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405B8B50 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x1406671E4 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
