/*
 * XREFs of ?HamSrvTerminateSelfOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x180068934
 * Callers:
 *     HamRpcSrvTerminateSelfOnRequiredProcessExit @ 0x18006C050 (HamRpcSrvTerminateSelfOnRequiredProcessExit.c)
 * Callees:
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800090C0 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009700 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelfOnProcessExit(__int64 a1, void *a2, int a3, unsigned __int8 a4)
{
  void *v8; // rdx
  struct _HOST_ACTIVITY_MANAGER *v9; // rcx
  int v10; // eax
  struct _RM_HAM_ACTIVITY_HOST *v11; // rbx
  struct _HOST_ACTIVITY_MANAGER *v12; // rcx
  int v13; // eax
  struct _RM_HAM_ACTIVITY_HOST *v14; // rdi
  int v15; // eax
  bool v16; // zf
  DWORD v17; // ebx
  unsigned int v19; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  char v26[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v27; // [rsp+100h] [rbp+0h] BYREF
  unsigned int *v28; // [rsp+120h] [rbp+20h]
  __int64 v29; // [rsp+128h] [rbp+28h]
  __int64 *v30; // [rsp+130h] [rbp+30h]
  __int64 v31; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v32; // [rsp+140h] [rbp+40h]
  __int64 v33; // [rsp+148h] [rbp+48h]
  struct _RM_HAM_ACTIVITY_HOST **v34; // [rsp+150h] [rbp+50h]
  __int64 v35; // [rsp+158h] [rbp+58h]
  __int64 *v36; // [rsp+160h] [rbp+60h]
  __int64 v37; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v38; // [rsp+170h] [rbp+70h]
  __int64 v39; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800891D4, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v26);
  v8 = *(void **)(a1 + 152);
  v9 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v25 = -1LL;
  v24 = -1LL;
  v23 = 0LL;
  v20 = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  v10 = HampHostFindByProcessHandle(v9, v8, &v20, &v21);
  v11 = v20;
  v19 = v10;
  if ( v10 >= 0 )
  {
    v12 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
    v24 = *((_QWORD *)v20 - 4);
    v13 = HampHostFindByProcessHandle(v12, a2, &v23, &v22);
    v14 = v23;
    v19 = v13;
    if ( v13 >= 0 )
    {
      v25 = *((_QWORD *)v23 - 4);
      v15 = HampDepGroupAddTerminateDependency(v11, v21, v23, v22, a3, a4);
      if ( v15 >= 0 )
        v15 = 0;
      v19 = v15;
    }
    if ( v14 )
    {
      RmpAcquireGlobalLock();
      v16 = (*((_QWORD *)v14 + 72))-- == 1LL;
      if ( v16 )
        RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v14 - 64));
      RmpReleaseGlobalLock();
    }
  }
  if ( v11 )
  {
    RmpAcquireGlobalLock();
    v16 = (*((_QWORD *)v11 + 72))-- == 1LL;
    if ( v16 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v11 - 64));
    RmpReleaseGlobalLock();
  }
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v29 = 4LL;
    v28 = &v19;
    v31 = 8LL;
    v30 = &v24;
    v32 = &v21;
    v33 = 8LL;
    LODWORD(v20) = GetProcessId(a2);
    v34 = &v20;
    v36 = &v25;
    v38 = &v22;
    v35 = 4LL;
    v37 = 8LL;
    v39 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A51E, 0LL, 0LL, 8u, &v27);
  }
  return v19;
}
