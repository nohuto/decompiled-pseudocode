/*
 * XREFs of StorPortAdapterPowerRequiredStep2 @ 0x1C0022D7C
 * Callers:
 *     StorPortAdapterPowerRequiredStep1 @ 0x1C0022CF0 (StorPortAdapterPowerRequiredStep1.c)
 * Callees:
 *     McTemplateK0pqq @ 0x1C003AE68 (McTemplateK0pqq.c)
 */

void __fastcall StorPortAdapterPowerRequiredStep2(PVOID Context)
{
  int v2; // ecx
  int v3; // r8d
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context + 10, &LockHandle);
  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Context + 628) + 8LL) + 12LL) & 1) != 0
    || *((_DWORD *)Context + 67) == 1 && (*((_BYTE *)Context + 108) & 2) == 0
    || PoRequestPowerIrp(
         *((PDEVICE_OBJECT *)Context + 1),
         2u,
         (POWER_STATE)1,
         StorPortAdapterPoFxD0Completion,
         Context,
         0LL) != 259 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    PoFxReportDevicePoweredOn(**((_QWORD **)Context + 628));
    if ( StorEtwLoggingEnabled )
    {
      if ( (byte_1C0062741 & 1) != 0 )
        McTemplateK0pqq(
          v2,
          (unsigned int)&EventAdapterPowerRequiredStop,
          v3,
          **((_QWORD **)Context + 628),
          *((_DWORD *)Context + 14),
          0);
    }
  }
  else
  {
    *((_BYTE *)Context + 108) |= 1u;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
