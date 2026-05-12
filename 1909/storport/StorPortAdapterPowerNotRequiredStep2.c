/*
 * XREFs of StorPortAdapterPowerNotRequiredStep2 @ 0x1C00228E4
 * Callers:
 *     StorPortAdapterPowerNotRequiredStep1 @ 0x1C0022890 (StorPortAdapterPowerNotRequiredStep1.c)
 *     StorPortAdapterPowerNotRequiredStep2Passive @ 0x1C0041B90 (StorPortAdapterPowerNotRequiredStep2Passive.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C003AE68 (McTemplateK0pqq.c)
 */

void __fastcall StorPortAdapterPowerNotRequiredStep2(PVOID Context)
{
  __int64 v2; // rcx
  char v3; // di
  int v4; // edx
  bool v5; // sf
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ecx
  int v9; // r8d
  NTSTATUS v10; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  v2 = *((_QWORD *)Context + 628);
  v3 = 0;
  v4 = *(_DWORD *)(*(_QWORD *)(v2 + 8) + 12LL);
  if ( (v4 & 2) == 0 && *((_DWORD *)Context + 67) == 1 )
  {
    if ( (*(_DWORD *)(v2 + 20) & 0x40) != 0 && (v4 & 0x800) != 0 )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( KeGetCurrentIrql() )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)Context + 1424, 1, 0) )
          IoQueueWorkItem(
            *((PIO_WORKITEM *)Context + 710),
            StorPortAdapterPowerNotRequiredStep2Passive,
            DelayedWorkQueue,
            Context);
        return;
      }
      v10 = PoRequestPowerIrp(
              *((PDEVICE_OBJECT *)Context + 1),
              0,
              (POWER_STATE)1,
              StorPortAdapterPoFxWaitWakeCompletion,
              Context,
              (PIRP *)(*((_QWORD *)Context + 628) + 72LL));
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
      if ( v10 == 259 )
        *(_DWORD *)(*((_QWORD *)Context + 628) + 20LL) |= 0x20u;
    }
    v3 = 0;
    if ( PoRequestPowerIrp(
           *((PDEVICE_OBJECT *)Context + 1),
           2u,
           (POWER_STATE)4,
           (PREQUEST_POWER_COMPLETE)StorPortAdapterPoFxD3Completion,
           Context,
           0LL) == 259 )
    {
      *((_BYTE *)Context + 108) |= 2u;
      v3 = 1;
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = *((char *)Context + 108) < 0;
  v6 = *((_QWORD *)Context + 628);
  *((_QWORD *)Context + 663) = MEMORY[0xFFFFF78000000008];
  v7 = *(_DWORD *)(v6 + 20);
  if ( v5 )
  {
    *(_DWORD *)(v6 + 20) = v7 | 8;
    if ( !*((_QWORD *)Context + 662) )
      *((_QWORD *)Context + 662) = *((_QWORD *)Context + 663);
  }
  else
  {
    *(_DWORD *)(v6 + 20) = v7 & 0xFFFFFFF7;
  }
  PoFxCompleteDevicePowerNotRequired(**((_QWORD **)Context + 628));
  if ( StorEtwLoggingEnabled )
  {
    if ( (byte_1C0062741 & 1) != 0 )
      McTemplateK0pqq(
        v8,
        (unsigned int)&EventAdapterPowerNotRequiredStop,
        v9,
        **((_QWORD **)Context + 628),
        *((_DWORD *)Context + 14),
        v3);
  }
}
