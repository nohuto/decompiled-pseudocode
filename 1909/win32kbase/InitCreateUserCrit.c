/*
 * XREFs of InitCreateUserCrit @ 0x1C0265AF8
 * Callers:
 *     DriverEntry @ 0x1C0263740 (DriverEntry.c)
 * Callees:
 *     UserSetLastError @ 0x1C0029C8C (UserSetLastError.c)
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00378D4 (WPP_RECORDER_SF_q.c)
 *     ?InitDomainLocks@@YAJXZ @ 0x1C009FBC0 (-InitDomainLocks@@YAJXZ.c)
 *     ?CleanupDomainLocks@@YAXXZ @ 0x1C00B1F34 (-CleanupDomainLocks@@YAXXZ.c)
 */

__int64 InitCreateUserCrit()
{
  struct _ERESOURCE *PoolWithTag; // rax
  __int64 v1; // rdx
  struct _ERESOURCE *v2; // rax
  struct _ERESOURCE *v3; // rax
  struct _ERESOURCE *v4; // rax
  struct _ERESOURCE *v5; // rax
  struct _ERESOURCE *v6; // rax
  struct _KEVENT *v7; // rax
  int v8; // edx
  int v9; // edx
  int v10; // edx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 14, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  PoolWithTag = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresUser = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_25;
  if ( ExInitializeResourceLite(PoolWithTag) < 0 )
    goto LABEL_42;
  v2 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresRender = v2;
  if ( !v2 )
    goto LABEL_25;
  if ( ExInitializeResourceLite(v2) < 0 )
    goto LABEL_39;
  v3 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresPTPEventQueue = v3;
  if ( !v3 )
    goto LABEL_25;
  if ( ExInitializeResourceLite(v3) < 0 )
    goto LABEL_36;
  v4 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresDitTouchInjection = v4;
  if ( !v4 )
    goto LABEL_28;
  if ( ExInitializeResourceLite(v4) < 0 )
    goto LABEL_27;
  v5 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresDitMouseInjectionFlush = v5;
  if ( !v5 )
    goto LABEL_25;
  if ( ExInitializeResourceLite(v5) < 0 )
    goto LABEL_30;
  v6 = (struct _ERESOURCE *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x68uLL, 0x72657355u);
  gpresDitCompositionInputSinkQuery = v6;
  if ( !v6 )
    goto LABEL_25;
  if ( ExInitializeResourceLite(v6) < 0 )
    goto LABEL_33;
  v7 = (struct _KEVENT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x664B7355u);
  gpHandleFlagsMutex = v7;
  if ( !v7 )
  {
LABEL_25:
    if ( !gpresDitTouchInjection )
    {
LABEL_28:
      if ( !gpresDitMouseInjectionFlush )
      {
LABEL_31:
        if ( !gpresDitCompositionInputSinkQuery )
        {
LABEL_34:
          if ( !gpresPTPEventQueue )
          {
LABEL_37:
            if ( !gpresRender )
            {
LABEL_40:
              if ( !gpresUser )
              {
LABEL_43:
                UserSetLastError(8LL, v1);
                return 0LL;
              }
              ExDeleteResourceLite(gpresUser);
LABEL_42:
              ExFreePoolWithTag(gpresUser, 0);
              gpresUser = 0LL;
              goto LABEL_43;
            }
            ExDeleteResourceLite(gpresRender);
LABEL_39:
            ExFreePoolWithTag(gpresRender, 0);
            gpresRender = 0LL;
            goto LABEL_40;
          }
          ExDeleteResourceLite(gpresPTPEventQueue);
LABEL_36:
          ExFreePoolWithTag(gpresPTPEventQueue, 0);
          gpresPTPEventQueue = 0LL;
          goto LABEL_37;
        }
        ExDeleteResourceLite(gpresDitCompositionInputSinkQuery);
LABEL_33:
        ExFreePoolWithTag(gpresDitCompositionInputSinkQuery, 0);
        gpresDitCompositionInputSinkQuery = 0LL;
        goto LABEL_34;
      }
      ExDeleteResourceLite(gpresDitMouseInjectionFlush);
LABEL_30:
      ExFreePoolWithTag(gpresDitMouseInjectionFlush, 0);
      gpresDitMouseInjectionFlush = 0LL;
      goto LABEL_31;
    }
    ExDeleteResourceLite(gpresDitTouchInjection);
LABEL_27:
    ExFreePoolWithTag(gpresDitTouchInjection, 0);
    gpresDitTouchInjection = 0LL;
    goto LABEL_28;
  }
  v7->Header.WaitListHead.Flink = 0LL;
  LODWORD(v7->Header.WaitListHead.Blink) = 0;
  v7->Header.LockNV = 1;
  KeInitializeEvent(v7 + 1, SynchronizationEvent, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v8) = 4;
    WPP_RECORDER_SF_q(
      (_DWORD)gBaseLog,
      v8,
      14,
      15,
      (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids,
      gpHandleFlagsMutex);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_q(
        (_DWORD)gBaseLog,
        v9,
        14,
        16,
        (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids,
        gpresRender);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 4;
        WPP_RECORDER_SF_q(
          (_DWORD)gBaseLog,
          v10,
          14,
          17,
          (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids,
          gpresUser);
      }
    }
  }
  if ( (int)InitDomainLocks() < 0 )
  {
    CleanupDomainLocks();
    goto LABEL_25;
  }
  gRotationProcessLock = 0LL;
  gForegroundActivateRightLock = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gBaseLog, 4, 14, 18, (__int64)&WPP_8c8d7d8b35513e4b70580dacda9ab929_Traceguids);
  return 1LL;
}
