/*
 * XREFs of ?ndisPnPIrpQueryCapabilities@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0018530
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ndisPnPIrpQueryCapabilities(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  struct _NDIS_MINIPORT_BLOCK *v7; // rbx
  _IO_STACK_LOCATION *v8; // rax
  int v9; // edx
  int v10; // esi
  char v12; // [rsp+28h] [rbp-10h]

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v12 = (char)a2;
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      13,
      43,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      v12);
  }
  if ( (v7->PnPFlags & 0x2000) != 0 || (v7->MiniportAttributes & 0x80u) != 0 )
    *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
  v8 = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&v8[-1].MajorFunction = *(_OWORD *)&v8->MajorFunction;
  *(_OWORD *)&v8[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&v8->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&v8[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&v8->Parameters.ReadWriteConfig.Length;
  v8[-1].FileObject = v8->FileObject;
  v8[-1].Control = 0;
  v10 = IoSynchronousCallDriver(v7->NextDeviceObject, a3, a3, a4);
  if ( v10 >= 0 )
  {
    if ( v7->BusType == Vmcs && (v7->MiniportAttributes & 0x80u) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          44,
          (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
          (char)v7);
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) |= 0x200u;
    }
    if ( (v7->PnPFlags & 0x2000) == 0 && (v7->MiniportAttributes & 0x80u) == 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          45,
          (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
          (char)v7);
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x200u;
    }
    if ( (v7->DriverHandle->Flags & 0x20) != 0 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_q(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          46,
          (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
          (char)v7);
      }
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~0x10u;
      *(_DWORD *)(CurrentStackLocation->Parameters.WMI.ProviderId + 4) &= ~8u;
    }
  }
  *a5 = 0;
  return (unsigned int)v10;
}
