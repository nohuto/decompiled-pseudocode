/*
 * XREFs of ndisPnPDispatch @ 0x1C0018190
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferencePackage @ 0x1C0001008 (ndisReferencePackage.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qq @ 0x1C00066A0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qD @ 0x1C0009DA0 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_qdL @ 0x1C00158A0 (WPP_RECORDER_SF_qdL.c)
 *     ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0018530 (-ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ndisPnPIrpStartDevice @ 0x1C002F538 (ndisPnPIrpStartDevice.c)
 *     ?ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003E030 (-ndisPnPIrpFilterResourceRequirements@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP.c)
 *     ?ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003EEF4 (-ndisPnPIrpQueryInterface@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C003F248 (-ndisPnPIrpQueryPnPDeviceState@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3.c)
 *     McTemplateK0jqxq @ 0x1C0061768 (McTemplateK0jqxq.c)
 *     ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3B6C (-ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3C6C (-ndisPnPIrpCancelStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3D64 (-ndisPnPIrpDeviceUsageNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@P.c)
 *     ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E2C (-ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3F30 (-ndisPnPIrpQueryStop@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ndisPnPIrpStopDevice @ 0x1C00A4DBC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C00A4F64 (ndisPnPIrpSurpriseRemoval.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C0118F14 (ndisPnPIrpRemoveDevice.c)
 */

__int64 __fastcall ndisPnPDispatch(_DEVICE_OBJECT *a1, struct _IRP *a2)
{
  unsigned int v2; // esi
  unsigned int MinorFunction; // r14d
  struct _IRP *v4; // rbx
  int v6; // edx
  struct _DEVICE_OBJECT *v7; // rcx
  unsigned __int8 *v8; // r9
  struct _NDIS_MINIPORT_BLOCK *DeviceExtension; // rdi
  int v10; // edx
  int started; // eax
  char v13; // [rsp+30h] [rbp-10h]
  unsigned __int8 v14; // [rsp+70h] [rbp+30h] BYREF
  unsigned __int8 v15; // [rsp+80h] [rbp+40h] BYREF

  v2 = 0;
  v14 = 1;
  LOBYTE(MinorFunction) = 0;
  v15 = 1;
  v4 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      48,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      v13);
  }
  ndisReferencePackage((__int64)&ndisPkgs);
  DeviceExtension = (struct _NDIS_MINIPORT_BLOCK *)a1->DeviceExtension;
  if ( DeviceExtension->Header.Type == 17 )
  {
    MinorFunction = v4->Tail.Overlay.CurrentStackLocation->MinorFunction;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v6) = 4;
      WPP_RECORDER_SF_qL(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        13,
        50,
        (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
        (char)DeviceExtension,
        MinorFunction);
    }
    if ( Microsoft_Windows_NDISEnableBits < 0 )
      McTemplateK0jqxq(
        (_DWORD)v7,
        (unsigned int)&DispatchPnPIrp,
        (_DWORD)DeviceExtension + 4008,
        (_DWORD)DeviceExtension + 4008,
        DeviceExtension->IfIndex,
        DeviceExtension->NetLuid.Value,
        MinorFunction);
    if ( MinorFunction <= 6 )
    {
      if ( MinorFunction == 6 )
      {
        started = ndisPnPIrpCancelStop(v7, DeviceExtension, v4, &v15, &v14);
      }
      else if ( MinorFunction )
      {
        switch ( MinorFunction )
        {
          case 1u:
            started = ndisPnPIrpQueryRemove(v7, DeviceExtension, v4, v8, &v14);
            break;
          case 2u:
            started = ndisPnPIrpRemoveDevice(a1, (char)DeviceExtension, v4, (__int64)&v14);
            break;
          case 3u:
            started = ndisPnPIrpCancelRemove(v7, DeviceExtension, v4, &v15, &v14);
            break;
          case 4u:
            started = ndisPnPIrpStopDevice(v7, DeviceExtension, v4);
            break;
          default:
            started = ndisPnPIrpQueryStop(v7, DeviceExtension, v4, v8, &v14);
            break;
        }
      }
      else
      {
        started = ndisPnPIrpStartDevice(v7, DeviceExtension, v4, &v15, &v14);
      }
    }
    else
    {
      switch ( MinorFunction )
      {
        case 8u:
          started = ndisPnPIrpQueryInterface(v7, DeviceExtension, v4, v8, &v14);
          break;
        case 9u:
          started = ndisPnPIrpQueryCapabilities(v7, DeviceExtension, v4, v8, &v14);
          break;
        case 0xDu:
          started = ndisPnPIrpFilterResourceRequirements(v7, DeviceExtension, v4, v8, &v14);
          break;
        case 0x14u:
          started = ndisPnPIrpQueryPnPDeviceState(v7, DeviceExtension, v4, v8, &v14);
          break;
        case 0x16u:
          started = ndisPnPIrpDeviceUsageNotification(a1, DeviceExtension, v4, v8, &v14);
          break;
        case 0x17u:
          started = ndisPnPIrpSurpriseRemoval(v7, DeviceExtension, v4, &v15, &v14);
          break;
        default:
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v6) = 4;
            WPP_RECORDER_SF_qD(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              v6,
              13,
              51,
              (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
              (char)DeviceExtension,
              MinorFunction);
          }
LABEL_17:
          if ( DeviceExtension->NextDeviceObject )
          {
            ++v4->CurrentLocation;
            ++v4->Tail.Overlay.CurrentStackLocation;
            v2 = IofCallDriver(DeviceExtension->NextDeviceObject, v4);
            goto LABEL_19;
          }
LABEL_24:
          if ( !v15 )
            goto LABEL_19;
          goto LABEL_25;
      }
    }
    v2 = started;
    if ( !v14 )
      goto LABEL_24;
    goto LABEL_17;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v6,
      13,
      49,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a1,
      (char)v4);
  }
  v2 = -1073741808;
LABEL_25:
  v4->IoStatus.Status = v2;
  IofCompleteRequest(v4, 0);
LABEL_19:
  MmUnlockPagableImageSection(ImageSectionHandle);
  _InterlockedDecrement((volatile signed __int32 *)&ndisPkgs);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v10,
      0xDu,
      0x34u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)DeviceExtension,
      MinorFunction,
      v2);
  return v2;
}
