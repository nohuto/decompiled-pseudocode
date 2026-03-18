/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0245700
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000C320 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z @ 0x1C0241458 (-AddWakeUpCoreDripsBlockerTracking@DXGGLOBAL@@QEAAX_KPEAU_EPROCESS@@W4_DXGKETW_PROFILER_TYPE@@@Z.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(
        struct _DEVICE_OBJECT *IoObject,
        PVOID Context,
        PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax

  if ( Context )
  {
    v5 = WdLogNewEntry5_WdAssertion(IoObject, Context);
    *(_QWORD *)(v5 + 24) = 5104LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(IoObject);
  Global = DXGGLOBAL::GetGlobal(v8, v7);
  DXGGLOBAL::AddWakeUpCoreDripsBlockerTracking((__int64)Global, (__int64)DeviceAttachmentBaseRef, 0LL, 0xFFFFFFFF);
  ObfDereferenceObject(DeviceAttachmentBaseRef);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
