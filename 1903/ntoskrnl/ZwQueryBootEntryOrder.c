/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1401C27F0
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x140909F1C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140931FC0 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140933318 (SiGetEspFromFirmware.c)
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
