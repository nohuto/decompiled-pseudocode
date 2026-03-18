/*
 * XREFs of ?ReportGpuWakeupWorkItemCallback@DXGGLOBAL@@SAXPEAU_DEVICE_OBJECT@@PEAXPEAU_IO_WORKITEM@@@Z @ 0x1C0211A40
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReportCoreWakeupsDripsBlocker @ 0x1C0212B68 (DxgkReportCoreWakeupsDripsBlocker.c)
 */

void __fastcall DXGGLOBAL::ReportGpuWakeupWorkItemCallback(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  __int64 v5; // rax

  if ( Context )
  {
    v5 = WdLogNewEntry5_WdAssertion(IoObject);
    *(_QWORD *)(v5 + 24) = 4721LL;
    WdLogEvent5_WdAssertion(v5);
  }
  DxgkReportCoreWakeupsDripsBlocker(IoObject, 0LL);
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
}
