/*
 * XREFs of ZwQueryFullAttributesFile @ 0x1401C3450
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryFullAttributesFile(
        POBJECT_ATTRIBUTES ObjectAttributes,
        PFILE_NETWORK_OPEN_INFORMATION FileInformation)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, FileInformation, v2);
}
