/*
 * XREFs of GetDeviceObjectPointer @ 0x1C012AC88
 * Callers:
 *     IsLegacyTouchPadDevice @ 0x1C012A240 (IsLegacyTouchPadDevice.c)
 *     IsMouseDeviceOnIgnoreList @ 0x1C012A710 (IsMouseDeviceOnIgnoreList.c)
 *     GetPointerDeviceKey @ 0x1C01D81C0 (GetPointerDeviceKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0162AB0 (__security_check_cookie.c)
 */

__int64 __fastcall GetDeviceObjectPointer(
        struct _UNICODE_STRING *a1,
        ACCESS_MASK a2,
        __int64 a3,
        void **a4,
        PVOID *a5,
        PDEVICE_OBJECT *a6)
{
  NTSTATUS v7; // ebx
  struct _FILE_OBJECT *v8; // rcx
  void *FileHandle; // [rsp+30h] [rbp-49h] BYREF
  PVOID Object; // [rsp+38h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v14[4]; // [rsp+80h] [rbp+7h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.SecurityQualityOfService = v14;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
  v14[2] = 257;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v14[0] = 12;
  v14[1] = 2;
  v7 = ZwOpenFile(&FileHandle, a2, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
  if ( v7 >= 0 )
  {
    v7 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
    if ( v7 < 0 )
    {
      ZwClose(FileHandle);
    }
    else
    {
      v8 = (struct _FILE_OBJECT *)Object;
      *a5 = Object;
      *a6 = IoGetRelatedDeviceObject(v8);
      *a4 = FileHandle;
    }
  }
  return (unsigned int)v7;
}
