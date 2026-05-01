/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x18005A850
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180054C20 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FF0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateWsz @ 0x180022370 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x18006A5FC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
 */

__int64 __fastcall RmSrvHostTrySetCommitTargetForPple(
        struct _RM_SERVICE_GLOBALS *a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int64 a4)
{
  struct _RM_SERVICE_GLOBALS *v4; // rbx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v8; // eax
  const WCHAR *v9; // rdx
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  char v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  struct _RM_HAM_ACTIVITY_HOST **v24; // [rsp+130h] [rbp+30h]
  __int64 v25; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v26; // [rsp+140h] [rbp+40h]
  __int64 v27; // [rsp+148h] [rbp+48h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v4 = RmSvcGlobals;
  v15 = a2;
  v16 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v14 = 0LL;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800858D0, 0LL, 0LL, 2u, &pData);
  Host = RmHamFindHost((struct _RM_SERVICE_GLOBALS *)((char *)v4 + 1608), v15, &v14);
  v7 = v14;
  v13 = Host;
  if ( Host >= 0 )
  {
    v8 = HampHostTrySetPpleCommitTarget(v14, v16);
    if ( v8 >= 0 )
      v8 = 0;
    v13 = v8;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 0x400000000008uLL) )
  {
    v20 = 4LL;
    v19 = &v13;
    v9 = (const WCHAR *)((char *)v7 + 24);
    if ( !v7 )
      v9 = 0LL;
    TlgCreateWsz(&pDesc, v9);
    v23 = 8LL;
    v24 = &v14;
    v22 = &v15;
    v26 = &v16;
    LODWORD(v14) = a3;
    v25 = 4LL;
    v27 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180085A85, 0LL, 0LL, 7u, &v18);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v11, 0LL);
  }
  return v13;
}
