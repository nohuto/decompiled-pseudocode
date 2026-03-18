/*
 * XREFs of ?DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z @ 0x1C026F0F8
 * Callers:
 *     DpiIndirectCbSendMessage @ 0x1C026F980 (DpiIndirectCbSendMessage.c)
 * Callees:
 *     ?DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z @ 0x1C026EFD0 (-DpiIndirectGetObjectName@@YAJPEAXPEAPEAU_OBJECT_NAME_INFORMATION@@@Z.c)
 */

__int64 __fastcall DpiIndirectOpenDevice(struct _DEVICE_OBJECT *a1, PVOID *a2, struct _DEVICE_OBJECT **a3)
{
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rax
  PDEVICE_OBJECT v6; // rsi
  int ObjectName; // eax
  void *v8; // rbx
  NTSTATUS v9; // edi
  struct _FILE_OBJECT *v10; // rcx
  PVOID Object; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-48h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-38h] BYREF
  void *FileHandle; // [rsp+B8h] [rbp+38h] BYREF

  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(a1);
  FileHandle = 0LL;
  v6 = DeviceAttachmentBaseRef;
  ObjectName = DpiIndirectGetObjectName(DeviceAttachmentBaseRef, (struct _OBJECT_NAME_INFORMATION **)&FileHandle);
  v8 = FileHandle;
  v9 = ObjectName;
  if ( ObjectName >= 0 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)FileHandle;
    KeEnterCriticalRegion();
    v9 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x40040u);
    if ( v9 >= 0 )
    {
      v9 = ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL);
      if ( v9 >= 0 )
      {
        v10 = (struct _FILE_OBJECT *)Object;
        *a2 = Object;
        *a3 = IoGetRelatedDeviceObject(v10);
      }
      ZwClose(FileHandle);
    }
    KeLeaveCriticalRegion();
  }
  ObfDereferenceObject(v6);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  return (unsigned int)v9;
}
