/*
 * XREFs of UsbhSetWmiDataBlock @ 0x1C0055310
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSshEnableDisable @ 0x1C001F218 (UsbhSshEnableDisable.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0029C90 (UsbhSetPdoRegistryParameter.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C00528D0 (UsbhSetHubSelectiveSuspend.c)
 */

NTSTATUS __fastcall UsbhSetWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        unsigned int a5,
        char *a6)
{
  __int64 v10; // r10
  int v11; // r11d
  int v12; // ebx
  NTSTATUS v13; // r8d
  _BYTE *v14; // r9
  __int64 v15; // r10
  int v16; // eax
  unsigned int v17; // eax
  PDEVICE_OBJECT *v18; // rax
  char v19; // bl
  BOOL Data; // [rsp+50h] [rbp+18h] BYREF

  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 64, 1935101257, 0LL, 0LL);
  if ( !a3 )
    goto LABEL_17;
  v12 = a3 - 2;
  if ( !v12 )
  {
    if ( !a5 )
      goto LABEL_7;
    if ( !a4 && *(_DWORD *)(v10 + 3280) != 6 )
    {
      v19 = *a6;
      UsbhSshEnableDisable((__int64)DeviceObject, 5 - (*a6 != 0));
      UsbhSetHubSelectiveSuspend((__int64)DeviceObject, v19 != 0);
      goto LABEL_12;
    }
LABEL_17:
    v13 = -1073741808;
    return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
  }
  if ( v12 == 1 )
  {
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
    {
      Log((__int64)DeviceObject, v11, 2003659059, (__int64)a6, a5);
      if ( !a5 )
      {
LABEL_7:
        v13 = -1073741789;
        return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
      }
      v16 = *(_DWORD *)(v15 + 2560);
      if ( *v14 )
        v17 = v16 | 0x1000000;
      else
        v17 = v16 & 0xFEFFFFFF;
      *(_DWORD *)(v15 + 2560) = v17;
      Data = *v14 != 0;
      v18 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
      UsbhSetPdoRegistryParameter(v18[149], L"WakeSystemOnConnect", 4u, &Data, 4u);
LABEL_12:
      v13 = 0;
      return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
    }
    goto LABEL_17;
  }
  v13 = -1073741163;
  return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
}
