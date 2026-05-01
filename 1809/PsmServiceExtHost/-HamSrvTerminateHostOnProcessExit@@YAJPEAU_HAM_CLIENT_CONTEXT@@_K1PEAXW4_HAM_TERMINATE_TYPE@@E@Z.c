/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18000C3BC
 * Callers:
 *     HamRpcSrvTerminateHostOnProcessExit @ 0x180009030 (HamRpcSrvTerminateHostOnProcessExit.c)
 * Callees:
 *     ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x18000903C (-HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x1800090C0 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180009700 (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180012FF0 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        __int64 a3,
        void *a4,
        int a5,
        unsigned __int8 a6)
{
  struct _HOST_ACTIVITY_MANAGER *v8; // rcx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // r9d
  int v12; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  bool v14; // zf
  DWORD v15; // ebx
  int IsProcessLifetimeManaged; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v21; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v24[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v25; // [rsp+100h] [rbp+0h] BYREF
  int *p_IsProcessLifetimeManaged; // [rsp+120h] [rbp+20h]
  __int64 v27; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v28; // [rsp+130h] [rbp+30h]
  __int64 v29; // [rsp+138h] [rbp+38h]
  __int64 *v30; // [rsp+140h] [rbp+40h]
  __int64 v31; // [rsp+148h] [rbp+48h]
  struct _RM_HAM_ACTIVITY_HOST **v32; // [rsp+150h] [rbp+50h]
  __int64 v33; // [rsp+158h] [rbp+58h]
  __int64 *v34; // [rsp+160h] [rbp+60h]
  __int64 v35; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v36; // [rsp+170h] [rbp+70h]
  __int64 v37; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+180h] [rbp+80h] BYREF

  v21 = a2;
  v22 = a3;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089AB0, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v24);
  v8 = *a1;
  v23 = -1LL;
  v20 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  Host = RmHamFindHost(v8, v21, &v18);
  v10 = v18;
  v11 = Host;
  IsProcessLifetimeManaged = Host;
  if ( Host >= 0 )
  {
    IsProcessLifetimeManaged = HampSystemIsProcessLifetimeManaged(a4, (unsigned int *)&v18);
    v11 = IsProcessLifetimeManaged;
    if ( IsProcessLifetimeManaged >= 0 )
    {
      if ( (_DWORD)v18 )
      {
        v12 = HampHostFindByProcessHandle(*a1, a4, &v20, &v19);
        v13 = v20;
        v11 = v12;
        IsProcessLifetimeManaged = v12;
        if ( v12 >= 0 )
        {
          v11 = HampDepGroupAddTerminateDependency(v10, v22, v20, v19, a5, a6);
          if ( v11 >= 0 )
            v11 = 0;
          IsProcessLifetimeManaged = v11;
        }
        if ( v13 )
        {
          RmpAcquireGlobalLock();
          v14 = (*((_QWORD *)v13 + 72))-- == 1LL;
          if ( v14 )
            RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v13 - 64));
          RmpReleaseGlobalLock();
          v11 = IsProcessLifetimeManaged;
        }
      }
      else
      {
        v11 = 0;
        IsProcessLifetimeManaged = 0;
      }
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v14 = (*((_QWORD *)v10 + 72))-- == 1LL;
    if ( v14 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
    v11 = IsProcessLifetimeManaged;
  }
  v15 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v15, 0LL);
    v11 = IsProcessLifetimeManaged;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v27 = 4LL;
    p_IsProcessLifetimeManaged = &IsProcessLifetimeManaged;
    v29 = 8LL;
    v28 = &v21;
    v30 = &v22;
    v31 = 8LL;
    LODWORD(v18) = GetProcessId(a4);
    v32 = &v18;
    v34 = &v23;
    v36 = &v19;
    v33 = 4LL;
    v35 = 8LL;
    v37 = 8LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A5D5, 0LL, 0LL, 8u, &v25);
    return (unsigned int)IsProcessLifetimeManaged;
  }
  return (unsigned int)v11;
}
