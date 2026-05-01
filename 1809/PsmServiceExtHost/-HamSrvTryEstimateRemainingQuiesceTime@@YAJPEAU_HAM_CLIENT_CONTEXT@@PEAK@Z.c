/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003C5DC
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x18003C5D0 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010D4C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003C7A0 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  void *v4; // rdx
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v9; // edx
  DWORD v10; // ebx
  unsigned int v12; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+48h] [rbp-B8h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  int *v21; // [rsp+110h] [rbp+10h]
  int v22; // [rsp+118h] [rbp+18h]
  int v23; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v24; // [rsp+120h] [rbp+20h]
  int v25; // [rsp+128h] [rbp+28h]
  int v26; // [rsp+12Ch] [rbp+2Ch]
  struct _RM_HAM_ACTIVITY_HOST **v27; // [rsp+130h] [rbp+30h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A7C5, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  v4 = (void *)*((_QWORD *)a1 + 19);
  v5 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v13 = 0LL;
  v15 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v4, &v13);
  v7 = v13;
  v12 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v15 = *((_QWORD *)v13 - 4);
    v12 = 0;
    *a2 = HampHostTryEstimateRemainingQuiesceTime(v13);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v18 = &v12;
    v14 = *((_DWORD *)a1 + 34);
    v21 = &v14;
    v24 = &v15;
    LODWORD(v13) = *a2;
    v27 = &v13;
    v19 = 4;
    v22 = 4;
    v25 = v9;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A694, 0LL, 0LL, 6u, &v17);
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  return v12;
}
