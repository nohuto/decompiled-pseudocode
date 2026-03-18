/*
 * XREFs of UsbhFdoReturnRootHubPdo @ 0x1C0029BB4
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     UsbhFdoChainIrp @ 0x1C0029CA8 (UsbhFdoChainIrp.c)
 */

__int64 __fastcall UsbhFdoReturnRootHubPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  _DWORD *v6; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v8; // ebx
  _UNICODE_STRING *FileName; // rcx
  _IO_SECURITY_CONTEXT *SecurityContext; // r14

  v6 = FdoExt(a1);
  if ( (v6[640] & 1) != 0 )
  {
    CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
    v8 = 0;
    FileName = CurrentStackLocation->Parameters.QueryDirectory.FileName;
    if ( FileName && (SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext) != 0LL )
    {
      *(_QWORD *)&FileName->Length = *((_QWORD *)v6 + 152);
      ObfReferenceObject(*((PVOID *)v6 + 152));
      SecurityContext->SecurityQos = (_SECURITY_QUALITY_OF_SERVICE *)*((_QWORD *)v6 + 149);
      ObfReferenceObject(*((PVOID *)v6 + 149));
    }
    else
    {
      v8 = -1073741811;
    }
    a3->IoStatus.Status = v8;
    IofCompleteRequest(a3, 0);
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return v8;
  }
  else
  {
    UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
    return UsbhFdoChainIrp(a1, a3);
  }
}
