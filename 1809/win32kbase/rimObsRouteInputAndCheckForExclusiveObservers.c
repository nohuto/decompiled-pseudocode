/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C012D428
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     rimObsIsObserverTarget @ 0x1C012C5A0 (rimObsIsObserverTarget.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C012C5DC (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C012CCD8 (rimObsDeliverInputToObserver.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rcx
  struct _LIST_ENTRY *i; // rdi
  struct _KPROCESS *v9; // rbp
  int v10; // esi
  struct _LIST_ENTRY *v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  int v16; // ebp
  struct _KPROCESS *v17; // r14
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  RIMLockExclusive((__int64)&gInputObserverLock);
  RIMLockExclusive((__int64)&gObListLock);
  Flink = gObRimInputObserverList.Flink;
  v3 = 0;
  v4 = 0LL;
  while ( 1 )
  {
    if ( Flink == &gObRimInputObserverList )
      goto LABEL_7;
    v5 = (__int64)&Flink[-1];
    if ( ((__int64)Flink[6].Blink & 2) != 0
      && (unsigned int)rimObsIsObserverTarget(&Flink[-1], a1)
      && (unsigned int)rimObsIsRegisteredObserverAllowed(v6) )
    {
      break;
    }
    Flink = Flink->Flink;
  }
  v4 = Flink - 1;
  if ( Flink == (struct _LIST_ENTRY *)16 )
  {
LABEL_7:
    for ( i = gObRimInputObserverList.Flink; i != &gObRimInputObserverList; i = i->Flink )
    {
      v11 = i - 1;
      if ( (unsigned int)rimObsIsObserverTarget(&i[-1], a1) && (unsigned int)rimObsIsRegisteredObserverAllowed(v12) )
      {
        v16 = 0;
        if ( ((__int64)v11[7].Blink & 1) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, v13, v15);
        v17 = (struct _KPROCESS *)v11[2].Flink;
        if ( v17 != (struct _KPROCESS *)PsGetCurrentProcess(v14) )
        {
          KeStackAttachProcess(v17, &ApcState);
          v16 = 1;
        }
        rimObsDeliverInputToObserver(a1, (__int64)&i[-1]);
        if ( v16 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v5 + 120) & 1) != 0 )
  {
    v9 = *(struct _KPROCESS **)(v5 + 32);
    v10 = 0;
    if ( v9 != (struct _KPROCESS *)PsGetCurrentProcess(v7) )
    {
      KeStackAttachProcess(v9, &ApcState);
      v10 = 1;
    }
    rimObsDeliverInputToObserver(a1, v5);
    if ( v10 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_24:
  qword_1C01D0F90 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C01D0C08 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
