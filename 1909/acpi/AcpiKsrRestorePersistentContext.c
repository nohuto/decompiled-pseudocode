/*
 * XREFs of AcpiKsrRestorePersistentContext @ 0x1C00B0F48
 * Callers:
 *     ACPIKsrSupportInitialize @ 0x1C0024810 (ACPIKsrSupportInitialize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AcpiKsrRestorePersistentContext(__int64 a1)
{
  __int64 v2; // r8
  char v4; // [rsp+48h] [rbp+10h] BYREF

  KsrQueryMetadata(&GUID_ACPI_KSR_CONTEXT, a1, &AcpiKsrContext, 16LL, &v4);
  if ( AcpiKsrContext != 0x15854434BLL )
  {
    AcpiKsrContext = 0LL;
    qword_1C0081C18 = 0LL;
  }
  LOBYTE(v2) = 1;
  return KsrFreePersistedMemoryBlock(&GUID_ACPI_KSR_CONTEXT, a1, v2);
}
