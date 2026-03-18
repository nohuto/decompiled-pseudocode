/*
 * XREFs of UsbhFdoValidateConnectionPdo @ 0x1C003FF70
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 */

__int64 __fastcall UsbhFdoValidateConnectionPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  char v3; // si
  PDEVICE_OBJECT *v7; // r12
  _DWORD *v8; // rbx
  __int64 PortData; // rbp
  _IO_SECURITY_CONTEXT *SecurityContext; // r13
  unsigned int v11; // ebx
  int v12; // eax
  unsigned int v13; // eax
  unsigned int v15; // r10d
  int v16; // [rsp+80h] [rbp+18h] BYREF
  int v17; // [rsp+88h] [rbp+20h] BYREF

  v3 = 0;
  v16 = 0;
  v7 = (PDEVICE_OBJECT *)FdoExt(a1);
  v8 = PdoExt(a2);
  PortData = UsbhGetPortData(a1, *((_WORD *)v8 + 714));
  Log(a1, 8, 1667973963, PortData, *((unsigned __int16 *)v8 + 714));
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( *((_DWORD *)v7 + 340) == 5 )
  {
    if ( PortData )
    {
      v13 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v16, &v17);
      v3 = v16;
      v11 = v13;
      v12 = v17;
    }
    else
    {
      v11 = -1073741811;
      v12 = -2147482880;
    }
  }
  else
  {
    v11 = -1073741810;
    v12 = -1073713152;
  }
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    HIDWORD(SecurityContext->SecurityQos) = v12;
    a3->IoStatus.Status = v11;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    Log(a1, 8, 1667973937, PortData, (int)v11);
    return v11;
  }
  if ( (v3 & 1) != 0 && (v3 & 3) != 0 )
  {
    ++a3->CurrentLocation;
    ++a3->Tail.Overlay.CurrentStackLocation;
    v11 = IofCallDriver(v7[152], a3);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v11;
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073713152;
  a3->IoStatus.Status = -1073741810;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  Log(a1, 8, 1667973938, PortData, -1073741810LL);
  return v15;
}
