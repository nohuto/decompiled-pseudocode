/*
 * XREFs of ZwDeleteFile @ 0x1401B9C90
 * Callers:
 *     NtEnableLastKnownGood @ 0x140706EE0 (NtEnableLastKnownGood.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1409F684C (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes);
}
