/*
 * XREFs of InitCreateUserCrit @ 0x1C021C7D4
 * Callers:
 *     DriverEntry @ 0x1C021CE90 (DriverEntry.c)
 * Callees:
 *     UserSetLastError @ 0x1C003B4E8 (UserSetLastError.c)
 */

__int64 InitCreateUserCrit()
{
  struct _ERESOURCE *PoolWithTag; // rax
  struct _ERESOURCE *v1; // rax
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rax
  struct _KEVENT *v6; // rax
  __int64 result; // rax

  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresUser = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_15;
  if ( ExInitializeResourceLite(PoolWithTag) < 0 )
  {
LABEL_32:
    ExFreePoolWithTag(gpresUser, 0);
    gpresUser = 0LL;
    goto LABEL_33;
  }
  v1 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresRender = v1;
  if ( !v1 )
    goto LABEL_15;
  if ( ExInitializeResourceLite(v1) < 0 )
    goto LABEL_29;
  v2 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresPTPEventQueue = v2;
  if ( !v2 )
    goto LABEL_15;
  if ( ExInitializeResourceLite(v2) < 0 )
  {
LABEL_26:
    ExFreePoolWithTag(gpresPTPEventQueue, 0);
    gpresPTPEventQueue = 0LL;
    goto LABEL_27;
  }
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresDitTouchInjection = v3;
  if ( v3 )
  {
    if ( ExInitializeResourceLite(v3) < 0 )
    {
LABEL_17:
      ExFreePoolWithTag(gpresDitTouchInjection, 0);
      gpresDitTouchInjection = 0LL;
      goto LABEL_18;
    }
    v4 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
    gpresDitMouseInjectionFlush = v4;
    if ( v4 )
    {
      if ( ExInitializeResourceLite(v4) < 0 )
      {
LABEL_20:
        ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
        gpresDitMouseInjectionFlush = 0LL;
        goto LABEL_21;
      }
      v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
      gpresDitCompositionInputSinkQuery = v5;
      if ( v5 )
      {
        if ( ExInitializeResourceLite(v5) < 0 )
          goto LABEL_23;
        v6 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
        gpHandleFlagsMutex = v6;
        if ( v6 )
        {
          v6->Header.WaitListHead.Flink = 0LL;
          v6->Header.LockNV = 1;
          LODWORD(v6->Header.WaitListHead.Blink) = 0;
          KeInitializeEvent(v6 + 1, SynchronizationEvent, 0);
          result = 1LL;
          gDomainThreadInfoLock = 0LL;
          qword_1C01CE458 = 0LL;
          dword_1C01CE460 = 0;
          gDomainQueueLock = 0LL;
          qword_1C01CE410 = 0LL;
          dword_1C01CE418 = 0;
          gDomainHookLock = 0LL;
          qword_1C01CE3F8 = 0LL;
          dword_1C01CE400 = 0;
          gDomainWinEventLock = 0LL;
          qword_1C01CE3E0 = 0LL;
          dword_1C01CE3E8 = 0;
          gDomainWindowLock = 0LL;
          qword_1C01CE3B0 = 0LL;
          dword_1C01CE3B8 = 0;
          gDomainHandleManagerLock = 0LL;
          qword_1C01CE480 = 0LL;
          dword_1C01CE488 = 0;
          gDomainClientLibLock = 0LL;
          qword_1C01CE3C8 = 0LL;
          dword_1C01CE3D0 = 0;
          gDomainPowerTransitionsStateLock = 0LL;
          qword_1C01CE398 = 0LL;
          dword_1C01CE3A0 = 0;
          gDomainDummyLock = 0LL;
          qword_1C01CE368 = 0LL;
          dword_1C01CE370 = 0;
          gDomainTlLock = 0LL;
          qword_1C01CE380 = 0LL;
          dword_1C01CE388 = 0;
          gRotationProcessLock = 0LL;
          return result;
        }
      }
    }
LABEL_15:
    if ( !gpresDitTouchInjection )
      goto LABEL_18;
    ExDeleteResourceLite(gpresDitTouchInjection);
    goto LABEL_17;
  }
LABEL_18:
  if ( gpresDitMouseInjectionFlush )
  {
    ExDeleteResourceLite(gpresDitMouseInjectionFlush);
    goto LABEL_20;
  }
LABEL_21:
  if ( !gpresDitCompositionInputSinkQuery )
    goto LABEL_24;
  ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
LABEL_23:
  ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
  gpresDitCompositionInputSinkQuery = 0LL;
LABEL_24:
  if ( gpresPTPEventQueue )
  {
    ExDeleteResourceLite(gpresPTPEventQueue);
    goto LABEL_26;
  }
LABEL_27:
  if ( !gpresRender )
    goto LABEL_30;
  ExDeleteResourceLite(gpresRender);
LABEL_29:
  ExFreePoolWithTag(gpresRender, 0);
  gpresRender = 0LL;
LABEL_30:
  if ( gpresUser )
  {
    ExDeleteResourceLite(gpresUser);
    goto LABEL_32;
  }
LABEL_33:
  UserSetLastError(8LL);
  return 0LL;
}
