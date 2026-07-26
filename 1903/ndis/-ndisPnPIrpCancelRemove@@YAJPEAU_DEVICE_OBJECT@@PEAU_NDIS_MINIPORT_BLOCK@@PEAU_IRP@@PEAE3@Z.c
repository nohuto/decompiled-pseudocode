/*
 * XREFs of ?ndisPnPIrpCancelRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3B6C
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPowerSaveClearStop @ 0x1C00144F8 (ndisPowerSaveClearStop.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisPnPCancelRemoveDevice @ 0x1C009F8D8 (ndisPnPCancelRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpCancelRemove(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        unsigned __int8 *a5)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // esi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x22u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x22u);
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  v11 = IoSynchronousCallDriver(a2->NextDeviceObject, a3, v9, v10);
  if ( v11 >= 0 )
  {
    if ( a2->PnPDeviceState == NdisPnPDeviceQueryRemoved )
      a2->PnPDeviceState = a2->OldPnPDeviceState;
    ndisPnPCancelRemoveDevice((__int64)a2);
    ndisPowerSaveClearStop(a2, 1);
  }
  *a4 = 1;
  *a5 = 0;
  return (unsigned int)v11;
}
