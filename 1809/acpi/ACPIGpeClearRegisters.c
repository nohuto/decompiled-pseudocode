/*
 * XREFs of ACPIGpeClearRegisters @ 0x1C0026004
 * Callers:
 *     ACPIEnableInitializeACPI @ 0x1C000FA60 (ACPIEnableInitializeACPI.c)
 *     ACPIGpeClearEventMasks @ 0x1C002538C (ACPIGpeClearEventMasks.c)
 *     ACPILoadProcessFADT @ 0x1C00BACDC (ACPILoadProcessFADT.c)
 * Callees:
 *     ACPIWriteGpeStatusRegister @ 0x1C0026060 (ACPIWriteGpeStatusRegister.c)
 *     ACPIReadGpeStatusRegister @ 0x1C00260D0 (ACPIReadGpeStatusRegister.c)
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
