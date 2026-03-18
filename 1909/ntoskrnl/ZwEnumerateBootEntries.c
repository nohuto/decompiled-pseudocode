/*
 * XREFs of ZwEnumerateBootEntries @ 0x1401C2770
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14090997C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiEnumerateBootEntries @ 0x140930B7C (BiEnumerateBootEntries.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
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
