/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C0012980
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C0012874 (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002714 (RaidResumeUnitQueue.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000754C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0009580 (RaUnitAcquireRemoveLock.c)
 *     RaidCompleteRequestEx @ 0x1C000CF10 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000D2EC (RaidRestartIoQueue.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0012C68 (StorPortUnitPoFxD0Completion.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C0016964 (StorUpdateCrashDumpPowerReady.c)
 *     __security_check_cookie @ 0x1C0026060 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C003BC48 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd @ 0x1C00420BC (McTemplateK0quuupd.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  POWER_STATE v5; // ebx
  struct _DEVICE_OBJECT *v6; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int v12; // ebx
  int v13; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-20h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Status = 0;
  v5.SystemState = (_SYSTEM_POWER_STATE)CurrentStackLocation->Parameters.Power.State;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v6 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(POWER_STATE *)(Context + 492) = v5;
  PoSetPowerState(v6, DevicePowerState, v5);
  if ( v5.SystemState == PowerSystemWorking && *(char *)(Context + 448) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context, 0);
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  if ( *(_DWORD *)(Context + 492) == 1 )
  {
    if ( RaidUnitCheckAndAcquirePoFx(Context) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) & 0x80u) != 0 )
      {
        ++*(_DWORD *)(Context + 3176);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 456), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          v8 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v8, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
        *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x100u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx(Context)
        || (v12 = *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736)),
            (v12 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 695) )
        {
          *(_BYTE *)(Context + 695) = 0;
          RaidRestartIoQueue(Context, 0);
        }
      }
      StorPortUnitPoFxD0Completion(v10, v9, v11, Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
    else if ( *(_BYTE *)(Context + 695) )
    {
      *(_BYTE *)(Context + 695) = 0;
      RaidRestartIoQueue(Context, 0);
    }
  }
  else if ( !*(_BYTE *)(Context + 695) )
  {
    *(_BYTE *)(Context + 695) = 1;
  }
  if ( *(_DWORD *)(Context + 920) )
    StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_05398c2a44fb388ff25b1754e24905f8_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v16[0] = 0LL;
    v16[1] = 0LL;
    IoGetActivityIdIrp(Irp, v16);
    if ( (byte_1C00617E2 & 0x10) != 0 )
      McTemplateK0quuupd(
        v13,
        *(_QWORD *)(Context + 24),
        (unsigned int)v16,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
