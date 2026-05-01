/*
 * XREFs of ?HamSrvQueryTaskCompletionsForTerminateGraph@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEA_K@Z @ 0x180074F1C
 * Callers:
 *     HamRpcSrvQueryTaskCompletionsForTerminateGraph @ 0x180079E90 (HamRpcSrvQueryTaskCompletionsForTerminateGraph.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800188A0 (-RmHamFindHostByProcessHandle@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAXPEAPEAU_RM_HAM_ACTIVITY_HOST@@.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x1800199B0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180019A00 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180019A68 (-RmpActivityHostCheckQueueDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800778EC (-HampHostGetTransitiveAppliedTaskCompletions@@YA_KPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

__int64 __fastcall HamSrvQueryTaskCompletionsForTerminateGraph(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        unsigned __int64 *a3)
{
  struct _HOST_ACTIVITY_MANAGER *v6; // rsi
  struct _HOST_ACTIVITY_MANAGER *v7; // rdx
  struct _RM_HAM_ACTIVITY_HOST *v8; // rbx
  int HostByProcessHandle; // eax
  struct _RM_HAM_ACTIVITY_HOST *v10; // rdi
  int v11; // eax
  bool v12; // zf
  DWORD v13; // ebx
  DWORD ProcessId; // eax
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v17; // [rsp+38h] [rbp-C8h] BYREF
  struct _RM_HAM_ACTIVITY_HOST *v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h] BYREF
  unsigned __int64 TransitiveAppliedTaskCompletions; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  char v22[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v23; // [rsp+F0h] [rbp-10h] BYREF
  unsigned int *v24; // [rsp+110h] [rbp+10h]
  int v25; // [rsp+118h] [rbp+18h]
  int v26; // [rsp+11Ch] [rbp+1Ch]
  __int64 *v27; // [rsp+120h] [rbp+20h]
  int v28; // [rsp+128h] [rbp+28h]
  int v29; // [rsp+12Ch] [rbp+2Ch]
  unsigned __int64 *p_TransitiveAppliedTaskCompletions; // [rsp+130h] [rbp+30h]
  int v31; // [rsp+138h] [rbp+38h]
  int v32; // [rsp+13Ch] [rbp+3Ch]
  __int64 *v33; // [rsp+140h] [rbp+40h]
  int v34; // [rsp+148h] [rbp+48h]
  int v35; // [rsp+14Ch] [rbp+4Ch]
  struct _RM_HAM_ACTIVITY_HOST **v36; // [rsp+150h] [rbp+50h]
  int v37; // [rsp+158h] [rbp+58h]
  int v38; // [rsp+15Ch] [rbp+5Ch]
  struct _RM_HAM_ACTIVITY_HOST **v39; // [rsp+160h] [rbp+60h]
  int v40; // [rsp+168h] [rbp+68h]
  int v41; // [rsp+16Ch] [rbp+6Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096F2F, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v22);
  v6 = *a1;
  v7 = a1[21];
  v18 = 0LL;
  v8 = 0LL;
  TransitiveAppliedTaskCompletions = 0LL;
  v21 = -1LL;
  v19 = -1LL;
  v17 = 0LL;
  HostByProcessHandle = RmHamFindHostByProcessHandle(v6, v7, &v18);
  v10 = v18;
  v16 = HostByProcessHandle;
  if ( HostByProcessHandle >= 0 )
  {
    v21 = *((_QWORD *)v18 - 4);
    v11 = RmHamFindHostByProcessHandle(v6, a2, &v17);
    v8 = v17;
    v16 = v11;
    if ( v11 >= 0 )
    {
      v19 = *((_QWORD *)v17 - 4);
      if ( *(_QWORD *)(*((_QWORD *)v17 + 97) + 88LL) == *(_QWORD *)(*((_QWORD *)v10 + 97) + 88LL) )
      {
        v16 = 0;
        TransitiveAppliedTaskCompletions = HampHostGetTransitiveAppliedTaskCompletions(v17);
        *a3 = TransitiveAppliedTaskCompletions;
      }
      else
      {
        v16 = -1073741790;
      }
    }
  }
  if ( v10 )
  {
    RmpAcquireGlobalLock();
    v12 = (*((_QWORD *)v10 + 74))-- == 1LL;
    if ( v12 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v10 - 64));
    RmpReleaseGlobalLock();
  }
  if ( v8 )
  {
    RmpAcquireGlobalLock();
    v12 = (*((_QWORD *)v8 + 74))-- == 1LL;
    if ( v12 )
      RmpActivityHostCheckQueueDelete((struct _RM_HAM_ACTIVITY_HOST *)((char *)v8 - 64));
    RmpReleaseGlobalLock();
  }
  v13 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v13, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v26 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v38 = 0;
    v24 = &v16;
    v27 = &v19;
    p_TransitiveAppliedTaskCompletions = &TransitiveAppliedTaskCompletions;
    v33 = &v21;
    LODWORD(v18) = *((_DWORD *)a1 + 35);
    v36 = &v18;
    v25 = 4;
    v28 = 8;
    v31 = 8;
    v34 = 8;
    v37 = 4;
    ProcessId = GetProcessId(a2);
    v41 = 0;
    LODWORD(v17) = ProcessId;
    v39 = &v17;
    v40 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097159, 0LL, 0LL, 8u, &v23);
  }
  return v16;
}
