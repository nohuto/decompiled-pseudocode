/*
 * XREFs of ACPIInterfaceDereferenceDeviceExtension @ 0x1C00AA4F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInitDereferenceDeviceExtensionUnlocked @ 0x1C0017D68 (ACPIInitDereferenceDeviceExtensionUnlocked.c)
 */

char __fastcall ACPIInterfaceDereferenceDeviceExtension(ULONG_PTR a1)
{
  return ACPIInitDereferenceDeviceExtensionUnlocked(a1);
}
