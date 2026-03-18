/*
 * XREFs of IoRegisterShutdownNotification @ 0x140779E90
 * Callers:
 *     RawInitialize @ 0x140A189B0 (RawInitialize.c)
 *     WmipDriverEntry @ 0x140A18C20 (WmipDriverEntry.c)
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1401965FC (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140779F04 (IopLogAuditIoRegisterNotificationEvent.c)
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
