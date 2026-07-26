/*
 * XREFs of ndisPnPDispatch @ 0x1C00C8490
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C003A814 (WPP_SF_qdD.c)
 *     WPP_SF_qq @ 0x1C003A868 (WPP_SF_qq.c)
 *     McTemplateK0jqxq @ 0x1C003D24C (McTemplateK0jqxq.c)
 *     ndisReferencePackage @ 0x1C00B685C (ndisReferencePackage.c)
 *     ndisPnPIrpQueryCapabilities @ 0x1C00C8670 (ndisPnPIrpQueryCapabilities.c)
 *     ndisPnPIrpQueryInterface @ 0x1C00C8764 (ndisPnPIrpQueryInterface.c)
 *     ndisPnPIrpStartDevice @ 0x1C00CA074 (ndisPnPIrpStartDevice.c)
 *     ndisPnPIrpFilterResourceRequirements @ 0x1C00D12A8 (ndisPnPIrpFilterResourceRequirements.c)
 *     ndisPnPIrpQueryPnPDeviceState @ 0x1C00D1C4C (ndisPnPIrpQueryPnPDeviceState.c)
 *     ndisPnPIrpCancelRemove @ 0x1C00F4500 (ndisPnPIrpCancelRemove.c)
 *     ndisPnPIrpCancelStop @ 0x1C00F45E0 (ndisPnPIrpCancelStop.c)
 *     ndisPnPIrpDeviceUsageNotification @ 0x1C00F46B8 (ndisPnPIrpDeviceUsageNotification.c)
 *     ndisPnPIrpQueryRemove @ 0x1C00F4780 (ndisPnPIrpQueryRemove.c)
 *     ndisPnPIrpQueryStop @ 0x1C00F4860 (ndisPnPIrpQueryStop.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00F4904 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPIrpStopDevice @ 0x1C00F4B78 (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00F4D34 (ndisPnPIrpSurpriseRemoval.c)
 */

__int64 __fastcall ndisPnPDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  unsigned int v2; // esi
  unsigned int MinorFunction; // r14d
  __int64 v6; // rcx
  int v7; // r9d
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int Stop; // eax
  __int64 *v12; // [rsp+20h] [rbp-20h]
  __int64 v13; // [rsp+70h] [rbp+30h] BYREF
  char v14; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  LOBYTE(v13) = 1;
  MinorFunction = 0;
  v14 = 1;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x30u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, DeviceObject, Irp);
  ndisReferencePackage((__int64)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)DeviceObject->DeviceExtension;
  if ( DeviceExtension->Header.Type == 17 )
  {
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    MinorFunction = CurrentStackLocation->MinorFunction;
    if ( (unsigned __int8)byte_1C00A025C >= 4u )
      WPP_SF_qD(
        0x32u,
        &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids,
        (__int64)DeviceObject->DeviceExtension,
        CurrentStackLocation->MinorFunction);
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxq(
        v6,
        &DispatchPnPIrp,
        &DeviceExtension->InterfaceGuid,
        (__int64)&DeviceExtension->InterfaceGuid,
        DeviceExtension->IfIndex,
        DeviceExtension->NetLuid.Value,
        MinorFunction);
    if ( MinorFunction <= 6 )
    {
      if ( MinorFunction == 6 )
      {
        Stop = ndisPnPIrpCancelStop(v6, DeviceExtension, Irp, &v14, &v13);
      }
      else if ( MinorFunction )
      {
        switch ( MinorFunction )
        {
          case 1u:
            v12 = &v13;
            Stop = ndisPnPIrpQueryRemove(v6, DeviceExtension, Irp);
            break;
          case 2u:
            Stop = ndisPnPIrpRemoveDevice(DeviceObject, DeviceExtension, Irp, (__int64)&v13);
            break;
          case 3u:
            Stop = ndisPnPIrpCancelRemove(v6, DeviceExtension, Irp, &v14, &v13);
            break;
          default:
            v12 = &v13;
            if ( MinorFunction == 4 )
              Stop = ndisPnPIrpStopDevice(v6, DeviceExtension, Irp);
            else
              Stop = ndisPnPIrpQueryStop(v6, DeviceExtension, Irp);
            break;
        }
      }
      else
      {
        Stop = ndisPnPIrpStartDevice(v6, DeviceExtension, Irp, &v14, &v13);
      }
    }
    else
    {
      switch ( MinorFunction )
      {
        case 8u:
          Stop = ndisPnPIrpQueryInterface(v6, (_DWORD)DeviceExtension, (_DWORD)Irp, v7, (__int64)&v13);
          break;
        case 9u:
          Stop = ndisPnPIrpQueryCapabilities(v6, (_DWORD)DeviceExtension, (_DWORD)Irp, v7, (__int64)&v13);
          break;
        case 0xDu:
          Stop = ndisPnPIrpFilterResourceRequirements(v6, (_DWORD)DeviceExtension, (_DWORD)Irp, v7, (__int64)&v13);
          break;
        case 0x14u:
          Stop = ndisPnPIrpQueryPnPDeviceState(v6, (_DWORD)DeviceExtension, (_DWORD)Irp, v7, (__int64)&v13);
          break;
        case 0x16u:
          Stop = ndisPnPIrpDeviceUsageNotification(
                   (_DWORD)DeviceObject,
                   (_DWORD)DeviceExtension,
                   (_DWORD)Irp,
                   v7,
                   (__int64)&v13);
          break;
        case 0x17u:
          Stop = ndisPnPIrpSurpriseRemoval(v6, DeviceExtension, Irp, &v14, &v13);
          break;
        default:
          if ( (unsigned __int8)byte_1C00A025C >= 4u )
            WPP_SF_qD(0x33u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)DeviceExtension, MinorFunction);
LABEL_17:
          if ( DeviceExtension->NextDeviceObject )
          {
            ++Irp->CurrentLocation;
            ++Irp->Tail.Overlay.CurrentStackLocation;
            v2 = IofCallDriver(DeviceExtension->NextDeviceObject, Irp);
            goto LABEL_19;
          }
LABEL_24:
          if ( !v14 )
            goto LABEL_19;
          goto LABEL_25;
      }
    }
    v2 = Stop;
    if ( !(_BYTE)v13 )
      goto LABEL_24;
    goto LABEL_17;
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qq(0x31u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, DeviceObject, Irp);
  v2 = -1073741808;
LABEL_25:
  Irp->IoStatus.Status = v2;
  IofCompleteRequest(Irp, 0);
LABEL_19:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
  {
    LODWORD(v12) = v2;
    WPP_SF_qdD(0x34u, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)DeviceExtension, MinorFunction, v12);
  }
  return v2;
}
