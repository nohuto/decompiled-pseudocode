/*
 * XREFs of DpiPdoDispatchPower @ 0x1C0043F30
 * Callers:
 *     <none>
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C001DE80 (DpiCheckForOutstandingD3Requests.c)
 *     DpiCorrectPowerAction @ 0x1C001E0C0 (DpiCorrectPowerAction.c)
 *     DxgkStartCoreDripsBlockerTracking @ 0x1C0141A18 (DxgkStartCoreDripsBlockerTracking.c)
 *     DxgkStopCoreDripsBlockerTracking @ 0x1C0141BAC (DxgkStopCoreDripsBlockerTracking.c)
 *     DpiPdoSetDevicePower @ 0x1C027766C (DpiPdoSetDevicePower.c)
 */

__int64 __fastcall DpiPdoDispatchPower(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  char *DeviceExtension; // rdi
  NTSTATUS v6; // esi
  ULONG Options; // eax
  POWER_STATE v8; // ebx
  POWER_STATE v9; // eax
  unsigned int v10; // eax
  unsigned int Status; // ebx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  DeviceExtension = (char *)DeviceObject->DeviceExtension;
  if ( CurrentStackLocation->MinorFunction == 2 )
  {
    Options = CurrentStackLocation->Parameters.Create.Options;
    v8.SystemState = (SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
    if ( Options == 1 )
    {
      KeEnterCriticalRegion();
      if ( DeviceExtension[483] )
      {
        DxgkStartCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
        DpiCheckForOutstandingD3Requests((__int64)DeviceExtension);
      }
      ExAcquireResourceExclusiveLite(*((PERESOURCE *)DeviceExtension + 21), 1u);
      v9.SystemState = *(_DWORD *)(DeviceExtension + 284);
      if ( v8.SystemState <= v9.SystemState )
      {
        if ( v8.SystemState >= v9.SystemState )
        {
          v6 = 0;
        }
        else
        {
          v10 = DpiCorrectPowerAction(
                  (__int64)DeviceObject,
                  HIWORD(CurrentStackLocation->Parameters.Read.Length) & 0xF,
                  CurrentStackLocation->Parameters.Create.EaLength);
          v6 = DpiPdoSetDevicePower(DeviceObject, (unsigned int)v8.SystemState, v10);
          PoSetPowerState(DeviceObject, DevicePowerState, v8);
        }
      }
      else
      {
        PoSetPowerState(DeviceObject, DevicePowerState, v8);
        v6 = DpiPdoSetDevicePower(
               DeviceObject,
               (unsigned int)v8.SystemState,
               CurrentStackLocation->Parameters.Create.EaLength);
      }
      if ( DeviceExtension[483] )
      {
        DxgkStopCoreDripsBlockerTracking(*((_QWORD *)DeviceExtension + 477), 4023LL);
        _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*((_QWORD *)DeviceExtension + 3) + 64LL) + 3992LL));
      }
      ExReleaseResourceLite(*((PERESOURCE *)DeviceExtension + 21));
      KeLeaveCriticalRegion();
    }
    else
    {
      if ( Options )
        goto LABEL_19;
      *((POWER_STATE *)DeviceExtension + 70) = v8;
      v6 = 0;
    }
    if ( v6 != -1073741637 )
      goto LABEL_18;
  }
  else if ( CurrentStackLocation->MinorFunction == 3 )
  {
    v6 = 0;
LABEL_18:
    Irp->IoStatus.Status = v6;
  }
LABEL_19:
  PoStartNextPowerIrp(Irp);
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
