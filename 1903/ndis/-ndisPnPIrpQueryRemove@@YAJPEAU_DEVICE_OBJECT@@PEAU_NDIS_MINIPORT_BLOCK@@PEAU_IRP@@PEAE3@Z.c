/*
 * XREFs of ?ndisPnPIrpQueryRemove@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C00A3E2C
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 * Callees:
 *     ndisPowerSaveStop @ 0x1C0014940 (ndisPowerSaveStop.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisPnPQueryRemoveDevice @ 0x1C009FA60 (ndisPnPQueryRemoveDevice.c)
 */

__int64 __fastcall ndisPnPIrpQueryRemove(
        struct _DEVICE_OBJECT *a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        unsigned __int8 *a4,
        bool *a5)
{
  int v7; // edi

  v7 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x21u,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x21u);
  if ( !a2->PagingPathCount )
  {
    ndisPowerSaveStop(a2, NdisSSQueryRemove);
    KeWaitForSingleObject(&a2->PowerD0CompleteEvent, Executive, 0, 0, 0LL);
    if ( (a2->PnPFlags & 0x100) != 0 )
      v7 = -1073740537;
    else
      v7 = ndisPnPQueryRemoveDevice((__int64)a2);
    if ( v7 >= 0 )
    {
      a2->OldPnPDeviceState = a2->PnPDeviceState;
      a2->PnPDeviceState = NdisPnPDeviceQueryRemoved;
    }
  }
  a3->IoStatus.Status = v7;
  *a5 = v7 >= 0;
  return (unsigned int)v7;
}
