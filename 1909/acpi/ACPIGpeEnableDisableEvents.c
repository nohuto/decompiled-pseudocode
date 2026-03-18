/*
 * XREFs of ACPIGpeEnableDisableEvents @ 0x1C0022134
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C00217A4 (ACPIGpeClearEventMasks.c)
 *     ACPIInterruptServiceRoutine @ 0x1C00219F0 (ACPIInterruptServiceRoutine.c)
 *     ACPIInterruptDispatchEventDpc @ 0x1C0021BC0 (ACPIInterruptDispatchEventDpc.c)
 *     ACPIGpeBuildEventMasks @ 0x1C00238A0 (ACPIGpeBuildEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C0024350 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeHalEnableDisableEvents @ 0x1C0055BC0 (ACPIGpeHalEnableDisableEvents.c)
 *     ACPIVectorConnect @ 0x1C00606B0 (ACPIVectorConnect.c)
 *     ACPIVectorDisable @ 0x1C0060890 (ACPIVectorDisable.c)
 *     ACPIVectorDisconnect @ 0x1C0060980 (ACPIVectorDisconnect.c)
 *     ACPIVectorEnable @ 0x1C0060AC0 (ACPIVectorEnable.c)
 *     ACPILoadProcessFADT @ 0x1C00BE078 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeEnableRegister @ 0x1C0022190 (ACPIWriteGpeEnableRegister.c)
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
