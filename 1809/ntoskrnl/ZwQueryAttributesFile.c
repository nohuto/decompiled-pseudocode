/*
 * XREFs of ZwQueryAttributesFile @ 0x1401B8910
 * Callers:
 *     BiDoesHiveExist @ 0x140714CB0 (BiDoesHiveExist.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x1407F67FC (CmpOpenFileWithExtremePrejudice.c)
 *     BiResolveLocateDevice @ 0x1408F11E0 (BiResolveLocateDevice.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryAttributesFile(POBJECT_ATTRIBUTES ObjectAttributes, PFILE_BASIC_INFORMATION FileInformation)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation, v2);
}
