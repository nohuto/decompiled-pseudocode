/*
 * XREFs of ZwSetInformationObject @ 0x1401B8E70
 * Callers:
 *     CmpCreateHive @ 0x1405A7574 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1405B0A08 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x1407F5250 (CmpFlushBackupHive.c)
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
