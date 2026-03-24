/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1401BA890
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1408CC604 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x1408F42E4 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x1408F566C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(Ids, Count, v2);
}
