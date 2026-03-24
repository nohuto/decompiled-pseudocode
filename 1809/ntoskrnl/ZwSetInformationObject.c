/*
 * XREFs of ZwSetInformationObject @ 0x1401B8D10
 * Callers:
 *     CmpCreateHive @ 0x1405A6574 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1405AFA08 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x1407F4050 (CmpFlushBackupHive.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwSetInformationObject(
        HANDLE ObjectHandle,
        OBJECT_INFORMATION_CLASS ObjectInformationClass,
        PVOID ObjectInformation,
        ULONG Length)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ObjectHandle, *(_QWORD *)&ObjectInformationClass, ObjectInformation);
}
