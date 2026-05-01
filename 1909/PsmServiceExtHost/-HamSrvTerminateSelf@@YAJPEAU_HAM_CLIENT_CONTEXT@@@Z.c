/*
 * XREFs of ?HamSrvTerminateSelf@@YAJPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x180076258
 * Callers:
 *     HamRpcSrvTerminateSelf @ 0x180079EC0 (HamRpcSrvTerminateSelf.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x18000D29C (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
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

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180098387, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v13);
  v2 = (void *)*((_QWORD *)a1 + 21);
  v3 = *(struct _HOST_ACTIVITY_MANAGER **)a1;
  v11 = 0LL;
  v12 = -1LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v3, v2, &v11);
  v5 = v11;
  v10 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v12 = *((_QWORD *)v11 - 4);
    HampHostQueueTerminateEx((__int64)v11, 1u, 5888, (__int64)a1, 0, 0);
    v10 = 0;
  }
  if ( v5 )
  {
    RmpAcquireGlobalLock();
    if ( (*((_QWORD *)v5 + 74))-- == 1LL )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v5 - 64));
    RmpReleaseGlobalLock();
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    v15 = &v10;
    LODWORD(v11) = *((_DWORD *)a1 + 35);
    v18 = &v11;
    v21 = &v12;
    v16 = 4;
    v19 = 4;
    v22 = v7;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097DD5, 0LL, 0LL, 5u, &v14);
  }
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v8, 0LL);
  }
  return v10;
}
