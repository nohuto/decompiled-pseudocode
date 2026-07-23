/*
 * XREFs of ZwEnumerateBootEntries @ 0x1401C1BF0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140909F1C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140931108 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140933318 (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Buffer);
}
