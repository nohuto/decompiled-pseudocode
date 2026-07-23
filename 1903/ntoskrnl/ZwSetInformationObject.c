/*
 * XREFs of ZwSetInformationObject @ 0x1401C0C50
 * Callers:
 *     CmpCmdHiveClose @ 0x14063E098 (CmpCmdHiveClose.c)
 *     CmpCreateHive @ 0x14065E124 (CmpCreateHive.c)
 *     CmpFlushBackupHive @ 0x14083126C (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle);
}
