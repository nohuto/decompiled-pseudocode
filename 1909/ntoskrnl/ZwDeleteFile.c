/*
 * XREFs of ZwDeleteFile @ 0x1401C2610
 * Callers:
 *     NtEnableLastKnownGood @ 0x1406DA230 (NtEnableLastKnownGood.c)
 *     PopDeleteHiberFile @ 0x1408A7724 (PopDeleteHiberFile.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140A3ABE4 (PiLastGoodRevertLastKnownDirectory.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwDeleteFile(POBJECT_ATTRIBUTES ObjectAttributes)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ObjectAttributes, v1, v2);
}
