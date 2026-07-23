/*
 * XREFs of ZwQueryBootEntryOrder @ 0x1401C3370
 * Callers:
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x14090997C (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     BiQueryBootEntryOrder @ 0x140931A34 (BiQueryBootEntryOrder.c)
 *     SiGetEspFromFirmware @ 0x140932D8C (SiGetEspFromFirmware.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryBootEntryOrder(PULONG Ids, PULONG Count)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Ids);
}
