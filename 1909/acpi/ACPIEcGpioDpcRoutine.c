/*
 * XREFs of ACPIEcGpioDpcRoutine @ 0x1C0053130
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x1C00533B4 (AcpiEcCommonDpcHandler.c)
 *     ACPIEcUnmaskInterrupt @ 0x1C005345C (ACPIEcUnmaskInterrupt.c)
 */

void __fastcall ACPIEcGpioDpcRoutine(
        struct _KDPC *Dpc,
        _BYTE *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  AcpiEcCommonDpcHandler(DeferredContext);
  if ( (DeferredContext[882] & 1) == 0 )
    ACPIEcUnmaskInterrupt(DeferredContext);
}
