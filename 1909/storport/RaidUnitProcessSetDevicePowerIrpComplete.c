/*
 * XREFs of RaidUnitProcessSetDevicePowerIrpComplete @ 0x1C00109C8
 * Callers:
 *     RaidUnitProcessSetDevicePowerIrp @ 0x1C00108BC (RaidUnitProcessSetDevicePowerIrp.c)
 * Callees:
 *     RaidResumeUnitQueue @ 0x1C0002074 (RaidResumeUnitQueue.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0007A30 (RaUnitAcquireRemoveLock.c)
 *     RaidUnitCheckAndAcquirePoFx @ 0x1C000955C (RaidUnitCheckAndAcquirePoFx.c)
 *     RaidCompleteRequestEx @ 0x1C000A880 (RaidCompleteRequestEx.c)
 *     RaidRestartIoQueue @ 0x1C000B150 (RaidRestartIoQueue.c)
 *     StorPortUnitPoFxD0Completion @ 0x1C0010CB8 (StorPortUnitPoFxD0Completion.c)
 *     StorUpdateCrashDumpPowerReady @ 0x1C00166B0 (StorUpdateCrashDumpPowerReady.c)
 *     __security_check_cookie @ 0x1C0023420 (__security_check_cookie.c)
 *     WPP_SF_qqD @ 0x1C0038F00 (WPP_SF_qqD.c)
 *     McTemplateK0quuupd @ 0x1C0040134 (McTemplateK0quuupd.c)
 */

__int64 __fastcall RaidUnitProcessSetDevicePowerIrpComplete(__int64 Context, PIRP Irp)
{
  unsigned int LowPart; // ebx
  struct _DEVICE_OBJECT *v5; // rcx
  PIO_WORKITEM WorkItem; // rax
  struct _IO_WORKITEM *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // ebx
  int v12; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+68h] [rbp-20h] BYREF

  Irp->IoStatus.Status = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  LowPart = Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Context + 40), &LockHandle);
  v5 = *(struct _DEVICE_OBJECT **)(Context + 8);
  *(_DWORD *)(Context + 492) = LowPart;
  PoSetPowerState(v5, DevicePowerState, (POWER_STATE)LowPart);
  if ( LowPart == 1 && *(char *)(Context + 448) < 0 )
  {
    RaidResumeUnitQueue(Context);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    RaidRestartIoQueue(Context);
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
        ++*(_DWORD *)(Context + 2960);
        if ( !_interlockedbittestandset((volatile signed __int32 *)(Context + 456), 1u) )
        {
          WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(Context + 8));
          v7 = WorkItem;
          if ( WorkItem )
          {
            RaUnitAcquireRemoveLock(Context, (__int64)WorkItem, 0LL);
            IoQueueWorkItemEx(v7, RaidUnitSavePowerCycleCountWorker, DelayedWorkQueue, (PVOID)Context);
          }
        }
        *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) &= ~0x100u;
      }
      if ( !RaidUnitCheckAndAcquirePoFx(Context)
        || (v11 = *(_DWORD *)(*(_QWORD *)(Context + 1744) + 32LL) >> 1,
            ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736)),
            (v11 & 1) != 0) )
      {
        if ( *(_BYTE *)(Context + 695) )
        {
          *(_BYTE *)(Context + 695) = 0;
          RaidRestartIoQueue(Context);
        }
      }
      StorPortUnitPoFxD0Completion(v9, v8, v10, Context);
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(Context + 1736));
    }
    else if ( *(_BYTE *)(Context + 695) )
    {
      *(_BYTE *)(Context + 695) = 0;
      RaidRestartIoQueue(Context);
    }
  }
  else if ( !*(_BYTE *)(Context + 695) )
  {
    *(_BYTE *)(Context + 695) = 1;
  }
  if ( *(_DWORD *)(Context + 944) )
    StorUpdateCrashDumpPowerReady(*(_QWORD *)(Context + 24));
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(
      WPP_GLOBAL_Control->AttachedDevice,
      51LL,
      &WPP_c623c85a8d573ad4be1292ce2ab7441d_Traceguids,
      Context,
      Irp,
      0);
  }
  if ( StorEtwLoggingEnabled )
  {
    v15[0] = 0LL;
    v15[1] = 0LL;
    IoGetActivityIdIrp(Irp, v15);
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0quuupd(
        v12,
        *(_QWORD *)(Context + 24),
        (unsigned int)v15,
        *(_DWORD *)(*(_QWORD *)(Context + 24) + 56LL),
        *(_BYTE *)(Context + 96),
        *(_BYTE *)(Context + 97),
        *(_BYTE *)(Context + 98),
        (char)Irp);
  }
  return RaidCompleteRequestEx(Irp, 0, 0);
}
