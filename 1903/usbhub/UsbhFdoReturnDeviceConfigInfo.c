/*
 * XREFs of UsbhFdoReturnDeviceConfigInfo @ 0x1C002A5E4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016EF0 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhFreeID @ 0x1C001DC1C (UsbhFreeID.c)
 *     UsbhCopyPnpString @ 0x1C002A784 (UsbhCopyPnpString.c)
 *     memset @ 0x1C002CA00 (memset.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceConfigInfo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _DWORD *v7; // rdi
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  __int64 v13; // rcx

  v6 = PdoExt(a2);
  v7 = FdoExt(a1);
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( !SecurityContext || LODWORD(SecurityContext->SecurityQos) != 1 )
  {
    v11 = -1073741811;
    goto LABEL_24;
  }
  if ( HIDWORD(SecurityContext->SecurityQos) != 204 )
  {
    v11 = -1073741789;
    goto LABEL_24;
  }
  memset((char *)&SecurityContext->AccessState + 4, 0, 0xC0uLL);
  LODWORD(SecurityContext->AccessState) = 0;
  v9 = 0;
  LODWORD(SecurityContext->SecurityQos) = 1;
  HIDWORD(SecurityContext->SecurityQos) = 204;
  v10 = v7[640];
  if ( (v10 & 0x8000) != 0 )
  {
    LODWORD(SecurityContext->AccessState) = 1;
    v9 = 1;
    v10 = v7[640];
  }
  if ( (v10 & 0x80u) != 0 )
  {
    v9 |= 8u;
    LODWORD(SecurityContext->AccessState) = v9;
    v10 = v7[640];
  }
  if ( (v10 & 0x10000) != 0 )
  {
    v9 |= 4u;
    LODWORD(SecurityContext->AccessState) = v9;
    v10 = v7[640];
  }
  if ( (v10 & 0x8001) == 0x8001 || (v10 & 0x40) != 0 )
  {
    v9 |= 2u;
    LODWORD(SecurityContext->AccessState) = v9;
    v10 = v7[640];
  }
  if ( (v10 & 0x80000) != 0 )
  {
    v9 |= 0x20u;
    LODWORD(SecurityContext->AccessState) = v9;
    v10 = v7[640];
  }
  if ( (v10 & 1) != 0 )
  {
    v9 |= 0x10u;
    LODWORD(SecurityContext->AccessState) = v9;
  }
  if ( v7[758] == 100 )
    LODWORD(SecurityContext->AccessState) = v9 | 0x40;
  if ( (v6[355] & 0x10000) != 0 )
  {
    HIDWORD(SecurityContext[5].AccessState) |= 1u;
    *(_OWORD *)&SecurityContext[5].DesiredAccess = *(_OWORD *)(v6 + 650);
    *(_OWORD *)&SecurityContext[6].AccessState = *(_OWORD *)(v6 + 654);
    *(_OWORD *)&SecurityContext[7].SecurityQos = *(_OWORD *)(v6 + 658);
    *(_OWORD *)&SecurityContext[7].DesiredAccess = *(_OWORD *)(v6 + 662);
    LODWORD(SecurityContext[8].AccessState) = v6[666];
  }
  v11 = UsbhCopyPnpString((char *)&SecurityContext[1].SecurityQos + 4, v6 + 528);
  if ( v11 >= 0 )
  {
    v11 = UsbhCopyPnpString((char *)&SecurityContext->AccessState + 4, v6 + 524);
    if ( v11 < 0 )
    {
      v13 = (__int64)&SecurityContext[1].SecurityQos + 4;
    }
    else
    {
      v11 = UsbhCopyPnpString(&SecurityContext[1].FullCreateOptions, v6 + 552);
      if ( v11 >= 0 )
        goto LABEL_24;
      UsbhFreeID((__int64)&SecurityContext[1].SecurityQos + 4);
      v13 = (__int64)&SecurityContext->AccessState + 4;
    }
    UsbhFreeID(v13);
  }
LABEL_24:
  a3->IoStatus.Status = v11;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return (unsigned int)v11;
}
