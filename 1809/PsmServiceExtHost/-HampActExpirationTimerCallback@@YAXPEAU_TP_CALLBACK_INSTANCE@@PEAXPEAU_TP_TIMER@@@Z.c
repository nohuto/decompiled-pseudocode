/*
 * XREFs of ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18006C7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x180005B74 (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18000AB6C (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000CA50 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000E910 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x180023DD0 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180027F30 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18006CCE4 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
 */

void __fastcall HampActExpirationTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_HAM_ACTIVITY_HOST **a2,
        struct _TP_TIMER *a3)
{
  struct _HAM_DEPENDENCY_GROUP *v5; // rsi
  DWORD v6; // esi
  _BYTE v7[144]; // [rsp+30h] [rbp-D8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-48h] BYREF
  char *v9; // [rsp+E0h] [rbp-28h]
  int v10; // [rsp+E8h] [rbp-20h]
  int v11; // [rsp+ECh] [rbp-1Ch]

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v7);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BBB0, 0LL, 0LL, 2u, &pData);
  HampHostAcquireLockExclusiveEx(a2[10], 0);
  HampActVerify(a2);
  if ( a2[66] == a3 )
  {
    a2[66] = 0LL;
    a2[67] = 0LL;
    HampActMarkExpired((struct _HAM_ACTIVITY *)a2);
    HampHostUpdateActivityState(a2[10]);
  }
  else
  {
    a3 = 0LL;
  }
  HampActVerify(a2);
  if ( a3 )
    v5 = HampHostCheckEnterDependencyWorker(a2[10]);
  else
    v5 = 0LL;
  HampHostReleaseLockExclusiveEx(a2[10]);
  CemRcObjectDereference(a2);
  if ( v5 )
    HampDepGroupRunStateChangeWorker(v5);
  v6 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v6, 0LL);
  }
  if ( a3 )
    TpReleaseTimer(a3);
  if ( hProvider > 4u )
  {
    v11 = 0;
    v9 = (char *)(a2 + 5);
    v10 = 8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008BD05, 0LL, 0LL, 3u, &pData);
  }
}
