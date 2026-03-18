/*
 * XREFs of AcpiAllocateGsivForSecondaryInterrupt @ 0x1C00AE9E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 */

__int64 AcpiAllocateGsivForSecondaryInterrupt()
{
  return ((__int64 (*)(void))HalPrivateDispatchTable[63])();
}
