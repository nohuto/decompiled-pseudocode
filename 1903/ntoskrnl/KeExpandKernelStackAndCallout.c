/*
 * XREFs of KeExpandKernelStackAndCallout @ 0x14013CC40
 * Callers:
 *     IovpLogStackTrace @ 0x140963B18 (IovpLogStackTrace.c)
 *     KiVerifyXcpt15 @ 0x1409D02F0 (KiVerifyXcpt15.c)
 *     KiFilterFiberContext @ 0x1409D0B70 (KiFilterFiberContext.c)
 * Callees:
 *     KeExpandKernelStackAndCalloutInternal @ 0x1400C1880 (KeExpandKernelStackAndCalloutInternal.c)
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
