/*
 * XREFs of DriverEntry_0 @ 0x1C0139ADC
 * Callers:
 *     GsDriverEntry @ 0x1C037E010 (GsDriverEntry.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall DriverEntry_0(_DRIVER_OBJECT *DriverObject, PUNICODE_STRING RegistryPath)
{
  return DriverEntry(DriverObject, RegistryPath);
}
