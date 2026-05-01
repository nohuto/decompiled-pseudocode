/*
 * XREFs of ?HampActExpirationTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18007AC10
 * Callers:
 *     <none>
 * Callees:
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180029C90 (-HampHostUpdateActivityState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z @ 0x18002C140 (-HampDepGroupRunStateChangeWorker@@YAXPEAU_HAM_DEPENDENCY_GROUP@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x180030170 (-HampHostReleaseLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x1800370A0 (-HampHostAcquireLockExclusiveEx@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003CAE8 (-HampHostCheckEnterDependencyWorker@@YAPEAU_HAM_DEPENDENCY_GROUP@@PEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z @ 0x18007ADAC (-HampActMarkExpired@@YAXPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampActVerify@@YA?AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z @ 0x18007B1E8 (-HampActVerify@@YA-AW4_HAM_ACTIVITY_VERIFY_STATUS@@PEAU_HAM_ACTIVITY@@K@Z.c)
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
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800999F8, 0LL, 0LL, 2u, &pData);
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
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v6, 0LL);
  }
  if ( a3 )
    TpReleaseTimer(a3);
  if ( dword_1800AB2C0 > 4u )
  {
    v11 = 0;
    v9 = (char *)(a2 + 5);
    v10 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180099C51, 0LL, 0LL, 3u, &pData);
  }
}
