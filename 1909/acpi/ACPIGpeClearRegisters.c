/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C00223A4
 * Callers:
 *     ACPIGpeClearEventMasks @ 0x1C00217A4 (ACPIGpeClearEventMasks.c)
 *     ACPIEnableInitializeACPI @ 0x1C0024350 (ACPIEnableInitializeACPI.c)
 *     ACPILoadProcessFADT @ 0x1C00BE078 (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0022400 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C0022470 (ACPIReadGpeStatusRegister.c)
 */

void *ACPIGpeClearRegisters()
{
  void *result; // rax
  unsigned int i; // ebx

  result = AcpiInformation;
  for ( i = 0; i < *((unsigned __int16 *)AcpiInformation + 51); ++i )
  {
    ACPIReadGpeStatusRegister(i);
    ACPIWriteGpeStatusRegister(i);
    result = AcpiInformation;
  }
  return result;
}
