/*
 * XREFs of PnpDisableWatchdog @ 0x1400EFC58
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x14015B500 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDeviceEventWorker @ 0x140699360 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x140731890 (PnpDelayedRemoveWorker.c)
 *     PnpProcessCompletedEject @ 0x140861E70 (PnpProcessCompletedEject.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeWaitForSingleObject @ 0x14003FB10 (KeWaitForSingleObject.c)
 *     PnpCancelWatchdog @ 0x1400EFCD0 (PnpCancelWatchdog.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(_QWORD *a1, int a2)
{
  int v2; // edx
  __int64 v3; // rsi
  char v4; // bl
  int v5; // edx

  v2 = a2 - 1;
  if ( v2 )
  {
    v5 = v2 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return;
      v3 = a1[3];
    }
    else
    {
      v3 = a1[8];
    }
  }
  else
  {
    v3 = a1[13];
  }
  if ( v3 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(v3 + 208));
    v4 = PnpCancelWatchdog(v3);
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v3 + 208));
    if ( v4 )
      KeWaitForSingleObject((PVOID)(v3 + 144), Executive, 0, 0, 0LL);
    ExFreePoolWithTag((PVOID)v3, 0x57647050u);
  }
}
