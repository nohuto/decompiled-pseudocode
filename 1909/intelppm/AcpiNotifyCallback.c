/*
 * XREFs of AcpiNotifyCallback @ 0x1C000AF70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C000360C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C00036CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00093AC (WPP_RECORDER_SF_dd.c)
 */

void __fastcall AcpiNotifyCallback(__int64 a1, int a2)
{
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v5; // rdx
  __int64 v6; // [rsp+28h] [rbp-20h]

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( !WorkItem )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        4u,
        0x4Bu,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      2u,
      0x4Cu,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      a2,
      *(_DWORD *)(a1 + 56));
  switch ( a2 )
  {
    case 8:
      v5 = AcpiOSCNotifyWorker;
      goto LABEL_21;
    case 128:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      goto LABEL_21;
    case 129:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
      goto LABEL_21;
    case 130:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
      goto LABEL_21;
    case 131:
      v5 = (IO_WORKITEM_ROUTINE *)AcpiCppcGuaranteedNotifyWorker;
      goto LABEL_21;
    case 133:
      v5 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
LABEL_21:
      IoQueueWorkItem(WorkItem, v5, CriticalWorkQueue, WorkItem);
      return;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v6) = a2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      0x4Du,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
      v6);
  }
  IoFreeWorkItem(WorkItem);
}
