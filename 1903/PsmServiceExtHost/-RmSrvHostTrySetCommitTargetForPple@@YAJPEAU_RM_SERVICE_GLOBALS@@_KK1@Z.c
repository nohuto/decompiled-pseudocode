/*
 * XREFs of ?RmSrvHostTrySetCommitTargetForPple@@YAJPEAU_RM_SERVICE_GLOBALS@@_KK1@Z @ 0x1800675E8
 * Callers:
 *     RmgrSrv_RmSetMemoryUsageLimit @ 0x180061650 (RmgrSrv_RmSetMemoryUsageLimit.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z @ 0x1800781DC (-HampHostTrySetPpleCommitTarget@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K@Z.c)
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
  __int64 v17; // [rsp+50h] [rbp-B0h] BYREF
  char v18[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v19; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+120h] [rbp+20h] BYREF
  unsigned __int64 *v23; // [rsp+130h] [rbp+30h]
  __int64 v24; // [rsp+138h] [rbp+38h]
  struct _RM_HAM_ACTIVITY_HOST **v25; // [rsp+140h] [rbp+40h]
  __int64 v26; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v27; // [rsp+150h] [rbp+50h]
  __int64 v28; // [rsp+158h] [rbp+58h]
  __int64 *v29; // [rsp+160h] [rbp+60h]
  __int64 v30; // [rsp+168h] [rbp+68h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  v4 = RmSvcGlobals;
  v15 = a2;
  v16 = a4;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v18);
  v14 = 0LL;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800936BD, 0LL, 0LL, 2u, &pData);
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
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 0x400000000008uLL) )
  {
    v21 = 4LL;
    v20 = &v13;
    v9 = (const WCHAR *)((char *)v7 + 24);
    if ( !v7 )
      v9 = 0LL;
    TlgCreateWsz(&pDesc, v9);
    LODWORD(v14) = a3;
    v23 = &v15;
    v25 = &v14;
    v24 = 8LL;
    v27 = &v16;
    v29 = &v17;
    v26 = 4LL;
    v28 = 8LL;
    v17 = 0x1000000LL;
    v30 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180093832, 0LL, 0LL, 8u, &v19);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  v11 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v11, 0LL);
  }
  return v13;
}
