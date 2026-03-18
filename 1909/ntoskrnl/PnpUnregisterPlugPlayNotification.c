/*
 * XREFs of PnpUnregisterPlugPlayNotification @ 0x140175974
 * Callers:
 *     IoUnregisterPlugPlayNotification @ 0x140737AC0 (IoUnregisterPlugPlayNotification.c)
 *     IoUnregisterPlugPlayNotificationEx @ 0x140749D70 (IoUnregisterPlugPlayNotificationEx.c)
 *     PopCleanCoolingExtension @ 0x1408A324C (PopCleanCoolingExtension.c)
 *     SmKmFileInfoCleanup @ 0x1408E916C (SmKmFileInfoCleanup.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003B910 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegion @ 0x14003DF60 (KeLeaveCriticalRegion.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     KeAcquireGuardedMutex @ 0x1400EF450 (KeAcquireGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x140737C68 (PnpDereferenceNotify.c)
 */

__int64 __fastcall PnpUnregisterPlugPlayNotification(PVOID P, char a2)
{
  struct _FAST_MUTEX *v2; // rbx
  char v5; // r12
  struct _KTHREAD *CurrentThread; // rax
  PVOID *v8; // rsi
  PVOID *v9; // r15
  PVOID *v10; // r14
  PVOID *v11; // rax
  PVOID **v12; // rdx

  v2 = (struct _FAST_MUTEX *)*((_QWORD *)P + 8);
  v5 = 0;
  KeAcquireGuardedMutex(&PnpNotificationInProgressLock);
  if ( PnpNotificationInProgress )
  {
    KeAcquireGuardedMutex(&PnpDeferredRegistrationLock);
    v8 = (PVOID *)PnpDeferredRegistrationList;
    while ( v8 != &PnpDeferredRegistrationList )
    {
      v9 = v8 + 2;
      v10 = v8;
      if ( v8[2] == P )
      {
        v5 = 1;
        if ( v2 )
          KeAcquireGuardedMutex(v2);
        v11 = (PVOID *)*v8;
        v8 = v11;
        if ( v11[1] != v10 || (v12 = (PVOID **)v10[1], *v12 != v10) )
          __fastfail(3u);
        *v12 = v11;
        v11[1] = v12;
        PnpDereferenceNotify(*v9);
        if ( v2 )
          KeReleaseGuardedMutex(v2);
        ExFreePoolWithTag(v10, 0x37706E50u);
      }
      else
      {
        v8 = (PVOID *)*v8;
      }
    }
    KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
  }
  KeReleaseGuardedMutex(&PnpNotificationInProgressLock);
  if ( a2 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(*((PERESOURCE *)P + 9), 1u);
  }
  else if ( v2 )
  {
    KeAcquireGuardedMutex(v2);
  }
  if ( !*((_BYTE *)P + 58) || v5 )
  {
    *((_BYTE *)P + 58) = 1;
    if ( a2 )
    {
      ExReleaseResourceLite(*((PERESOURCE *)P + 9));
      KeLeaveCriticalRegion();
      if ( v2 )
        KeAcquireGuardedMutex(v2);
    }
    PnpDereferenceNotify(P);
  }
  else if ( a2 )
  {
    ExReleaseResourceLite(*((PERESOURCE *)P + 9));
    KeLeaveCriticalRegion();
    return 0LL;
  }
  if ( v2 )
    KeReleaseGuardedMutex(v2);
  return 0LL;
}
