/*
 * XREFs of UsbhSelectConfigOrInterfaceComplete @ 0x1C002B450
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     UsbhDecPdoIoCount @ 0x1C001ABC0 (UsbhDecPdoIoCount.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhCancelOutOfBandwidthTimer @ 0x1C002B4E0 (UsbhCancelOutOfBandwidthTimer.c)
 *     UsbhCalculateInterfaceBandwidth @ 0x1C003F578 (UsbhCalculateInterfaceBandwidth.c)
 *     UsbhSetOutOfBandwidthTimer @ 0x1C0040DA4 (UsbhSetOutOfBandwidthTimer.c)
 */

__int64 __fastcall UsbhSelectConfigOrInterfaceComplete(PDEVICE_OBJECT DeviceObject, ULONG_PTR Irp, __int64 Context)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _IO_SECURITY_CONTEXT *v9; // rdi
  __int64 PortData; // r14
  unsigned int *v11; // rbp
  unsigned int *i; // rdi

  v5 = PdoExt(Context);
  FdoExt(*((_QWORD *)v5 + 148));
  v6 = *((unsigned __int16 *)v5 + 714);
  v7 = *((_QWORD *)v5 + 148);
  if ( *(int *)(Irp + 48) < 0 )
  {
    v9 = *(_IO_SECURITY_CONTEXT **)(*(_QWORD *)(Irp + 184) + 8LL);
    PortData = UsbhGetPortData(v7, v6);
    UsbhCancelOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714));
    if ( PortData && HIDWORD(v9->SecurityQos) == -2147481856 )
    {
      UsbhSetOutOfBandwidthTimer(*((_QWORD *)v5 + 148), *((unsigned __int16 *)v5 + 714), *(unsigned int *)(Irp + 48));
      *(_DWORD *)(PortData + 436) = 0;
      if ( WORD1(v9->SecurityQos) )
      {
        if ( WORD1(v9->SecurityQos) == 1 )
          *(_DWORD *)(PortData + 436) = UsbhCalculateInterfaceBandwidth(
                                          *((_QWORD *)v5 + 148),
                                          Context,
                                          &v9[1].AccessState);
      }
      else
      {
        v11 = (unsigned int *)((char *)v9 + LOWORD(v9->SecurityQos));
        for ( i = &v9[1].DesiredAccess; i < v11; i = (unsigned int *)((char *)i + *(unsigned __int16 *)i) )
          *(_DWORD *)(PortData + 436) += UsbhCalculateInterfaceBandwidth(*((_QWORD *)v5 + 148), Context, i);
      }
    }
  }
  else
  {
    UsbhCancelOutOfBandwidthTimer(v7, v6);
  }
  UsbhDecPdoIoCount(Context, Irp);
  if ( *(_BYTE *)(Irp + 65) )
    *(_BYTE *)(*(_QWORD *)(Irp + 184) + 3LL) |= 1u;
  return 0LL;
}
