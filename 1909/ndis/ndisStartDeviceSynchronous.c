/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C002F158
 * Callers:
 *     ?ndisStartDeviceWorkItem@@YAXPEAX@Z @ 0x1C002F260 (-ndisStartDeviceWorkItem@@YAXPEAX@Z.c)
 *     ndisPnPIrpStartDevice @ 0x1C002F528 (ndisPnPIrpStartDevice.c)
 *     NdisLWMStartNetworkInterface @ 0x1C009DC20 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C009F070 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0006260 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x1C0006320 (WPP_RECORDER_SF_qL.c)
 *     ndisPnPStartDevice @ 0x1C002D21C (ndisPnPStartDevice.c)
 *     ndisIMCheckDeviceInstance @ 0x1C0080108 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstanceInternal @ 0x1C0080470 (ndisIMInitializeDeviceInstanceInternal.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C00B93D0 (ndisSelectiveSuspendClearStop.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00FD3E8 (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int16 v7; // ax
  int v8; // edx
  __int64 v10; // rcx
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-28h] BYREF
  char v12; // [rsp+70h] [rbp+8h]

  v3 = a2;
  v5 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      13,
      61,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1);
  }
  v6 = *(_QWORD *)(a1 + 3760);
  v7 = *(_WORD *)(v6 + 26);
  if ( (v7 & 1) == 0 || (v7 & 0x20) != 0 )
  {
    v5 = ndisPnPStartDevice(a1, v3, a3);
    if ( v5 )
    {
      v5 = -1073741823;
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 120) & 0x20000) != 0 )
      {
        v10 = *(int *)(a1 + 464);
        if ( !ndisMediaTypeCl[v10] && (_DWORD)v10 != 3 )
        {
          *(_QWORD *)&DestinationString.Length = 0LL;
          DestinationString.Buffer = 0LL;
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      ndisMSetMiniportReadyForBinding(a1);
      if ( (*(_DWORD *)(a1 + 120) & 0x80u) == 0 && *(_QWORD *)(a1 + 4448) )
        ndisSelectiveSuspendClearStop(a1, 9);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 120) |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v6, a1 + 3808) )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 3760) + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 472LL) = KeGetCurrentThread();
      v5 = ndisIMInitializeDeviceInstanceInternal(a1, v12);
      *(_QWORD *)(*(_QWORD *)(a1 + 3760) + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(*(_QWORD *)(a1 + 3760) + 416LL), 0);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v8,
      13,
      62,
      (struct _GUID *)&WPP_1c97764dd9a33bffc5a8311029b1d223_Traceguids,
      a1,
      v5);
  }
  return v5;
}
