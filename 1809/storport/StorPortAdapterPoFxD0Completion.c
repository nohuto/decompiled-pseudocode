/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C00439A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C002255C (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq @ 0x1C003D8DC (McTemplateK0pqq.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v4; // r8
  _QWORD *v6; // rdx
  IRP *v7; // rcx
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v9; // r8
  int v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+28h] [rbp-10h]

  v4 = Context[644];
  *((_BYTE *)Context + 108) &= ~1u;
  v6 = (_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 20) & 0x40) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    v6 = (_QWORD *)Context[644];
    if ( v6 )
    {
      v7 = (IRP *)v6[9];
      if ( v7 )
      {
        IoCancelIrp(v7);
        *(_QWORD *)(Context[644] + 72LL) = 0LL;
        v6 = (_QWORD *)Context[644];
      }
    }
  }
  PoFxReportDevicePoweredOn(*v6);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E2 & 0x10) != 0 )
    {
      v11 = 1;
      v10 = *((_DWORD *)Context + 14);
      McTemplateK0pqq(v8, &EventAdapterPowerRequiredStop, v9, *(_QWORD *)Context[644], v10, v11);
    }
  }
}
