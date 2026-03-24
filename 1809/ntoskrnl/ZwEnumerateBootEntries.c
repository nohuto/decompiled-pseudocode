/*
 * XREFs of ZwEnumerateBootEntries @ 0x1401B9C90
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CC604 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x1408F3464 (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwEnumerateBootEntries(PVOID Buffer, PULONG BufferLength)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Buffer, BufferLength, v2);
}
