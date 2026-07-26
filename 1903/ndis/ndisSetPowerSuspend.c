/*
 * XREFs of ndisSetPowerSuspend @ 0x1C011C2E4
 * Callers:
 *     ndisSetDevicePower @ 0x1C00134B4 (ndisSetDevicePower.c)
 * Callees:
 *     ?ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z @ 0x1C00B66E0 (-ndisWdmSendPmOidsForSuspend@@YAHPEAU_NDIS_MINIPORT_BLOCK@@W4_DEVICE_POWER_STATE@@@Z.c)
 */

__int64 __fastcall ndisSetPowerSuspend(PIRP Irp, __int64 a2, struct _NDIS_MINIPORT_BLOCK *a3)
{
  enum _DEVICE_POWER_STATE v3; // ebx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v7; // ebx

  v3 = *(_DWORD *)(a2 + 24);
  if ( (unsigned int)ndisWdmSendPmOidsForSuspend(a3, v3) )
  {
    v7 = -1073741823;
    Irp->IoStatus.Status = -1073741823;
    IofCompleteRequest(Irp, 0);
  }
  else
  {
    PoSetPowerState(a3->DeviceObject, DevicePowerState, (POWER_STATE)v3);
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
    CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
    CurrentStackLocation[-1].Control = 0;
    Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
    IofCallDriver(a3->NextDeviceObject, Irp);
    return 259;
  }
  return v7;
}
