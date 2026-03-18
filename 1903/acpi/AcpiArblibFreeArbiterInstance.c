/*
 * XREFs of AcpiArblibFreeArbiterInstance @ 0x1C00ACC34
 * Callers:
 *     ACPIBuildPdo @ 0x1C000B7D4 (ACPIBuildPdo.c)
 *     ACPIDispatchIrpDepPdoQueryID @ 0x1C002B6B0 (ACPIDispatchIrpDepPdoQueryID.c)
 *     ACPIInitResetDeviceExtension @ 0x1C002BB30 (ACPIInitResetDeviceExtension.c)
 *     AcpiArblibInitializeArbiter @ 0x1C00ACCA4 (AcpiArblibInitializeArbiter.c)
 * Callees:
 *     ArbDeleteArbiterInstance @ 0x1C00B7490 (ArbDeleteArbiterInstance.c)
 */

void __fastcall AcpiArblibFreeArbiterInstance(_BYTE *P)
{
  if ( P[128] )
    ArbDeleteArbiterInstance(P + 136);
  ExFreePoolWithTag(P, 0);
}
