/*
 * XREFs of StorPortUnitPoFxD0Completion @ 0x1C0010CB8
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8 (RaidUnitProcessSetDevicePowerIrpComplete.c)
 * Callees:
 *     RaidUnitPoFxIdleComponent @ 0x1C00065D8 (RaidUnitPoFxIdleComponent.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidUnitCancelWaitWakeIrp @ 0x1C0010D98 (RaidUnitCancelWaitWakeIrp.c)
 *     McTemplateK0pquuut @ 0x1C003FC44 (McTemplateK0pquuut.c)
 */

__int64 __fastcall StorPortUnitPoFxD0Completion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r8d
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( RaidUnitCheckAndAcquirePoFx(a4) )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(*(_QWORD *)(a4 + 1744) + 36LL), 0, 1) )
      RaidUnitPoFxIdleComponent(a4, 0, 0, 0LL);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a4 + 40), &LockHandle);
    RaidUnitCancelWaitWakeIrp(a4);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**(_QWORD **)(a4 + 1744));
    if ( StorEtwLoggingEnabled && (byte_1C0062741 & 1) != 0 )
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
  result = *(_QWORD *)(a4 + 24);
  if ( *(_DWORD *)(result + 4356) == 7 )
    _InterlockedDecrement((volatile signed __int32 *)(result + 1048));
  return result;
}
