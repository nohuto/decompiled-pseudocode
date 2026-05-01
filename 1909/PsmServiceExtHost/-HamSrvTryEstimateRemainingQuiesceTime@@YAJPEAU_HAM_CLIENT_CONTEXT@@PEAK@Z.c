/*
 * XREFs of ?HamSrvTryEstimateRemainingQuiesceTime@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAK@Z @ 0x18003E0DC
 * Callers:
 *     HamRpcSrvTryEstimateRemainingQuiesceTime @ 0x18003E0D0 (HamRpcSrvTryEstimateRemainingQuiesceTime.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18003E2B0 (-HampHostTryEstimateRemainingQuiesceTime@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTryEstimateRemainingQuiesceTime(struct _HAM_CLIENT_CONTEXT *a1, unsigned int *a2)
{
  void *v4; // rdx
  struct _HOST_ACTIVITY_MANAGER *v5; // rcx
  unsigned int v6; // edi
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int v10; // edx
  DWORD v11; // ebx
  unsigned int v13; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  char v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v19; // [rsp+100h] [rbp+0h]
  int v20; // [rsp+108h] [rbp+8h]
  int v21; // [rsp+10Ch] [rbp+Ch]
  int *v22; // [rsp+110h] [rbp+10h]
  int v23; // [rsp+118h] [rbp+18h]
  int v24; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v25; // [rsp+120h] [rbp+20h]
  int v26; // [rsp+128h] [rbp+28h]
  int v27; // [rsp+12Ch] [rbp+2Ch]
  struct _RM_HAM_ACTIVITY_HOST **v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+138h] [rbp+38h]
  int v30; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800983D2, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  v4 = (void *)*((_QWORD *)a1 + 21);
  v5 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v6 = 0;
  v14 = 0LL;
  v16 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v5, v4, &v14);
  v8 = v14;
  v13 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v16 = *((_QWORD *)v14 - 4);
    v13 = 0;
    v6 = HampHostTryEstimateRemainingQuiesceTime(v14);
    *a2 = v6;
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v8 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64));
    RmpReleaseGlobalLock();
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v19 = &v13;
    v15 = *((_DWORD *)a1 + 35);
    v22 = &v15;
    v25 = &v16;
    v28 = &v14;
    v20 = 4;
    v23 = 4;
    v26 = v10;
    LODWORD(v14) = v6;
    v29 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098168, 0LL, 0LL, 6u, &v18);
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
