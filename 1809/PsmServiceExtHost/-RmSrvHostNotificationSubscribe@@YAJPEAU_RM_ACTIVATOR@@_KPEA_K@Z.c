/*
 * XREFs of ?RmSrvHostNotificationSubscribe@@YAJPEAU_RM_ACTIVATOR@@_KPEA_K@Z @ 0x18000DF78
 * Callers:
 *     RmCoreRpcSrvRegisterActivityHostCallbacks @ 0x18000ABC0 (RmCoreRpcSrvRegisterActivityHostCallbacks.c)
 * Callees:
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180008370 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18000ABCC (-RmpActivatorSubscribeForNotifications@@YAJPEAU_RM_ACTIVATOR@@PEAU_RM_ACTIVITY_HOST@@PEA_K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180010E4C (-RmpActivityHostFindByHostId@@YAJPEAU_RM_SERVICE_GLOBALS@@_KPEAPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015834 (-RmpUtilCheckStartLockTracking@@YAXPEAKPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall RmSrvHostNotificationSubscribe(
        struct _RM_SERVICE_GLOBALS **a1,
        unsigned __int64 a2,
        unsigned __int64 *a3)
{
  int v5; // eax
  struct _RM_ACTIVITY_HOST *v6; // rbx
  DWORD v7; // ebx
  int v9; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_ACTIVITY_HOST *v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v11; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v14[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+F0h] [rbp-10h] BYREF
  int *v16; // [rsp+110h] [rbp+10h]
  int v17; // [rsp+118h] [rbp+18h]
  int v18; // [rsp+11Ch] [rbp+1Ch]
  struct _RM_ACTIVITY_HOST **v19; // [rsp+120h] [rbp+20h]
  int v20; // [rsp+128h] [rbp+28h]
  int v21; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *v22; // [rsp+130h] [rbp+30h]
  int v23; // [rsp+138h] [rbp+38h]
  int v24; // [rsp+13Ch] [rbp+3Ch]
  unsigned __int64 *v25; // [rsp+140h] [rbp+40h]
  int v26; // [rsp+148h] [rbp+48h]
  int v27; // [rsp+14Ch] [rbp+4Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+150h] [rbp+50h] BYREF

  v13 = a2;
  RmpUtilCheckStartLockTracking(&v11, (struct _CEM_LOCK_TRACKER *)v14);
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 1uLL) )
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_180085751, 0LL, 0LL, 2u, &pData);
  v10 = 0LL;
  v12 = -1LL;
  RmpAcquireGlobalLock();
  v5 = RmpActivityHostFindByHostId(*a1, v13, &v10);
  v6 = v10;
  v9 = v5;
  if ( v5 >= 0 )
  {
    v9 = RmpActivatorSubscribeForNotifications((struct _RM_ACTIVATOR *)a1, v10, &v12);
    if ( v9 >= 0 )
    {
      v9 = 0;
      *a3 = v12;
    }
  }
  RmpReleaseGlobalLock();
  if ( dword_18009B0B0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18009B0B0, 9uLL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v16 = &v9;
    LODWORD(v10) = *((_DWORD *)a1 + 14);
    v19 = &v10;
    v22 = &v13;
    v25 = &v12;
    v17 = 4;
    v20 = 4;
    v23 = 8;
    v26 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_18009B0B0, &unk_18008529F, 0LL, 0LL, 6u, &v15);
  }
  if ( v6 )
    RmpObjectRelease(v6);
  if ( v11 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  return (unsigned int)v9;
}
