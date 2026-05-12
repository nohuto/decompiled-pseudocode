/*
 * XREFs of RaForwardIrp @ 0x1C0012360
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0006DB4 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C00126FC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C001293C (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0016E98 (RaidAdapterPowerIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C001FCB4 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00359C4 (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006B870 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0072874 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0073FE0 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0074084 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00743F8 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00745C8 (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaForwardIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
