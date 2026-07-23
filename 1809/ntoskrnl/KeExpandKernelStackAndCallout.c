/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14013B1A0
 * Callers:
 *     IovpLogStackTrace @ 0x140925998 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x14098F2F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x14098FB60 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C9AE0 (KeExpandKernelStackAndCalloutInternal.c)
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
