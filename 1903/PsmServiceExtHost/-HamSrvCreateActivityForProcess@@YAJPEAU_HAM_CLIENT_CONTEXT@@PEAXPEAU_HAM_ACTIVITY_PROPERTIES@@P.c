/*
 * XREFs of ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180011F4C
 * Callers:
 *     HamRpcSrvCreateActivityForProcess @ 0x180011F40 (HamRpcSrvCreateActivityForProcess.c)
 * Callees:
 *     ?HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001213C (-HampUtilCheckAndSanitizeActivityProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     CemRcObjectDereference @ 0x180012970 (CemRcObjectDereference.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18001A2E4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?HampSrvTraceActivityCreateStart@@YAXXZ @ 0x18001A69C (-HampSrvTraceActivityCreateStart@@YAXXZ.c)
 *     ?RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AACC (-RmHamFindHostWithFullInfo@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_PSM_HOST_INFO@@PEAPEAU_RM_HAM.c)
 *     ?HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOST@@PEAU_HAM_ACTIVITY_PROPERTIES@@KPEAPEAU_HAM_ACTIVITY@@@Z @ 0x18001C890 (-HampActCreate@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAU_HOST_ACTIVITY_MANAGER@@PEAU_RM_HAM_ACTIVITY_HOS.c)
 *     ?HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTIVITY_PROPERTIES@@KKE@Z @ 0x180025FA0 (-HampSrvTraceActivityCreateStop@@YAXJ_KPEAU_HAM_CLIENT_CONTEXT@@PEBGKPEAT_RM_SID@@0PEAU_HAM_ACTI.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180033DD8 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvCreateActivityForProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        HANDLE Process,
        struct _HAM_ACTIVITY_PROPERTIES *a3,
        unsigned __int64 *a4)
{
  unsigned int v4; // esi
  unsigned __int64 v5; // r14
  DWORD ProcessId; // eax
  signed int LastError; // ebx
  int HostWithFullInfo; // eax
  struct _RM_HAM_ACTIVITY_HOST *v13; // rdi
  int v14; // eax
  struct _HAM_ACTIVITY *v15; // rcx
  DWORD v17; // edi
  unsigned int v19; // [rsp+60h] [rbp-A0h]
  struct _RM_HAM_ACTIVITY_HOST *v20; // [rsp+68h] [rbp-98h] BYREF
  struct _HAM_ACTIVITY *v21; // [rsp+70h] [rbp-90h] BYREF
  char v22[8]; // [rsp+78h] [rbp-88h]
  union _RM_SID *v23; // [rsp+80h] [rbp-80h]
  unsigned __int16 *v24; // [rsp+88h] [rbp-78h]
  _BYTE v25[464]; // [rsp+90h] [rbp-70h] BYREF
  char v26; // [rsp+260h] [rbp+160h] BYREF
  unsigned int v27; // [rsp+2A8h] [rbp+1A8h]
  __int64 v28; // [rsp+2B0h] [rbp+1B0h]
  _BYTE v29[144]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v21 = 0LL;
  v4 = 0;
  v20 = 0LL;
  v5 = -1LL;
  v24 = 0LL;
  v19 = 0;
  v23 = 0LL;
  *(_QWORD *)v22 = -1LL;
  HampSrvTraceActivityCreateStart();
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v29);
  if ( !HampUtilCheckAndSanitizeActivityProperties(a3) )
    goto LABEL_19;
  ProcessId = GetProcessId(Process);
  v4 = ProcessId;
  if ( !ProcessId )
  {
    if ( (int)GetLastError() > 0 )
      LastError = (unsigned __int16)GetLastError() | 0xC0070000;
    else
      LastError = GetLastError();
    goto LABEL_14;
  }
  LastError = RmpSystemGetProcessPsmInfo(ProcessId, (struct _RM_PSM_HOST_INFO *)v25);
  if ( LastError < 0 )
    goto LABEL_14;
  v24 = (unsigned __int16 *)v25;
  v19 = v27;
  v23 = (union _RM_SID *)&v26;
  *(_QWORD *)v22 = v28;
  if ( !HampUtilAreActivityPropertiesValid((struct _RM_PSM_HOST_INFO *)v25, a3) )
  {
LABEL_19:
    LastError = -1073741583;
    goto LABEL_14;
  }
  HostWithFullInfo = RmHamFindHostWithFullInfo(*a1, (struct _RM_PSM_HOST_INFO *)v25, &v20);
  v13 = v20;
  LastError = HostWithFullInfo;
  if ( HostWithFullInfo >= 0 )
  {
    v14 = HampActCreate((struct _HAM_CLIENT_CONTEXT *)a1, *a1, v20, a3, 0, &v21);
    v15 = v21;
    LastError = v14;
    if ( v14 >= 0 )
    {
      v5 = *((_QWORD *)v21 + 5);
      LastError = 0;
      *a4 = v5;
    }
    if ( v15 )
      CemRcObjectDereference(v15);
  }
  if ( v13 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v13 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v13 - 64));
    RmpReleaseGlobalLock();
  }
LABEL_14:
  v17 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v17, 0LL);
  }
  HampSrvTraceActivityCreateStop(LastError, v5, (struct _HAM_CLIENT_CONTEXT *)a1, v24, v19, v23, v22[0], a3, v4, 0, 0);
  return (unsigned int)LastError;
}
