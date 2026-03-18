/*
 * XREFs of DriverEntry @ 0x1C000D080
 * Callers:
 *     GsDriverEntry @ 0x1C000D010 (GsDriverEntry.c)
 * Callees:
 *     rbc_InitializeFeatureStaging @ 0x1C0003548 (rbc_InitializeFeatureStaging.c)
 *     CsTerminate @ 0x1C000C3C0 (CsTerminate.c)
 *     CsInitialize @ 0x1C000D0B0 (CsInitialize.c)
 */

NTSTATUS __stdcall DriverEntry(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  rbc_InitializeFeatureStaging();
  result = CsInitialize(DriverObject);
  v4 = result;
  if ( result < 0 )
  {
    CsTerminate();
    return v4;
  }
  return result;
}
