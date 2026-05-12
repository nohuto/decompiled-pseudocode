/*
 * XREFs of StorPortUnitPoFxD3Completion @ 0x1C0040B20
 * Callers:
 *     <none>
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000950C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitDisablePendingTimer @ 0x1C000F8E0 (RaidUnitDisablePendingTimer.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0010BF8 (RaidUnitCancelWaitWakeIrp.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 */

void __fastcall StorPortUnitPoFxD3Completion(
        PDEVICE_OBJECT DeviceObject,
        UCHAR MinorFunction,
        POWER_STATE PowerState,
        __int64 Context,
        PIO_STATUS_BLOCK IoStatus)
{
  int Status; // edi
  __int64 v7; // rcx
  __int64 v8; // rax
  char v9; // dl
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  Status = IoStatus->Status;
  if ( RaidUnitCheckAndAcquirePoFx(Context) )
  {
    if ( Status >= 0 )
    {
      RaidUnitDisablePendingTimer(Context);
    }
    else
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
      RaidUnitCancelWaitWakeIrp(Context);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1480));
  }
  v7 = *(_QWORD *)(Context + 24);
  v8 = v7;
  if ( *(_QWORD *)(v7 + 5024) )
  {
    v9 = *(_BYTE *)(Context + 161);
    if ( (v9 & 8) != 0 )
    {
      *(_BYTE *)(Context + 161) = v9 & 0xF7;
      RaidAdapterPoFxIdleComponent(v7, 0LL, 0LL);
      v8 = *(_QWORD *)(Context + 24);
    }
  }
  if ( *(_DWORD *)(v8 + 4356) == 7 )
    _InterlockedIncrement((volatile signed __int32 *)(v8 + 1048));
  *(_BYTE *)(Context + 161) &= ~1u;
}
