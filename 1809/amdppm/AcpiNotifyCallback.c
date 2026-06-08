/*
 * XREFs of AcpiNotifyCallback @ 0x1C0006B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00010B0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C00016A8 (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00017AC (WPP_RECORDER_SF_DD.c)
 */

void __fastcall AcpiNotifyCallback(__int64 a1, int a2)
{
  struct _IO_WORKITEM *WorkItem; // rbx
  IO_WORKITEM_ROUTINE *v5; // rdx
  __int64 v6; // [rsp+28h] [rbp-20h]

  WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)a1);
  if ( !WorkItem )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      4u,
      0x4Bu,
      (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids);
    return;
  }
  WPP_RECORDER_SF_DD(
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
      break;
    case 128:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiPStateNotifyWorker;
      break;
    case 129:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiCStateNotifyWorker;
      break;
    case 130:
      v5 = (IO_WORKITEM_ROUTINE *)&AcpiTStateNotifyWorker;
      break;
    case 131:
      v5 = (IO_WORKITEM_ROUTINE *)AcpiCppcGuaranteedNotifyWorker;
      break;
    case 133:
      v5 = (IO_WORKITEM_ROUTINE *)AcpiCppcHighestNotifyWorker;
      break;
    default:
      LODWORD(v6) = a2;
      WPP_RECORDER_SF_D(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0x4Du,
        (__int64)&WPP_eb7b501de93c334997b4c3503e72e86c_Traceguids,
        v6);
      IoFreeWorkItem(WorkItem);
      return;
  }
  IoQueueWorkItem(WorkItem, v5, CriticalWorkQueue, WorkItem);
}
