/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C0012C68
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitPoFxIdleComponent @ 0x1C00076A8 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0012D2C (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuut @ 0x1C0041BCC (McTemplateK0pquuut.c)
 */

void __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  if ( RaidUnitCheckAndAcquirePoFx(a4) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1744) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 40), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1744));
    if ( StorEtwLoggingEnabled && (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0pquuut(
        *(_QWORD *)(a4 + 24),
        (unsigned int)&EventUnitPowerRequiredStop,
        v5,
        **(_QWORD **)(a4 + 1744),
        *(_DWORD *)(*(_QWORD *)(a4 + 24) + 56LL),
        *(_BYTE *)(a4 + 96),
        *(_BYTE *)(a4 + 97),
        *(_BYTE *)(a4 + 98),
        1);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a4 + 1736));
  }
  if ( *(_DWORD *)(a4 + 3272) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(a4 + 24) + 1112LL));
}
