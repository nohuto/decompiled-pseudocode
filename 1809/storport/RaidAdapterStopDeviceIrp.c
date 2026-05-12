/*
 * XREFs of RaidAdapterStopDeviceIrp @ 0x1C0074084
 * Callers:
 *     RaidAdapterPnpIrp @ 0x1C0016FAC (RaidAdapterPnpIrp.c)
 * Callees:
 *     RaidPauseAdapterQueue @ 0x1C00142F8 (RaidPauseAdapterQueue.c)
 *     RaidPnPPassToMiniPort @ 0x1C00144F4 (RaidPnPPassToMiniPort.c)
 *     RaidAdapterStop @ 0x1C0016C60 (RaidAdapterStop.c)
 *     RaForwardIrp @ 0x1C00171EC (RaForwardIrp.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     McTemplateK0pd @ 0x1C0036554 (McTemplateK0pd.c)
 *     RaidAdapterDeleteAsyncCallbacks @ 0x1C0037768 (RaidAdapterDeleteAsyncCallbacks.c)
 *     StorSetIoGatewayEmptyEvent @ 0x1C004C148 (StorSetIoGatewayEmptyEvent.c)
 *     RaidDeleteResourceList @ 0x1C0074BA4 (RaidDeleteResourceList.c)
 */

__int64 __fastcall RaidAdapterStopDeviceIrp(__int64 a1, IRP *a2)
{
  __int64 v3; // rcx
  int v5; // esi
  char v6; // r8
  bool v7; // zf
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-60h]
  PLARGE_INTEGER Timeouta; // [rsp+20h] [rbp-60h]
  union _LARGE_INTEGER v13; // [rsp+30h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+38h] [rbp-48h] BYREF
  GUID v15; // [rsp+50h] [rbp-30h] BYREF
  GUID v16; // [rsp+60h] [rbp-20h] BYREF

  _InterlockedExchange((volatile __int32 *)(a1 + 88), 8);
  v3 = *(_QWORD *)(a1 + 5152);
  if ( v3 )
  {
    *(_DWORD *)(v3 + 20) |= 4u;
    RaidAdapterPoFxActivateComponent(a1, 0LL, 1LL);
  }
  RaidPauseAdapterQueue(a1);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  StorSetIoGatewayEmptyEvent(a1 + 832, &Event);
  v13.QuadPart = -1200000000LL;
  v5 = KeWaitForSingleObject(&Event, Executive, 0, 0, &v13);
  if ( v5 )
  {
    v7 = StorEtwLoggingEnabled == 0;
    a2->IoStatus.Status = -1073741823;
    if ( !v7 )
    {
      *(_QWORD *)&v15.Data1 = 0LL;
      *(_QWORD *)v15.Data4 = 0LL;
      IoGetActivityIdIrp(a2, &v15);
      if ( (byte_1C00617E2 & 0x20) != 0 )
      {
        LODWORD(Timeout) = a2->IoStatus.Status;
        McTemplateK0pd(v8, &EventPnpRequestComplete, &v15, a2, Timeout);
      }
    }
  }
  else
  {
    v5 = RaidPnPPassToMiniPort(*(_QWORD *)(a1 + 8), 4LL, v6, 0LL, 0);
    if ( v5 >= 0 )
    {
      RaidAdapterDeleteAsyncCallbacks(a1);
      RaidAdapterStop(a1);
      RaidDeleteResourceList(a1 + 296);
      if ( StorEtwLoggingEnabled )
      {
        *(_QWORD *)&v16.Data1 = 0LL;
        *(_QWORD *)v16.Data4 = 0LL;
        IoGetActivityIdIrp(a2, &v16);
        if ( (byte_1C00617E2 & 0x20) != 0 )
        {
          LODWORD(Timeouta) = a2->IoStatus.Status;
          McTemplateK0pd(v9, &EventPnpRequestComplete, &v16, a2, Timeouta);
        }
      }
      a2->IoStatus.Status = 0;
      return (unsigned int)RaForwardIrp(*(struct _DEVICE_OBJECT **)(a1 + 24), a2);
    }
  }
  return (unsigned int)v5;
}
