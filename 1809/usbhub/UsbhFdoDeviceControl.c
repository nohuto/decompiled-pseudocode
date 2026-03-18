/*
 * XREFs of UsbhFdoDeviceControl @ 0x1C003E370
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhFdoChainIrp @ 0x1C0029CA8 (UsbhFdoChainIrp.c)
 *     UsbhIoctlCyclePort @ 0x1C004BF70 (UsbhIoctlCyclePort.c)
 *     UsbhIoctlGetDescriptorFromNodeConnection @ 0x1C004C714 (UsbhIoctlGetDescriptorFromNodeConnection.c)
 *     UsbhIoctlGetHubCaps @ 0x1C004CA38 (UsbhIoctlGetHubCaps.c)
 *     UsbhIoctlGetHubCapsEx @ 0x1C004CC8C (UsbhIoctlGetHubCapsEx.c)
 *     UsbhIoctlGetHubInformationEx @ 0x1C004CF1C (UsbhIoctlGetHubInformationEx.c)
 *     UsbhIoctlGetNodeConnectionAttributes @ 0x1C004D1BC (UsbhIoctlGetNodeConnectionAttributes.c)
 *     UsbhIoctlGetNodeConnectionDriverKeyName @ 0x1C004D42C (UsbhIoctlGetNodeConnectionDriverKeyName.c)
 *     UsbhIoctlGetNodeConnectionInfo @ 0x1C004D784 (UsbhIoctlGetNodeConnectionInfo.c)
 *     UsbhIoctlGetNodeConnectionInfoEx @ 0x1C004D80C (UsbhIoctlGetNodeConnectionInfoEx.c)
 *     UsbhIoctlGetNodeConnectionInfoExV2 @ 0x1C004DBAC (UsbhIoctlGetNodeConnectionInfoExV2.c)
 *     UsbhIoctlGetNodeConnectionName @ 0x1C004DE94 (UsbhIoctlGetNodeConnectionName.c)
 *     UsbhIoctlGetNodeInformation @ 0x1C004E15C (UsbhIoctlGetNodeInformation.c)
 *     UsbhIoctlGetPortConnectorProperties @ 0x1C004E424 (UsbhIoctlGetPortConnectorProperties.c)
 *     UsbhIoctlResetStuckHub @ 0x1C004E6E4 (UsbhIoctlResetStuckHub.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

NTSTATUS __fastcall UsbhFdoDeviceControl(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  unsigned int LowPart; // ebx
  int v5; // r10d
  int v6; // ebx
  _DWORD *v8; // rax
  unsigned int v9; // ebx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx
  unsigned int v17; // ebx
  unsigned int v18; // ebx
  unsigned int v19; // ebx
  unsigned int v20; // ebx
  int v21; // [rsp+30h] [rbp-28h]
  int v22; // [rsp+48h] [rbp-10h]

  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Log((__int64)a1, 8, 1178888559, ((unsigned __int64)LowPart >> 2) & 0xFFF, (__int64)a2);
  if ( KeGetCurrentIrql() )
  {
    LOBYTE(v22) = 0;
    v21 = v5 & (LowPart >> 2);
    v6 = -1073741811;
    UsbhException((int)a1, 0, 93, 0, 0, -1073741811, v21, usbfile_hub_c, 1431, v22);
LABEL_3:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
    return v6;
  }
  v8 = FdoExt((__int64)a1);
  Usbh_SSH_Event(a1, 6u, (__int64)(v8 + 434));
  if ( LowPart <= 0x220444 )
  {
    if ( LowPart == 2229316 )
      return UsbhIoctlCyclePort((_DWORD)a1, a2);
    v9 = LowPart - 2229256;
    if ( !v9 )
      return UsbhIoctlGetNodeInformation((_DWORD)a1, a2);
    v10 = v9 - 4;
    if ( !v10 )
      return UsbhIoctlGetNodeConnectionInfo((_DWORD)a1, (_DWORD)a2);
    v11 = v10 - 4;
    if ( !v11 )
      return UsbhIoctlGetDescriptorFromNodeConnection((int)a1, (int)a2);
    v12 = v11 - 4;
    if ( !v12 )
      return UsbhIoctlGetNodeConnectionName((_DWORD)a1, a2);
    v13 = v12 - 12;
    if ( !v13 )
      return UsbhIoctlGetNodeConnectionDriverKeyName((_DWORD)a1, a2);
    v14 = v13 - 28;
    if ( !v14 )
      return UsbhIoctlGetHubCaps((_DWORD)a1, a2);
    if ( v14 == 4 )
      return UsbhIoctlGetNodeConnectionAttributes((_DWORD)a1, a2);
    return UsbhFdoChainIrp((__int64)a1, a2);
  }
  v15 = LowPart - 2229320;
  if ( !v15 )
    return UsbhIoctlGetNodeConnectionInfoEx((_DWORD)a1, (_DWORD)a2);
  v16 = v15 - 4;
  if ( !v16 )
    return UsbhIoctlResetStuckHub((_DWORD)a1, a2);
  v17 = v16 - 4;
  if ( !v17 )
    return UsbhIoctlGetHubCapsEx((_DWORD)a1, a2);
  v18 = v17 - 4;
  if ( !v18 )
    return UsbhIoctlGetHubInformationEx((_DWORD)a1, a2);
  v19 = v18 - 4;
  if ( !v19 )
    return UsbhIoctlGetPortConnectorProperties((_DWORD)a1, a2);
  v20 = v19 - 4;
  if ( v20 )
  {
    if ( v20 == 850855 )
    {
      v6 = -1073741808;
      goto LABEL_3;
    }
    return UsbhFdoChainIrp((__int64)a1, a2);
  }
  return UsbhIoctlGetNodeConnectionInfoExV2((_DWORD)a1, a2);
}
