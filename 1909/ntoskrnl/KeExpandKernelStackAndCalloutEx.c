/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400A16D0
 * Callers:
 *     sub_1406CAB0C @ 0x1406CAB0C (sub_1406CAB0C.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085B944 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x14097D6A8 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x1409FD758 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400A1700 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCalloutEx(
        PEXPAND_STACK_CALLOUT Callout,
        PVOID Parameter,
        SIZE_T Size,
        BOOLEAN Wait,
        PVOID Context)
{
  return KeExpandKernelStackAndCalloutInternal((ULONG_PTR)Callout, (ULONG_PTR)Parameter, (__int64)Context);
}
