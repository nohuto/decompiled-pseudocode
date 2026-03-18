/*
 * XREFs of UsbhPdoPnp_QueryDeviceText @ 0x1C001D710
 * Callers:
 *     <none>
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhGetProductIdString @ 0x1C001D974 (UsbhGetProductIdString.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_S @ 0x1C004B48C (WPP_RECORDER_SF_S.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C005C65C (WPP_RECORDER_SF_qDD.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceText(__int64 a1, IRP *a2)
{
  __int64 v3; // rsi
  _DWORD *v5; // rax
  int v6; // r8d
  int v7; // r9d
  _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  _DWORD *v9; // rdi
  unsigned int Length; // ebp
  unsigned __int16 Size; // r14
  signed int Status; // ebx
  PVOID PoolWithTag; // rax
  void *v14; // rdi
  unsigned int v15; // eax
  const void *v16; // rdx
  int v17; // edx
  int v18; // r8d
  int v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+48h] [rbp-30h]

  v3 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      1,
      17,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      a1);
  v5 = PdoExt(a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v9 = v5;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Size = CurrentStackLocation->Parameters.QueryInterface.Size;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_qDD(WPP_GLOBAL_Control->DeviceExtension, Size, v6, v7, v20, a1, Length, Size);
  if ( !Size )
    Size = 1033;
  Status = a2->IoStatus.Status;
  if ( Length )
  {
    if ( Length == 1 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          19,
          (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
      v3 = (unsigned __int64)(v9 + 556) & -(__int64)(v9[557] != 0);
      Status = v9[557] == 0 ? 0xC00000BB : 0;
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        20,
        (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids);
    if ( !*((_BYTE *)v9 + 1415) || (v9[358] & 0x800) != 0 )
    {
      if ( v9[549] )
      {
        v3 = (__int64)(v9 + 548);
        Status = 0;
        goto LABEL_16;
      }
      Status = -1073741637;
    }
    else
    {
      v3 = (__int64)(v9 + 540);
      Status = UsbhGetProductIdString(*((_QWORD *)v9 + 148));
      if ( Status == -1073741637 && Size != 1033 )
        Status = UsbhGetProductIdString(*((_QWORD *)v9 + 148));
      if ( (Status & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(Status) )
      {
        LOBYTE(v21) = 0;
        UsbhException(
          *((_QWORD *)v9 + 148),
          *((unsigned __int16 *)v9 + 714),
          58,
          0,
          0,
          Status,
          0,
          usbfile_pdo_c,
          2351,
          v21);
      }
      if ( Status < 0 )
        goto LABEL_23;
    }
  }
  if ( Status < 0 )
    goto LABEL_23;
LABEL_16:
  if ( !v3 )
    goto LABEL_23;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, *(unsigned int *)(v3 + 4), 0x42554855u);
  v14 = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_45:
    Status = -1073741670;
    goto LABEL_23;
  }
  memset(PoolWithTag, 0, *(unsigned int *)(v3 + 4));
  v15 = *(_DWORD *)(v3 + 4);
  if ( !v15 || (v16 = *(const void **)(v3 + 8)) == 0LL )
  {
    ExFreePoolWithTag(v14, 0);
    goto LABEL_45;
  }
  memmove(v14, v16, v15);
  a2->IoStatus.Information = (unsigned __int64)v14;
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    goto LABEL_26;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      v17,
      v18,
      21,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      (__int64)v14);
LABEL_23:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      22,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      Status);
LABEL_26:
  a2->IoStatus.Status = Status;
  IofCompleteRequest(a2, 0);
  return (unsigned int)Status;
}
