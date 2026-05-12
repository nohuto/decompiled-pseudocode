/*
 * XREFs of StorPortUnitPowerNotRequiredStep2 @ 0x1C0040E08
 * Callers:
 *     StorPortUnitPowerNotRequiredStep1 @ 0x1C0040D20 (StorPortUnitPowerNotRequiredStep1.c)
 *     StorPortUnitPowerNotRequiredStep2Passive @ 0x1C0041090 (StorPortUnitPowerNotRequiredStep2Passive.c)
 * Callees:
 *     RaidAdapterPoFxIdleComponent @ 0x1C001ED44 (RaidAdapterPoFxIdleComponent.c)
 *     McTemplateK0pquuut @ 0x1C003E854 (McTemplateK0pquuut.c)
 */

void __fastcall StorPortUnitPowerNotRequiredStep2(char *Context)
{
  __int64 v2; // rax
  int v3; // edx
  int v4; // ebp
  __int64 v5; // rcx
  char v6; // al
  NTSTATUS v7; // r14d
  __int64 v8; // rdx
  int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  PVOID Contexta; // [rsp+20h] [rbp-68h]
  PIRP *Irp; // [rsp+28h] [rbp-60h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
  v2 = *((_QWORD *)Context + 186);
  v3 = *(_DWORD *)(v2 + 32);
  if ( (v3 & 4) != 0 && (*(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL) & 2) != 0 )
  {
    KeCancelTimer((PKTIMER)(Context + 696));
    v4 = 0;
    v5 = *((_QWORD *)Context + 3);
    v6 = Context[161] | 0x20;
    Context[161] = v6;
    if ( *(_QWORD *)(v5 + 5024) && (v6 & 8) != 0 )
    {
      Context[161] = v6 & 0xF7;
      RaidAdapterPoFxIdleComponent(v5, 0LL, 0LL);
    }
    goto LABEL_16;
  }
  v4 = 0;
  if ( *((_DWORD *)Context + 51) != 1 )
  {
LABEL_16:
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v8 = *((_QWORD *)Context + 186);
    *((_QWORD *)Context + 221) = MEMORY[0xFFFFF78000000008];
    v9 = *(_DWORD *)(v8 + 32);
    if ( *(char *)(*((_QWORD *)Context + 3) + 108LL) >= 0 )
    {
      *(_DWORD *)(v8 + 32) = v9 & 0xFFFFFFDF;
    }
    else
    {
      *(_DWORD *)(v8 + 32) = v9 | 0x20;
      if ( !*((_QWORD *)Context + 218) )
        *((_QWORD *)Context + 218) = *((_QWORD *)Context + 221);
    }
    PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 186));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0061741 & 1) != 0 )
      {
        v11 = *((_QWORD *)Context + 3);
        LOBYTE(Irp) = Context[96];
        LODWORD(Contexta) = *(_DWORD *)(v11 + 56);
        McTemplateK0pquuut(
          (struct _MCGEN_TRACE_CONTEXT *)v11,
          &EventUnitPowerNotRequiredStop,
          v10,
          **((_QWORD **)Context + 186),
          Contexta,
          Irp,
          Context[97],
          Context[98],
          v4);
      }
    }
    return;
  }
  if ( (v3 & 1) == 0 )
  {
    v7 = 0;
    goto LABEL_13;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !KeGetCurrentIrql() )
  {
    v7 = PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           0,
           (POWER_STATE)1,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxWaitWakeCompletion,
           Context,
           (PIRP *)(*((_QWORD *)Context + 186) + 64LL));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 5, &LockHandle);
LABEL_13:
    if ( v7 >= 0
      && PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortUnitPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      Context[161] |= 1u;
      v4 = 1;
      _InterlockedExchange((volatile __int32 *)Context + 377, 0);
    }
    goto LABEL_16;
  }
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 412, 1, 0) )
    IoQueueWorkItem(
      *((PIO_WORKITEM *)Context + 204),
      StorPortUnitPowerNotRequiredStep2Passive,
      DelayedWorkQueue,
      Context);
}
