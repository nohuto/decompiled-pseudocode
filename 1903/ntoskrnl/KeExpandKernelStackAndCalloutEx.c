/*
 * XREFs of KeExpandKernelStackAndCalloutEx @ 0x1400C1850
 * Callers:
 *     sub_1406CBCDC @ 0x1406CBCDC (sub_1406CBCDC.c)
 *     IopIssueSystemEnvironmentRequest @ 0x14085C244 (IopIssueSystemEnvironmentRequest.c)
 *     ViPoolLogStackTrace @ 0x14097D6A8 (ViPoolLogStackTrace.c)
 *     KeInitSystem @ 0x1409FD23C (KeInitSystem.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C1880 (KeExpandKernelStackAndCalloutInternal.c)
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
