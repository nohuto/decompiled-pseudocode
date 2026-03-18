/*
 * XREFs of ACPIInterfaceDereferenceDeviceExtension @ 0x1C00ADBE0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C000CD74 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char __fastcall ACPIInterfaceDereferenceDeviceExtension(ULONG_PTR a1)
{
  return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
}
