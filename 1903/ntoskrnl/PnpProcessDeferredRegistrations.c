/*
 * XREFs of PnpProcessDeferredRegistrations @ 0x14066C59C
 * Callers:
 *     PnpDeviceEventWorker @ 0x14066C710 (PnpDeviceEventWorker.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E460 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F810 (KeReleaseGuardedMutex.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PnpDereferenceNotify @ 0x140735A08 (PnpDereferenceNotify.c)
 */

void PnpProcessDeferredRegistrations()
{
  PVOID *v0; // rbx
  __int64 v1; // rax
  PVOID v2; // rax
  struct _FAST_MUTEX *v3; // rdi

  ExAcquireFastMutex(&PnpDeferredRegistrationLock);
  while ( 1 )
  {
    v0 = (PVOID *)PnpDeferredRegistrationList;
    if ( PnpDeferredRegistrationList == &PnpDeferredRegistrationList )
      break;
    if ( *((PVOID **)PnpDeferredRegistrationList + 1) != &PnpDeferredRegistrationList
      || (v1 = *(_QWORD *)PnpDeferredRegistrationList,
          *(PVOID *)(*(_QWORD *)PnpDeferredRegistrationList + 8LL) != PnpDeferredRegistrationList) )
    {
      __fastfail(3u);
    }
    PnpDeferredRegistrationList = *(PVOID *)PnpDeferredRegistrationList;
    *(_QWORD *)(v1 + 8) = &PnpDeferredRegistrationList;
    v2 = v0[2];
    v3 = (struct _FAST_MUTEX *)*((_QWORD *)v2 + 8);
    if ( v3 )
    {
      ExAcquireFastMutex(*((PFAST_MUTEX *)v2 + 8));
      v2 = v0[2];
    }
    *((_BYTE *)v2 + 58) = 0;
    PnpDereferenceNotify(v0[2]);
    ExFreePoolWithTag(v0, 0x37706E50u);
    if ( v3 )
      KeReleaseGuardedMutex(v3);
  }
  KeReleaseGuardedMutex(&PnpDeferredRegistrationLock);
}
