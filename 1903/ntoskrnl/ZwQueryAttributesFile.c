/*
 * XREFs of ZwQueryAttributesFile @ 0x1401C0870
 * Callers:
 *     BiDoesHiveExist @ 0x14073F584 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x14082F528 (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x14092EE3C (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
