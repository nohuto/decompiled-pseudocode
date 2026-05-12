/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x1C0041218
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00410B0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C0006588 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C001ED80 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pquuut @ 0x1C003E854 (McTemplateK0pquuut.c)
 */

void __fastcall StorPortUnitPowerRequiredStep2(__int64 Context)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  char v4; // al
  __int64 v5; // r8
  __int64 v6; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-58h]
  PIRP *Irp; // [rsp+28h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v2 = *(_QWORD *)(Context + 1488);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = *(_QWORD *)(Context + 24);
    if ( *(_QWORD *)(v3 + 5024) )
    {
      v4 = *(_BYTE *)(Context + 161);
      if ( (v4 & 8) == 0 )
      {
        *(_BYTE *)(Context + 161) = v4 | 8;
        RaidAdapterPoFxActivateComponent(v3, 0LL, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(Context + 204) != 1 || (*(_BYTE *)(Context + 161) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 160) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1504), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1488) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1488));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0061741 & 1) != 0 )
    {
      v6 = *(_QWORD *)(Context + 24);
      LOBYTE(Irp) = *(_BYTE *)(Context + 96);
      LODWORD(Contexta) = *(_DWORD *)(v6 + 56);
      McTemplateK0pquuut(
        (struct _MCGEN_TRACE_CONTEXT *)v6,
        &EventUnitPowerRequiredStop,
        v5,
        **(_QWORD **)(Context + 1488),
        Contexta,
        Irp,
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        0);
    }
  }
}
