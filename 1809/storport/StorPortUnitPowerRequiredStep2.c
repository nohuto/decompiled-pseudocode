/*
 * XREFs of StorPortUnitPowerRequiredStep2 @ 0x1C0044828
 * Callers:
 *     StorPortUnitPowerRequiredStep1 @ 0x1C00446C0 (StorPortUnitPowerRequiredStep1.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C0022598 (RaidAdapterPoFxActivateComponent.c)
 *     McTemplateK0pquuut @ 0x1C0041BCC (McTemplateK0pquuut.c)
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
  char v9; // [rsp+30h] [rbp-48h]
  char v10; // [rsp+38h] [rbp-40h]
  int v11; // [rsp+40h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v2 = *(_QWORD *)(Context + 1744);
  if ( (*(_DWORD *)(v2 + 32) & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 1) != 0 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = *(_QWORD *)(Context + 24);
    if ( *(_QWORD *)(v3 + 5152) )
    {
      v4 = *(_BYTE *)(Context + 449);
      if ( (v4 & 8) == 0 )
      {
        *(_BYTE *)(Context + 449) = v4 | 8;
        RaidAdapterPoFxActivateComponent(v3, 0LL, 0LL);
      }
    }
  }
  else if ( *(_DWORD *)(Context + 492) != 1 || (*(_BYTE *)(Context + 449) & 1) != 0 )
  {
    if ( PoRequestPowerIrp(
           *(PDEVICE_OBJECT *)(Context + 8),
           2u,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)RaidUnitDeviceStackPowerUpCompletion,
           (PVOID)Context,
           0LL) == 259 )
    {
      *(_BYTE *)(Context + 448) |= 0x80u;
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      _InterlockedExchange((volatile __int32 *)(Context + 1760), 0);
      return;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(Context + 1744) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(Context, 0, 0, 0LL);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoFxReportDevicePoweredOn(**(_QWORD **)(Context + 1744));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C00617E2 & 0x10) != 0 )
    {
      v6 = *(_QWORD *)(Context + 24);
      v11 = 0;
      v10 = *(_BYTE *)(Context + 98);
      v9 = *(_BYTE *)(Context + 97);
      LOBYTE(Irp) = *(_BYTE *)(Context + 96);
      LODWORD(Contexta) = *(_DWORD *)(v6 + 56);
      McTemplateK0pquuut(
        (struct _MCGEN_TRACE_CONTEXT *)v6,
        &EventUnitPowerRequiredStop,
        v5,
        **(_QWORD **)(Context + 1744),
        Contexta,
        Irp,
        v9,
        v10,
        v11);
    }
  }
}
