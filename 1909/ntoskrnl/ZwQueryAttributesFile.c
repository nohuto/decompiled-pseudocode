/*
 * XREFs of ZwQueryAttributesFile @ 0x1401C13F0
 * Callers:
 *     BiDoesHiveExist @ 0x140741484 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F398 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14092E8B0 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
