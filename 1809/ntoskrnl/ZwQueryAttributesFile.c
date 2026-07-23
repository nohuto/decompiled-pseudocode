/*
 * XREFs of ZwQueryAttributesFile @ 0x1401B8A90
 * Callers:
 *     BiDoesHiveExist @ 0x140715F30 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F79DC (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x1408F2480 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
