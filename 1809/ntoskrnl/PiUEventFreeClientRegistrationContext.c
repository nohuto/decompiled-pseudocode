/*
 * XREFs of PiUEventFreeClientRegistrationContext @ 0x1406C9338
 * Callers:
 *     PiUEventDispatch @ 0x1405A0DB0 (PiUEventDispatch.c)
 *     PiUEventHandleRegistration @ 0x140656DA4 (PiUEventHandleRegistration.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140014E30 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14004E530 (ExAcquireFastMutex.c)
 *     ZwDeleteWnfStateName @ 0x1401B9D50 (ZwDeleteWnfStateName.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14058FA80 (PiUEventDequeuePendingEventWorker.c)
 *     PiDmObjectRelease @ 0x140599D30 (PiDmObjectRelease.c)
 *     SeReleaseSubjectContext @ 0x1405E2240 (SeReleaseSubjectContext.c)
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
