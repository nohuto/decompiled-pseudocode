/*
 * XREFs of ACPIEcMaskInterrupt @ 0x1C0053418
 * Callers:
 *     ACPIEcGpioServiceRoutine @ 0x1C0053160 (ACPIEcGpioServiceRoutine.c)
 *     ACPIEcServiceDevice @ 0x1C0053FDC (ACPIEcServiceDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00319E0 (_guard_dispatch_icall_nop.c)
 *     ACPIVectorDisable @ 0x1C0060890 (ACPIVectorDisable.c)
 */

__int64 __fastcall ACPIEcMaskInterrupt(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 805) )
    return ((__int64 (__fastcall *)(_QWORD, __int64))HalPrivateDispatchTable[60])(*(unsigned int *)(a1 + 900), 1LL);
  else
    return ACPIVectorDisable(0LL, *(_QWORD *)(a1 + 72));
}
