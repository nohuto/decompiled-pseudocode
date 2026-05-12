/*
 * XREFs of RaForwardIrp @ 0x1C00171EC
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0003014 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0013F68 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0017234 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C002290C (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C00389F4 (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C006B478 (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C0072554 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C0073C58 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C0073CFC (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C0074084 (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C0074244 (RaidAdapterSurpriseRemovalIrp.c)
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
