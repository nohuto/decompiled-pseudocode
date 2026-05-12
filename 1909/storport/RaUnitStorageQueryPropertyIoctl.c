/*
 * XREFs of RaUnitStorageQueryPropertyIoctl @ 0x1C006B568
 * Callers:
 *     RaUnitDeviceControlIrp @ 0x1C0007654 (RaUnitDeviceControlIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C00331C4 (McTemplateK0pd.c)
 *     RaUnitStorageQueryDeviceEndurancePropertyIoctl @ 0x1C00472E0 (RaUnitStorageQueryDeviceEndurancePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1C0047444 (RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1C0047594 (RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceTemperaturePropertyIoctl @ 0x1C0047754 (RaUnitStorageQueryDeviceTemperaturePropertyIoctl.c)
 *     RaUnitStorageQueryDevicePropertyIoctl @ 0x1C006B294 (RaUnitStorageQueryDevicePropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIdPropertyIoctl @ 0x1C006F4C4 (RaUnitStorageQueryDeviceIdPropertyIoctl.c)
 *     RaUnitStorageQueryDevicePowerPropertyIoctl @ 0x1C0070284 (RaUnitStorageQueryDevicePowerPropertyIoctl.c)
 *     RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl @ 0x1C0070530 (RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl.c)
 */

NTSTATUS __fastcall RaUnitStorageQueryPropertyIoctl(__int64 a1, PIRP Irp)
{
  int v4; // eax
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  int Status; // [rsp+20h] [rbp-38h]
  GUID v8; // [rsp+30h] [rbp-28h] BYREF

  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < 8 )
  {
    Irp->IoStatus.Information = 0LL;
    return RaidCompleteRequestEx(Irp, 0, 0xC00000EF);
  }
  else
  {
    v4 = *(_DWORD *)Irp->AssociatedIrp.MasterIrp;
    if ( v4 )
    {
      switch ( v4 )
      {
        case 2:
          return RaUnitStorageQueryDeviceIdPropertyIoctl(a1);
        case 12:
          return RaUnitStorageQueryDevicePowerPropertyIoctl(a1);
        case 48:
          return RaUnitStorageQueryDeviceIoCapabilityPropertyIoctl(a1);
        case 50:
          return RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(a1, Irp);
        case 52:
          return RaUnitStorageQueryDeviceTemperaturePropertyIoctl(a1, Irp);
        case 54:
          return RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(a1, Irp);
        case 62:
          return RaUnitStorageQueryDeviceEndurancePropertyIoctl(a1, Irp);
        default:
          if ( StorEtwLoggingEnabled )
          {
            *(_QWORD *)&v8.Data1 = 0LL;
            *(_QWORD *)v8.Data4 = 0LL;
            IoGetActivityIdIrp(Irp, &v8);
            if ( (byte_1C0062742 & 0x10) != 0 )
            {
              Status = Irp->IoStatus.Status;
              McTemplateK0pd(v6, &EventNonReadWriteRequestComplete, &v8, Irp, Status);
            }
          }
          ++Irp->CurrentLocation;
          ++Irp->Tail.Overlay.CurrentStackLocation;
          return IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 8LL), Irp);
      }
    }
    else
    {
      return RaUnitStorageQueryDevicePropertyIoctl(a1, Irp);
    }
  }
}
