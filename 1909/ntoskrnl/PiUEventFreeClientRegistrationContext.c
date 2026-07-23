/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x1406EA0E4
 * Callers:
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     PiUEventDispatch @ 0x140695E00 (PiUEventDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003E1A0 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x14003F550 (KeReleaseGuardedMutex.c)
 *     ZwDeleteWnfStateName @ 0x1401C26D0 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     PiDmObjectRelease @ 0x1405BF214 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x1405F3AE0 (SeReleaseSubjectContext.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140697410 (PiUEventDequeuePendingEventWorker.c)
 */

void __fastcall PiUEventFreeClientRegistrationContext(char *P, char a2)
{
  PFAST_MUTEX v3; // rcx
  PVOID *v4; // rax
  int v5; // ecx
  char *v6; // rdi
  char *v7; // rdi
  int v8; // ecx
  unsigned int *v9; // rcx
  int v10; // ecx
  char *v11; // rdx
  char *v12; // rdx

  if ( a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
    v3 = *(PFAST_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v4 = (PVOID *)*((_QWORD *)P + 1), *v4 != P) )
      __fastfail(3u);
    *v4 = v3;
    v3->Owner = v4;
    v5 = *((_DWORD *)P + 33);
    if ( v5 )
    {
      v8 = v5 - 1;
      if ( v8 )
      {
        v10 = v8 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            --PiUEventDevInstancePropertyClientCount;
        }
        else
        {
          --PiUEventDevInstanceClientCount;
        }
      }
      else
      {
        --PiUEventDevHandleClientCount;
      }
    }
    else
    {
      --PiUEventDevInterfaceClientCount;
    }
    v6 = (char *)*((_QWORD *)P + 14);
    while ( v6 != P + 112 )
    {
      v11 = v6;
      v6 = *(char **)v6;
      PiUEventDequeuePendingEventWorker((__int64)P, v11, 0);
    }
    v7 = (char *)*((_QWORD *)P + 12);
    while ( v7 != P + 96 )
    {
      v12 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker((__int64)P, v12, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v9 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v9 )
      PiDmObjectRelease(v9);
  }
  ZwDeleteWnfStateName((PCWNF_STATE_NAME)P + 11);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
