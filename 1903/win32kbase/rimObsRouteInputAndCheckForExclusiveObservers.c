/*
 * XREFs of rimObsRouteInputAndCheckForExclusiveObservers @ 0x1C015A3D0
 * Callers:
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     rimObsIsObserverTarget @ 0x1C01594E0 (rimObsIsObserverTarget.c)
 *     rimObsIsRegisteredObserverAllowed @ 0x1C015951C (rimObsIsRegisteredObserverAllowed.c)
 *     rimObsDeliverInputToObserver @ 0x1C0159C60 (rimObsDeliverInputToObserver.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimObsRouteInputAndCheckForExclusiveObservers(__int64 a1)
{
  struct _LIST_ENTRY *Flink; // rsi
  unsigned int v3; // ebx
  struct _LIST_ENTRY *v4; // r12
  __int64 v5; // rdi
  __int64 v6; // rcx
  struct _LIST_ENTRY *i; // rdi
  int v8; // esi
  struct _KPROCESS *v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct _LIST_ENTRY *v12; // rsi
  __int64 v13; // rcx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  struct _KPROCESS *v18; // rbp
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
      v12 = i - 1;
      if ( (unsigned int)rimObsIsObserverTarget(&i[-1], a1) && (unsigned int)rimObsIsRegisteredObserverAllowed(v13) )
      {
        v14 = 0;
        memset(&ApcState, 0, sizeof(ApcState));
        if ( ((__int64)v12[7].Blink & 1) == 0 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17);
        v18 = (struct _KPROCESS *)v12[2].Flink;
        if ( v18 != (struct _KPROCESS *)PsGetCurrentProcess(v16, v15) )
        {
          KeStackAttachProcess(v18, &ApcState);
          v14 = 1;
        }
        rimObsDeliverInputToObserver(a1, (__int64)&i[-1]);
        if ( v14 )
          KeUnstackDetachProcess(&ApcState);
      }
    }
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v5 + 120) & 1) != 0 )
  {
    v8 = 0;
    memset(&ApcState, 0, sizeof(ApcState));
    v9 = *(struct _KPROCESS **)(v5 + 32);
    if ( v9 != (struct _KPROCESS *)PsGetCurrentProcess(v11, v10) )
    {
      KeStackAttachProcess(v9, &ApcState);
      v8 = 1;
    }
    rimObsDeliverInputToObserver(a1, v5);
    if ( v8 )
      KeUnstackDetachProcess(&ApcState);
  }
LABEL_24:
  qword_1C0218788 = 0LL;
  ExReleasePushLockExclusiveEx(&gObListLock, 0LL);
  KeLeaveCriticalRegion();
  qword_1C02182C8 = 0LL;
  ExReleasePushLockExclusiveEx(&gInputObserverLock, 0LL);
  KeLeaveCriticalRegion();
  LOBYTE(v3) = v4 != 0LL;
  return v3;
}
