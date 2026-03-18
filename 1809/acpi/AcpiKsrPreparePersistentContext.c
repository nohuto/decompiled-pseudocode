/*
 * XREFs of AcpiKsrPreparePersistentContext @ 0x1C00AD770
 * Callers:
 *     AcpiKsrCallback @ 0x1C00AD720 (AcpiKsrCallback.c)
 * Callees:
 *     <none>
 */

__int64 AcpiKsrPreparePersistentContext()
{
  char v1; // [rsp+30h] [rbp+8h] BYREF

  if ( (_DWORD)AcpiKsrContext != 1481917259 )
  {
    qword_1C007FC18 = 0LL;
    AcpiKsrContext = 0x15854434BLL;
    qword_1C007FC18 = *((_BYTE *)AcpiInformation + 84) & 1;
  }
  return KsrPersistMetadata(&GUID_ACPI_KSR_CONTEXT, &AcpiKsrContext, 16LL, &v1);
}
