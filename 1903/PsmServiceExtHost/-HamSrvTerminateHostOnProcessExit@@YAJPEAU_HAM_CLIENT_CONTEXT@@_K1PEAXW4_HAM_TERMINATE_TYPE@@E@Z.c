/*
 * XREFs of ?HamSrvTerminateHostOnProcessExit@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAXW4_HAM_TERMINATE_TYPE@@E@Z @ 0x18000F494
 * Callers:
 *     HamRpcSrvTerminateHostOnProcessExit @ 0x18000F3E0 (HamRpcSrvTerminateHostOnProcessExit.c)
 * Callees:
 *     ?HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z @ 0x18000F40C (-HampSystemIsProcessLifetimeManaged@@YAJPEAXPEAK@Z.c)
 *     ?HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@Z @ 0x180010020 (-HampDepGroupAddTerminateDependency@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@_K01W4_HAM_TERMINATE_TYPE@@E@.c)
 *     ?HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K@Z @ 0x180011DEC (-HampHostFindByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@P.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB70 (-RmHamFindHost@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_KPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateHostOnProcessExit(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        __int64 a3,
        void *a4,
        int a5,
        char a6)
{
  struct _HOST_ACTIVITY_MANAGER *v8; // rcx
  int Host; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // r9d
  int v12; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rbx
  bool v14; // zf
  DWORD v15; // ebx
  int pData; // [rsp+28h] [rbp-D8h]
  int IsProcessLifetimeManaged; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v20; // [rsp+40h] [rbp-C0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v21; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 v22; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v24; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v25[144]; // [rsp+70h] [rbp-90h] BYREF
  EVENT_DATA_DESCRIPTOR v26; // [rsp+100h] [rbp+0h] BYREF
  int *p_IsProcessLifetimeManaged; // [rsp+120h] [rbp+20h]
  __int64 v28; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v29; // [rsp+130h] [rbp+30h]
  __int64 v30; // [rsp+138h] [rbp+38h]
  __int64 *v31; // [rsp+140h] [rbp+40h]
  __int64 v32; // [rsp+148h] [rbp+48h]
  struct _RM_HAM_ACTIVITY_HOST **v33; // [rsp+150h] [rbp+50h]
  __int64 v34; // [rsp+158h] [rbp+58h]
  __int64 *v35; // [rsp+160h] [rbp+60h]
  __int64 v36; // [rsp+168h] [rbp+68h]
  unsigned __int64 *v37; // [rsp+170h] [rbp+70h]
  __int64 v38; // [rsp+178h] [rbp+78h]
  EVENT_DATA_DESCRIPTOR v39; // [rsp+180h] [rbp+80h] BYREF

  v22 = a2;
  v23 = a3;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800976EA, 0LL, 0LL, 2u, &v39);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v25);
  v8 = *a1;
  v24 = -1LL;
  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  Host = RmHamFindHost(v8, v22, &v19);
  v10 = v19;
  v11 = Host;
  IsProcessLifetimeManaged = Host;
  if ( Host >= 0 )
  {
    IsProcessLifetimeManaged = HampSystemIsProcessLifetimeManaged(a4, (unsigned int *)&v19);
    v11 = IsProcessLifetimeManaged;
    if ( IsProcessLifetimeManaged >= 0 )
    {
      if ( (_DWORD)v19 )
      {
        v12 = HampHostFindByProcessHandle(*a1, a4, &v21, &v20);
        v13 = v21;
        v11 = v12;
        IsProcessLifetimeManaged = v12;
        if ( v12 >= 0 )
        {
          LOBYTE(pData) = a6;
          v11 = HampDepGroupAddTerminateDependency(v10, v23, v21, v20, a5, pData);
          if ( v11 >= 0 )
            v11 = 0;
          IsProcessLifetimeManaged = v11;
        }
        if ( v13 )
        {
          RmpAcquireGlobalLock();
          v14 = (*((_QWORD *)v13 + 74))-- == 1LL;
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
    v14 = (*((_QWORD *)v10 + 74))-- == 1LL;
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
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v28 = 4LL;
    p_IsProcessLifetimeManaged = &IsProcessLifetimeManaged;
    v30 = 8LL;
    v29 = &v22;
    v31 = &v23;
    v32 = 8LL;
    LODWORD(v19) = GetProcessId(a4);
    v33 = &v19;
    v35 = &v24;
    v37 = &v20;
    v34 = 4LL;
    v36 = 8LL;
    v38 = 8LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800980D0, 0LL, 0LL, 8u, &v26);
    return (unsigned int)IsProcessLifetimeManaged;
  }
  return (unsigned int)v11;
}
