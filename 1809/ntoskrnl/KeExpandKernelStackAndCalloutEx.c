/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400C99D0
 * Callers:
 *     sub_1406AAF24 @ 0x1406AAF24 (sub_1406AAF24.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140822174 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x140938198 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x1409C4988 (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9A00 (KeExpandKernelStackAndCalloutInternal.c)
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
