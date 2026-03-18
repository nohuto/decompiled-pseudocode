/*
 * XREFs of UsbhPdoPnp_QueryCapabilities @ 0x1C0028A50
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     memset @ 0x1C002B800 (memset.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryCapabilities(__int64 a1, IRP *a2)
{
  _DWORD *v3; // r14
  _IO_SECURITY_CONTEXT *SecurityContext; // rbx
  __int16 SecurityQos; // si
  __int16 v6; // di
  int SecurityQos_high; // edx
  unsigned int v8; // ecx
  int v9; // edx
  unsigned int v10; // ecx
  int v11; // eax
  int v12; // ecx
  bool v13; // zf
  int v14; // eax
  int FullCreateOptions; // edx
  unsigned int v16; // ecx

  v3 = PdoExt(a1);
  SecurityContext = a2->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  SecurityQos = (__int16)SecurityContext->SecurityQos;
  v6 = WORD1(SecurityContext->SecurityQos);
  memset(SecurityContext, 0, 0x40uLL);
  SecurityQos_high = HIDWORD(SecurityContext->SecurityQos);
  WORD1(SecurityContext->SecurityQos) = v6;
  v8 = SecurityQos_high & 0xFFFFFFEF;
  LOWORD(SecurityContext->SecurityQos) = SecurityQos;
  v9 = SecurityQos_high | 0x10;
  if ( (v3[295] & 0x10) != 0 )
    v9 = v8;
  HIDWORD(SecurityContext->SecurityQos) = v9;
  HIDWORD(SecurityContext->SecurityQos) = v9 & 0xFFFFFDBF | (v3[355] >> 3) & 0x40;
  LODWORD(SecurityContext->AccessState) = *((unsigned __int16 *)v3 + 714);
  HIDWORD(SecurityContext->AccessState) = -1;
  v10 = v3[298];
  if ( !v10 )
  {
    v10 = 0;
    if ( *((_QWORD *)v3 + 148) )
    {
      if ( (v3[355] & 0x40000) == 0 )
      {
        v10 = FdoExt(*((_QWORD *)v3 + 148))[1259];
        v3[298] = v10;
      }
    }
  }
  SecurityContext[1].FullCreateOptions = v10;
  SecurityContext->FullCreateOptions = 1;
  v11 = v3[355];
  v12 = HIDWORD(SecurityContext->SecurityQos) | 0x400;
  *(_SECURITY_QUALITY_OF_SERVICE **)((char *)&SecurityContext[2].SecurityQos + 4) = 0LL;
  v13 = (v11 & 0x100) == 0;
  HIDWORD(SecurityContext[2].AccessState) = 0;
  v14 = 0;
  HIDWORD(SecurityContext->SecurityQos) = v12;
  FullCreateOptions = SecurityContext[1].FullCreateOptions;
  if ( v13 )
  {
    LODWORD(SecurityContext[2].SecurityQos) = 1;
    v16 = v12 & 0xFFFFC7FC;
  }
  else
  {
    LODWORD(SecurityContext[2].SecurityQos) = 3;
    v16 = v12 & 0xFFFFC7FC | 0x1803;
  }
  HIDWORD(SecurityContext->SecurityQos) = v16;
  LOBYTE(v14) = FullCreateOptions < 2;
  LODWORD(SecurityContext[1].SecurityQos) = v14 + 3;
  HIDWORD(SecurityContext[1].SecurityQos) = (FullCreateOptions < 3) + 3;
  LODWORD(SecurityContext[1].AccessState) = (FullCreateOptions < 4) + 3;
  HIDWORD(SecurityContext[1].AccessState) = (FullCreateOptions < 5) + 3;
  SecurityContext[1].DesiredAccess = (FullCreateOptions < 6) + 3;
  if ( (v3[283] & 4) != 0 )
    HIDWORD(SecurityContext->SecurityQos) |= 0x100u;
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
