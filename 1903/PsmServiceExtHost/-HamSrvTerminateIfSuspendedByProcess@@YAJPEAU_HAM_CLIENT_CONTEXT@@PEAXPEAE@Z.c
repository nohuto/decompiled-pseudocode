/*
 * XREFs of ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE@Z @ 0x180075D10
 * Callers:
 *     HamRpcSrvTerminateIfSuspendedByProcess @ 0x180079E40 (HamRpcSrvTerminateIfSuspendedByProcess.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180033DD8 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180076C64 (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 */

__int64 __fastcall HamSrvTerminateIfSuspendedByProcess(struct _HAM_CLIENT_CONTEXT *a1, void *a2, unsigned __int8 *a3)
{
  DWORD ProcessId; // eax
  DWORD v7; // ebx
  unsigned int LastError; // r9d
  __int64 v9; // r8
  DWORD v10; // ebx
  _BYTE v12[4]; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v15[144]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v16[280]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v17; // [rsp+300h] [rbp+200h] BYREF
  int *p_ProcessPsmInfo; // [rsp+320h] [rbp+220h]
  int v19; // [rsp+328h] [rbp+228h]
  int v20; // [rsp+32Ch] [rbp+22Ch]
  int *v21; // [rsp+330h] [rbp+230h]
  int v22; // [rsp+338h] [rbp+238h]
  int v23; // [rsp+33Ch] [rbp+23Ch]
  _BYTE *v24; // [rsp+340h] [rbp+240h]
  int v25; // [rsp+348h] [rbp+248h]
  int v26; // [rsp+34Ch] [rbp+24Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+350h] [rbp+250h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800975E3, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  ProcessId = GetProcessId(a2);
  v7 = ProcessId;
  if ( ProcessId )
  {
    ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, v16);
    LastError = ProcessPsmInfo;
    if ( ProcessPsmInfo < 0 )
      goto LABEL_10;
    HampManagerTerminateHostIfSuspended(*(_QWORD *)a1, v7, v9, 4608LL, v12);
    LastError = 0;
    *a3 = v12[0];
  }
  else if ( (int)GetLastError() > 0 )
  {
    LastError = (unsigned __int16)GetLastError() | 0xC0070000;
  }
  else
  {
    LastError = GetLastError();
  }
  ProcessPsmInfo = LastError;
LABEL_10:
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v10, 0LL);
    LastError = ProcessPsmInfo;
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v20 = 0;
    v23 = 0;
    v26 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v14 = *((_DWORD *)a1 + 36);
    v21 = &v14;
    v24 = v12;
    v19 = 4;
    v22 = 4;
    v25 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800974A6, 0LL, 0LL, 5u, &v17);
    return (unsigned int)ProcessPsmInfo;
  }
  return LastError;
}
