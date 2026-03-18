/*
 * XREFs of PopRegisterCoolingExtensionProtection @ 0x1408A3EAC
 * Callers:
 *     PopAssociateThermalRequest @ 0x14075AB90 (PopAssociateThermalRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400EBF60 (IoGetDeviceAttachmentBaseRef.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     IoGetDeviceProperty @ 0x1405BF670 (IoGetDeviceProperty.c)
 *     IoGetDeviceObjectPointer @ 0x140661AF0 (IoGetDeviceObjectPointer.c)
 *     IoRegisterPlugPlayNotification @ 0x1407208B0 (IoRegisterPlugPlayNotification.c)
 */

__int64 __fastcall PopRegisterCoolingExtensionProtection(PDEVICE_OBJECT *Context)
{
  PVOID *NotificationEntry; // r12
  NTSTATUS DeviceProperty; // ebx
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rdi
  PVOID PoolWithTag; // rsi
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-10h] BYREF
  ULONG BufferLength; // [rsp+80h] [rbp+30h] BYREF
  PFILE_OBJECT FileObject; // [rsp+88h] [rbp+38h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+90h] [rbp+40h] BYREF

  NotificationEntry = (PVOID *)(Context + 7);
  FileObject = 0LL;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  if ( Context[7] )
  {
    return 0;
  }
  else
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context[6]);
    if ( IoGetDeviceProperty(DeviceAttachmentBaseRef, DevicePropertyPhysicalDeviceObjectName, 0, 0LL, &BufferLength) == -1073741789 )
    {
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, BufferLength, 0x6C6F4350u);
      if ( PoolWithTag )
      {
        DeviceProperty = IoGetDeviceProperty(
                           DeviceAttachmentBaseRef,
                           DevicePropertyPhysicalDeviceObjectName,
                           BufferLength,
                           PoolWithTag,
                           &BufferLength);
        if ( DeviceProperty >= 0 )
        {
          RtlInitUnicodeString(&DestinationString, (PCWSTR)PoolWithTag);
          DeviceProperty = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
          if ( DeviceProperty >= 0 )
            DeviceProperty = IoRegisterPlugPlayNotification(
                               EventCategoryTargetDeviceChange,
                               0,
                               FileObject,
                               DeviceObject->DriverObject,
                               (PDRIVER_NOTIFICATION_CALLBACK_ROUTINE)PopCoolingExtensionPnpNotification,
                               Context,
                               NotificationEntry);
          if ( FileObject )
            ObfDereferenceObject(FileObject);
        }
        ExFreePoolWithTag(PoolWithTag, 0x6C6F4350u);
      }
      else
      {
        DeviceProperty = -1073741670;
      }
    }
    else
    {
      DeviceProperty = -1073741823;
    }
    if ( DeviceAttachmentBaseRef )
      ObfDereferenceObject(DeviceAttachmentBaseRef);
  }
  return (unsigned int)DeviceProperty;
}
