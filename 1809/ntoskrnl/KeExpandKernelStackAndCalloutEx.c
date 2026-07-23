/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400C9AB0
 * Callers:
 *     sub_1406AC1C4 @ 0x1406AC1C4 (sub_1406AC1C4.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140823374 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x140939198 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x1409C5988 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
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
