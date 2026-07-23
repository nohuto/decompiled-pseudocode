/*
 * XREFs of ZwDeleteFile @ 0x1401C1A90
 * Callers:
 *     NtEnableLastKnownGood @ 0x1406990D0 (NtEnableLastKnownGood.c)
 *     PopDeleteHiberFile @ 0x1408A7EC4 (PopDeleteHiberFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3AE14 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
