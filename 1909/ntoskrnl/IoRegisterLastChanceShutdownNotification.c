/*
 * XREFs of IoRegisterLastChanceShutdownNotification @ 0x140779E10
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObject @ 0x14003E070 (ObfReferenceObject.c)
 *     IopInterlockedInsertHeadList @ 0x1401965FC (IopInterlockedInsertHeadList.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     IopLogAuditIoRegisterNotificationEvent @ 0x140779F04 (IopLogAuditIoRegisterNotificationEvent.c)
 */

NTSTATUS __stdcall IoRegisterLastChanceShutdownNotification(PDEVICE_OBJECT DeviceObject)
{
  _QWORD *PoolWithTag; // rdi

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x68536F49u);
  if ( !PoolWithTag )
    return -1073741670;
  ObfReferenceObject(DeviceObject);
  PoolWithTag[2] = DeviceObject;
  IopInterlockedInsertHeadList((__int64 *)&IopNotifyLastChanceShutdownQueueHead, PoolWithTag);
  DeviceObject->Flags |= 0x800u;
  IopLogAuditIoRegisterNotificationEvent(&KERNEL_AUDIT_API_IOREGISTERLASTCHANCESHUTDOWNNOTIFICATION);
  return 0;
}
