/*
 * XREFs of ndisStartDeviceSynchronous @ 0x1C00BC0B8
 * Callers:
 *     ndisStartDeviceWorkItem @ 0x1C00BC030 (ndisStartDeviceWorkItem.c)
 *     ndisPnPIrpStartDevice @ 0x1C00CA074 (ndisPnPIrpStartDevice.c)
 *     NdisLWMStartNetworkInterface @ 0x1C00F1980 (NdisLWMStartNetworkInterface.c)
 *     NdisWdfPnpPowerEventHandler @ 0x1C00F2320 (NdisWdfPnpPowerEventHandler.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A798 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A7CC (WPP_SF_qD.c)
 *     ndisSelectiveSuspendClearStop @ 0x1C0075888 (ndisSelectiveSuspendClearStop.c)
 *     ndisPnPStartDevice @ 0x1C00BC164 (ndisPnPStartDevice.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00C87C0 (ndisMSetMiniportReadyForBinding.c)
 *     ndisIMCheckDeviceInstance @ 0x1C00EB3C8 (ndisIMCheckDeviceInstance.c)
 *     ndisIMInitializeDeviceInstance @ 0x1C00EB6F8 (ndisIMInitializeDeviceInstance_ea_1C00EB6F8.c)
 */

__int64 __fastcall ndisStartDeviceSynchronous(int *DeferredContext)
{
  unsigned int v2; // edi
  __int64 v3; // rcx
  __int16 v4; // ax
  _BYTE *v5; // rdx
  __int64 v7; // rcx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_q(0x3Du, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)DeferredContext);
  v3 = *((_QWORD *)DeferredContext + 474);
  v4 = *(_WORD *)(v3 + 26);
  if ( (v4 & 1) == 0 || (v4 & 0x20) != 0 )
  {
    v2 = ndisPnPStartDevice(DeferredContext);
    if ( v2 )
    {
      v2 = -1073741823;
    }
    else
    {
      if ( (DeferredContext[30] & 0x20000) != 0 )
      {
        v7 = DeferredContext[116];
        v5 = ndisMediaTypeCl;
        if ( !ndisMediaTypeCl[v7] && (_DWORD)v7 != 3 )
        {
          RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDProxy");
          ZwLoadDriver(&DestinationString);
        }
      }
      LOBYTE(v5) = 1;
      ndisMSetMiniportReadyForBinding(DeferredContext, v5, 4098LL);
      if ( (DeferredContext[30] & 0x80u) == 0 && *((_QWORD *)DeferredContext + 561) )
        ndisSelectiveSuspendClearStop((__int64)DeferredContext, 9);
    }
  }
  else
  {
    DeferredContext[30] |= 0x8000u;
    if ( (unsigned __int8)ndisIMCheckDeviceInstance(v3, DeferredContext + 960, &v9) )
    {
      KeWaitForSingleObject((PVOID)(*((_QWORD *)DeferredContext + 474) + 416LL), Executive, 0, 0, 0LL);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 474) + 472LL) = KeGetCurrentThread();
      v2 = ndisIMInitializeDeviceInstance(DeferredContext);
      *(_QWORD *)(*((_QWORD *)DeferredContext + 474) + 472LL) = 0LL;
      KeReleaseMutex((PRKMUTEX)(*((_QWORD *)DeferredContext + 474) + 416LL), 0);
    }
  }
  if ( (unsigned __int8)byte_1C00A025C >= 4u )
    WPP_SF_qD(0x3Eu, &WPP_75e565b92a953e07dcf27d4fb26abe24_Traceguids, (__int64)DeferredContext, v2);
  return v2;
}
