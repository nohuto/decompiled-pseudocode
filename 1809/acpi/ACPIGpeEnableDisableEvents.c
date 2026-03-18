/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C0025D3C
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C000FA60 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeBuildEventMasks @ 0x1C0016DA0 (ACPIGpeBuildEventMasks.c)
 *     ACPIGpeClearEventMasks @ 0x1C002538C (ACPIGpeClearEventMasks.c)
 *     ACPIInterruptServiceRoutine @ 0x1C00255E0 (ACPIInterruptServiceRoutine.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C00257B0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0054150 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C005E7E0 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C005E9C0 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C005EAA0 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C005EBD0 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0025D98 (ACPIWriteGpeEnableRegister.c)
 */

void *__fastcall ACPIGpeEnableDisableEvents(char a1, __int64 a2)
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    LOBYTE(a2) = a1 != 0 ? *((_BYTE *)GpeCurEnable + i) : 0;
    ACPIWriteGpeEnableRegister(i, a2);
    result = AcpiInformation;
  }
  return result;
}
