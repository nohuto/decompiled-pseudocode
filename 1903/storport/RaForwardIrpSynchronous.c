/*
 * XREFs of RaForwardIrpSynchronous @ 0x1C0012274
 * Callers:
 *     RaidAdapterDeviceUsageNotificationIrp @ 0x1C00121C0 (RaidAdapterDeviceUsageNotificationIrp.c)
 *     RaidAdapterStartDeviceIrp @ 0x1C0019D3C (RaidAdapterStartDeviceIrp.c)
 *     RaidAdapterFilterResourceRequirementsIrp @ 0x1C006F31C (RaidAdapterFilterResourceRequirementsIrp.c)
 *     RaidAdapterRemoveDeviceIrp @ 0x1C00733FC (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaSendIrpSynchronous @ 0x1C000FD20 (RaSendIrpSynchronous.c)
 */

__int64 __fastcall RaForwardIrpSynchronous(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 result; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  result = RaSendIrpSynchronous(a1, a2);
  if ( (int)result >= 0 )
    return (unsigned int)a2->IoStatus.Status;
  return result;
}
