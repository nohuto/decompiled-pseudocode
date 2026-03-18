/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14013B080
 * Callers:
 *     IovpLogStackTrace @ 0x140924998 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x14098E2F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14098EB60 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C99E0 (KeExpandKernelStackAndCalloutInternal.c)
 */

NTSTATUS __stdcall KeExpandKernelStackAndCallout(PEXPAND_STACK_CALLOUT Callout, PVOID Parameter, SIZE_T Size)
{
  return KeExpandKernelStackAndCalloutInternal(
           (void (__fastcall *)(ULONG_PTR))Callout,
           (ULONG_PTR)Parameter,
           Size,
           2,
           0LL);
}
