/*
 * XREFs of UsbhFdoGetMsDescriptorPdo @ 0x1C002A97C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0016790 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001A400 (UsbhDecPdoIoCount.c)
 *     memmove @ 0x1C002B4C0 (memmove.c)
 */

__int64 __fastcall UsbhFdoGetMsDescriptorPdo(__int64 a1, ULONG_PTR a2, IRP *a3)
{
  PDEVICE_OBJECT *v5; // rdi
  _DWORD *v6; // rax
  _DWORD *v7; // rbx
  _IO_SECURITY_CONTEXT *SecurityContext; // rbp
  int v9; // eax
  unsigned int v10; // edi
  _SECURITY_QUALITY_OF_SERVICE *SecurityQos; // rcx
  PVOID v13; // r9
  int v14; // eax
  unsigned __int16 *v15; // rdx
  unsigned int AccessState_high; // ecx
  unsigned int v17; // ebx

  v5 = (PDEVICE_OBJECT *)FdoExt(a1);
  v6 = PdoExt(a2);
  v7 = v6;
  SecurityContext = a3->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( WORD2(SecurityContext[5].AccessState) == 7 )
  {
    if ( (v6[706] & 2) != 0 )
    {
      SecurityQos = SecurityContext[2].SecurityQos;
      v10 = 0;
      if ( SecurityQos )
      {
        if ( (*(&SecurityQos->EffectiveOnly + 1) & 5) != 0 )
          v13 = *(PVOID *)&SecurityQos[2].Length;
        else
          v13 = MmMapLockedPagesSpecifyCache((PMDL)SecurityQos, 0, MmCached, 0LL, 0, ExDefaultMdlProtection | 0x10u);
      }
      else
      {
        v13 = *(PVOID *)&SecurityContext[1].DesiredAccess;
      }
      if ( v13 )
      {
        v15 = (unsigned __int16 *)*((_QWORD *)v7 + 355);
        AccessState_high = v15[4];
        if ( AccessState_high >= HIDWORD(SecurityContext[1].AccessState) )
          AccessState_high = HIDWORD(SecurityContext[1].AccessState);
        v17 = AccessState_high;
        memmove(v13, v15, AccessState_high);
        v14 = 0;
        HIDWORD(SecurityContext[1].AccessState) = v17;
      }
      else
      {
        v10 = -1073741811;
        v14 = -2147482880;
      }
      HIDWORD(SecurityContext->SecurityQos) = v14;
      goto LABEL_4;
    }
  }
  else
  {
    v9 = v6[358];
    if ( (v9 & 0x400) != 0 )
    {
      BYTE1(SecurityContext[5].AccessState) = v9;
      ++a3->CurrentLocation;
      ++a3->Tail.Overlay.CurrentStackLocation;
      v10 = IofCallDriver(v5[152], a3);
      goto LABEL_5;
    }
  }
  HIDWORD(SecurityContext->SecurityQos) = -1073738240;
  v10 = -1073741637;
LABEL_4:
  a3->IoStatus.Status = v10;
  IofCompleteRequest(a3, 0);
LABEL_5:
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v10;
}
