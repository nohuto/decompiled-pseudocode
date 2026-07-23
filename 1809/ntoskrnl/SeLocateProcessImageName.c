/*
 * XREFs of SeLocateProcessImageName @ 0x140668370
 * Callers:
 *     SeCheckForCriticalAceRemoval @ 0x1405B9B50 (SeCheckForCriticalAceRemoval.c)
 * Callees:
 *     PsGetAllocatedFullProcessImageNameEx @ 0x140668384 (PsGetAllocatedFullProcessImageNameEx.c)
 */

NTSTATUS __stdcall SeLocateProcessImageName(PEPROCESS Process, PUNICODE_STRING *pImageFileName)
{
  return PsGetAllocatedFullProcessImageNameEx(Process, pImageFileName);
}
