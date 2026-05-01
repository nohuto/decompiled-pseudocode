/*
 * XREFs of ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180068774
 * Callers:
 *     HamRpcSrvTerminateSelf @ 0x18006C040 (HamRpcSrvTerminateSelf.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180010D4C (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x180011F90 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180011FDC (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180012A60 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18002C430 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateSelf(struct _HAM_CLIENT_CONTEXT *a1)
{
  void *v2; // rdx
  struct _HOST_ACTIVITY_MANAGER *v3; // rcx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v5; // rbx
  int v7; // edx
  DWORD v8; // ebx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v11; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v12; // [rsp+40h] [rbp-C0h] BYREF
  char v13[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v14; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v15; // [rsp+100h] [rbp+0h]
  int v16; // [rsp+108h] [rbp+8h]
  int v17; // [rsp+10Ch] [rbp+Ch]
  struct _RM_HAM_ACTIVITY_HOST **v18; // [rsp+110h] [rbp+10h]
  int v19; // [rsp+118h] [rbp+18h]
  int v20; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v21; // [rsp+120h] [rbp+20h]
  int v22; // [rsp+128h] [rbp+28h]
  int v23; // [rsp+12Ch] [rbp+2Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A7ED, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v2 = (void *)*((_QWORD *)a1 + 19);
  v3 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v11 = 0LL;
  v12 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v3, v2, &v11);
  v5 = v11;
  v10 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v12 = *((_QWORD *)v11 - 4);
    HampHostQueueTerminateEx(v11, 1u, 0x1700u, (__int64)a1, 0, 0);
    v10 = 0;
  }
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v5 + 72))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v5 - 64));
    RmpReleaseGlobalLock();
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v10;
    LODWORD(v11) = *((_DWORD *)a1 + 34);
    v18 = &v11;
    v21 = &v12;
    v16 = 4;
    v19 = 4;
    v22 = v7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A32B, 0LL, 0LL, 5u, &v14);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  return v10;
}
