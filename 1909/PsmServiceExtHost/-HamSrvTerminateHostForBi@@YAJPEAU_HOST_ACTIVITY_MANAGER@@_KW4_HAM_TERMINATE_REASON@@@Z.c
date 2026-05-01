/*
 * XREFs of ?HamSrvTerminateHostForBi@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KW4_HAM_TERMINATE_REASON@@@Z @ 0x180075B50
 * Callers:
 *     PsmHamTerminateHost @ 0x180061140 (PsmHamTerminateHost.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgCreateWsz @ 0x180026280 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateHostForBi(struct _HOST_ACTIVITY_MANAGER *a1, unsigned __int64 a2, int a3)
{
  const WCHAR *v5; // rsi
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  int v8; // r9d
  DWORD v10; // ebx
  char v12; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v13; // [rsp+34h] [rbp-CCh] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v14; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  char v16[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v18; // [rsp+100h] [rbp+0h]
  int v19; // [rsp+108h] [rbp+8h]
  int v20; // [rsp+10Ch] [rbp+Ch]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  unsigned __int64 *v22; // [rsp+120h] [rbp+20h]
  int v23; // [rsp+128h] [rbp+28h]
  int v24; // [rsp+12Ch] [rbp+2Ch]
  char *v25; // [rsp+130h] [rbp+30h]
  int v26; // [rsp+138h] [rbp+38h]
  int v27; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v15 = a2;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097F7E, 0LL, 0LL, 2u, &pData);
  v5 = 0LL;
  v14 = 0LL;
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v16);
  Host = RmHamFindHost(a1, v15, &v14);
  v7 = v14;
  v13 = Host;
  if ( Host >= 0 )
  {
    v5 = (const WCHAR *)((char *)v14 + 24);
    HampHostQueueTerminateEx((__int64)v14, 3u, a3, 0LL, 0, 0);
    v13 = 0;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v20 = 0;
    v18 = &v13;
    v19 = 4;
    TlgCreateWsz(&pDesc, v5);
    v24 = 0;
    v27 = 0;
    v25 = &v12;
    v22 = &v15;
    v23 = v8;
    v12 = a3;
    v26 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097297, 0LL, 0LL, 6u, &v17);
  }
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v10, 0LL);
  }
  return v13;
}
