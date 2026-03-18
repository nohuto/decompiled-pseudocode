/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C0029424
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     UsbhCopyPnpString @ 0x1C00295C0 (UsbhCopyPnpString.c)
 *     memset @ 0x1C002B800 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v9; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v11; // ecx
  int v12; // edx
  int v13; // edi
  __int64 v15; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = v7;
  SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext || LODWORD(SecurityContext->SecurityQos) != 1 )
  {
    v13 = -1073741811;
    goto LABEL_24;
  }
  if ( HIDWORD(SecurityContext->SecurityQos) != 204 )
  {
    v13 = -1073741789;
    goto LABEL_24;
  }
  memset(CurrentStackLocation->Parameters.Create.SecurityContext, 0, 0xCCuLL);
  LODWORD(SecurityContext->AccessState) = 0;
  v11 = 0;
  LODWORD(SecurityContext->SecurityQos) = 1;
  HIDWORD(SecurityContext->SecurityQos) = 204;
  v12 = v9[640];
  if ( (v12 & 0x8000) != 0 )
  {
    LODWORD(SecurityContext->AccessState) = 1;
    v11 = 1;
    v12 = v9[640];
  }
  if ( (v12 & 0x80u) != 0 )
  {
    v11 |= 8u;
    LODWORD(SecurityContext->AccessState) = v11;
    v12 = v9[640];
  }
  if ( (v12 & 0x10000) != 0 )
  {
    v11 |= 4u;
    LODWORD(SecurityContext->AccessState) = v11;
    v12 = v9[640];
  }
  if ( (v12 & 0x8001) == 0x8001 || (v12 & 0x40) != 0 )
  {
    v11 |= 2u;
    LODWORD(SecurityContext->AccessState) = v11;
    v12 = v9[640];
  }
  if ( (v12 & 0x80000) != 0 )
  {
    v11 |= 0x20u;
    LODWORD(SecurityContext->AccessState) = v11;
    v12 = v9[640];
  }
  if ( (v12 & 1) != 0 )
  {
    v11 |= 0x10u;
    LODWORD(SecurityContext->AccessState) = v11;
  }
  if ( v9[758] == 100 )
    LODWORD(SecurityContext->AccessState) = v11 | 0x40;
  if ( (v6[355] & 0x10000) != 0 )
  {
    HIDWORD(SecurityContext[5].AccessState) |= 1u;
    *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 650);
    *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 654);
    *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 658);
    *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 662);
    LODWORD(SecurityContext[8].AccessState) = v6[666];
  }
  v13 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 528);
  if ( v13 >= 0 )
  {
    v13 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 524);
    if ( v13 < 0 )
    {
      v15 = (__int64)&SecurityContext[1].SecurityQos + 4;
    }
    else
    {
      v13 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 552);
      if ( v13 >= 0 )
        goto LABEL_24;
      UsbhFreeID((__int64)&SecurityContext[1].SecurityQos + 4);
      v15 = (__int64)&SecurityContext->AccessState + 4;
    }
    UsbhFreeID(v15);
  }
LABEL_24:
  a3->IoStatus.Status = v13;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v13;
}
