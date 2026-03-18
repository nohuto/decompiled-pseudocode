/*
 * XREFs of ZwSetInformationObject @ 0x1401C17D0
 * Callers:
 *     CmpCreateHive @ 0x14068E190 (CmpCreateHive.c)
 *     CmpCmdHiveClose @ 0x1406B9CA8 (CmpCmdHiveClose.c)
 *     CmpFlushBackupHive @ 0x14082CE80 (CmpFlushBackupHive.c)
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
