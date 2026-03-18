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

void __fastcall PiUEventFreeClientRegistrationContext(char *P, __int64 a2, __int64 a3)
{
  PFAST_MUTEX v4; // rcx
  PVOID *v5; // rax
  int v6; // ecx
  char *v7; // rdi
  char *v8; // rdi
  int v9; // ecx
  unsigned int *v10; // rcx
  int v11; // ecx
  char *v12; // rdx
  char *v13; // rdx

  if ( (_BYTE)a2 )
  {
    ExAcquireFastMutex(&PiUEventClientRegistrationListLock);
    ExAcquireFastMutex(*((PFAST_MUTEX *)P + 2));
    v4 = *(PFAST_MUTEX *)P;
    if ( *(char **)(*(_QWORD *)P + 8LL) != P || (v5 = (PVOID *)*((_QWORD *)P + 1), *v5 != P) )
      __fastfail(3u);
    *v5 = v4;
    v4->Owner = v5;
    v6 = *((_DWORD *)P + 33);
    if ( v6 )
    {
      v9 = v6 - 1;
      if ( v9 )
      {
        v11 = v9 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
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
    v7 = (char *)*((_QWORD *)P + 14);
    while ( v7 != P + 112 )
    {
      v12 = v7;
      v7 = *(char **)v7;
      PiUEventDequeuePendingEventWorker((__int64)P, v12, 0);
    }
    v8 = (char *)*((_QWORD *)P + 12);
    while ( v8 != P + 96 )
    {
      v13 = v8;
      v8 = *(char **)v8;
      PiUEventDequeuePendingEventWorker((__int64)P, v13, 1);
    }
    KeReleaseGuardedMutex(*((PKGUARDED_MUTEX *)P + 2));
    KeReleaseGuardedMutex(&PiUEventClientRegistrationListLock);
  }
  if ( *((_DWORD *)P + 33) == 1 || (unsigned int)(*((_DWORD *)P + 33) - 2) < 2 )
  {
    v10 = (unsigned int *)*((_QWORD *)P + 3);
    if ( v10 )
      PiDmObjectRelease(v10);
  }
  ZwDeleteWnfStateName((__int64)(P + 88), a2, a3);
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)(P + 56));
  ExFreePoolWithTag(*((PVOID *)P + 2), 0x59706E50u);
  memset(P, 0, 0x90uLL);
  ExFreePoolWithTag(P, 0x59706E50u);
}
