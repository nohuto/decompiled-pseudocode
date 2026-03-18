/*
 * XREFs of IoRegisterShutdownNotification @ 0x1407768B0
 * Callers:
 *     RawInitialize @ 0x140A184F0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A18760 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E330 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x140195E1C (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140776924 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rax
  _QWORD *v3; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  v3 = PoolWithTag;
  if ( !PoolWithTag )
    return -1073741670;
  PoolWithTag[2] = DeviceObject;
  ObfReferenceObject(DeviceObject);
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyShutdownQueueHead, v3);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERSHUTDOWNNOTIFICATION);
  return 0;
}
