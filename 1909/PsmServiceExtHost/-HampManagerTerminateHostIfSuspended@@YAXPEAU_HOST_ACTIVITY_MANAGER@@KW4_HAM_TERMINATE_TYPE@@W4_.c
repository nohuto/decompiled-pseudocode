/*
 * XREFs of ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180076C64
 * Callers:
 *     ?HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180045D90 (-HampOplockCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 *     ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180075D10 (-HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z.c)
 * Callees:
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180031080 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180077E54 (-HampHostTerminateIfSuspended@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMI.c)
 */

void __fastcall HampManagerTerminateHostIfSuspended(
        struct _HOST_ACTIVITY_MANAGER *a1,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5)
{
  struct _RM_HAM_ACTIVITY_HOST *v7; // rbx
  char v8; // si
  __int64 v10; // rdx
  NTSTATUS v11; // edi
  int HostByProcessHandle; // eax
  char v14[8]; // [rsp+30h] [rbp-71h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-69h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v16; // [rsp+40h] [rbp-61h] BYREF
  unsigned int v17; // [rsp+48h] [rbp-59h] BYREF
  NTSTATUS v18; // [rsp+4Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-51h] BYREF
  unsigned int *v20; // [rsp+70h] [rbp-31h]
  __int64 v21; // [rsp+78h] [rbp-29h]
  struct _RM_HAM_ACTIVITY_HOST **v22; // [rsp+80h] [rbp-21h]
  __int64 v23; // [rsp+88h] [rbp-19h]
  HANDLE *p_Handle; // [rsp+90h] [rbp-11h]
  __int64 v25; // [rsp+98h] [rbp-9h]
  NTSTATUS *v26; // [rsp+A0h] [rbp-1h]
  __int64 v27; // [rsp+A8h] [rbp+7h]

  v7 = 0LL;
  Handle = 0LL;
  v16 = 0LL;
  v8 = 0;
  v14[0] = 0;
  v11 = RmpSystemOpenProcess(&Handle, 0x1000u, a2);
  if ( v11 >= 0 )
  {
    HostByProcessHandle = RmHamFindHostByProcessHandle(a1, Handle, &v16);
    v7 = v16;
    v11 = HostByProcessHandle;
    if ( HostByProcessHandle >= 0 )
      v11 = 0;
  }
  if ( Handle )
    NtClose(Handle);
  v18 = v11;
  if ( v11 >= 0 )
  {
    HampHostTerminateIfSuspended(v7, v10, a4, v14);
    v8 = v14[0];
  }
  else if ( dword_1800AB2C0 > 4u )
  {
    v17 = a2;
    v20 = &v17;
    v22 = &v16;
    p_Handle = &Handle;
    v26 = &v18;
    v21 = 4LL;
    LODWORD(v16) = 1;
    v23 = 4LL;
    LODWORD(Handle) = a4;
    v25 = 4LL;
    v27 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800984E6, 0LL, 0LL, 6u, &pData);
  }
  if ( a5 )
    *a5 = v8;
  if ( v7 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v7 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v7 - 64));
    RmpReleaseGlobalLock();
  }
}
