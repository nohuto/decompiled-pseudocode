/*
 * XREFs of ndisPnPIrpStartDevice @ 0x1C002F538
 * Callers:
 *     ndisPnPDispatch @ 0x1C0018190 (ndisPnPDispatch.c)
 * Callees:
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     WPP_RECORDER_SF_qZ @ 0x1C0019620 (WPP_RECORDER_SF_qZ.c)
 *     ndisLogMiniportEvent @ 0x1C0019E70 (ndisLogMiniportEvent.c)
 *     ndisStartDeviceSynchronous @ 0x1C002F168 (ndisStartDeviceSynchronous.c)
 *     ?NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@@J@Z @ 0x1C0030588 (-NdisTraceLoggingDeviceStarted@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_TRACEFORMAT_FAILURE_REASON@.c)
 *     ?ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C00319D0 (-ndisScheduleStartDeviceWorkItem@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ndisMInvokeStartDevice @ 0x1C0031A50 (ndisMInvokeStartDevice.c)
 */

__int64 __fastcall ndisPnPIrpStartDevice(
        __int64 a1,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct _IRP *a3,
        _BYTE *a4,
        _BYTE *a5)
{
  unsigned int v8; // ebp
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v10; // r8
  __int64 v11; // r9
  int started; // edi
  unsigned __int8 MajorNdisVersion; // al
  _IO_STACK_LOCATION *v14; // rax
  int v15; // eax
  int v16; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZ(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (__int64)a2,
      9u,
      0x1Fu,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      (char)a2,
      &a2->pAdapterInstanceName->Length);
  ndisLogMiniportEvent((__int64)a2, 0x20u);
  v8 = 4;
  a2->PnPFlags = a2->PnPFlags & 0xFFFEFFEF | 0x10000;
  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.ReadWriteConfig.Length = *(_OWORD *)&CurrentStackLocation->Parameters.ReadWriteConfig.Length;
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( (unsigned int)ndisMInvokeStartDevice((char)a2) )
  {
    started = -1073741823;
  }
  else
  {
    v8 = 9;
    started = IoSynchronousCallDriver(a2->NextDeviceObject, a3, v10, v11);
  }
  if ( started >= 0 )
  {
    MajorNdisVersion = a2->MajorNdisVersion;
    if ( MajorNdisVersion <= 6u && (MajorNdisVersion != 6 || a2->MinorNdisVersion < 0x1Eu) || ndisStartDeviceSync )
    {
      v8 = 4;
      started = ndisStartDeviceSynchronous((__int64)a2, (__int64)a3, v10);
    }
    else
    {
      v14 = a3->Tail.Overlay.CurrentStackLocation;
      *a4 = 0;
      started = 259;
      v8 = 4;
      v14->Control |= 1u;
      v15 = ndisScheduleStartDeviceWorkItem(a2, a3);
      if ( !v15 )
        goto LABEL_11;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = 2;
        WPP_RECORDER_SF_qL(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v16,
          13,
          32,
          (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
          (char)a2,
          v15);
      }
      a3->IoStatus.Status = -1073741823;
      IofCompleteRequest(a3, 0);
    }
  }
  if ( started != 259 )
    a3->IoStatus.Status = started;
LABEL_11:
  NdisTraceLoggingDeviceStarted(a2, v8, (unsigned int)started);
  *a5 = 0;
  return (unsigned int)started;
}
