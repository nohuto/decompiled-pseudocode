/*
 * XREFs of StorPortAdapterPoFxD0Completion @ 0x1C00232C0
 * Callers:
 *     <none>
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C001FB94 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pqq @ 0x1C003AE68 (McTemplateK0pqq.c)
 */

void __fastcall StorPortAdapterPoFxD0Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        _QWORD *Context)
{
  __int64 v4; // r8
  _QWORD *v6; // rdx
  int v7; // ecx
  int v8; // r8d
  IRP *v9; // rcx

  v4 = Context[628];
  *((_BYTE *)Context + 108) &= ~1u;
  v6 = (_QWORD *)v4;
  if ( (*(_DWORD *)(v4 + 20) & 0x40) != 0 && (*(_DWORD *)(*(_QWORD *)(v4 + 8) + 12LL) & 0x800) != 0 )
  {
    if ( v4 && _InterlockedCompareExchange((volatile signed __int32 *)(v4 + 24), 0, 1) )
      RaidAdapterPoFxIdleComponent((__int64)Context, 0LL, 0LL);
    v6 = (_QWORD *)Context[628];
    if ( v6 )
    {
      v9 = (IRP *)v6[9];
      if ( v9 )
      {
        IoCancelIrp(v9);
        *(_QWORD *)(Context[628] + 72LL) = 0LL;
        v6 = (_QWORD *)Context[628];
      }
    }
  }
  PoFxReportDevicePoweredOn(*v6);
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0pqq(
        v7,
        (unsigned int)&EventAdapterPowerRequiredStop,
        v8,
        *(_QWORD *)Context[628],
        *((_DWORD *)Context + 14),
        1);
  }
}
