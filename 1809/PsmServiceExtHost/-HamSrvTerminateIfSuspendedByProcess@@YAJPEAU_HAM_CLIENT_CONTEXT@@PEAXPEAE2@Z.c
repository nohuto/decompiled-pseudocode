/*
 * XREFs of ?HamSrvTerminateIfSuspendedByProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAE2@Z @ 0x180068544
 * Callers:
 *     HamRpcSrvTerminateIfSuspendedByProcess @ 0x18006BFA0 (HamRpcSrvTerminateIfSuspendedByProcess.c)
 * Callees:
 *     ?HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAE@Z @ 0x180006EDC (-HampManagerTerminateHostIfSuspended@@YAXPEAU_HOST_ACTIVITY_MANAGER@@KW4_HAM_TERMINATE_TYPE@@W4_.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x1800101B0 (-RmpSystemGetProcessPsmInfo@@YAJKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     HamOptInIsPsmKeyEnabledEx @ 0x18003931C (HamOptInIsPsmKeyEnabledEx.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvTerminateIfSuspendedByProcess(
        struct _HOST_ACTIVITY_MANAGER **a1,
        void *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  DWORD ProcessId; // eax
  unsigned int v9; // ebx
  DWORD LastError; // r9d
  signed int IsPsmKeyEnabled; // eax
  __int64 v12; // r8
  unsigned __int8 v13; // al
  DWORD v14; // ebx
  int v15; // edx
  _BYTE v17[4]; // [rsp+30h] [rbp-D0h] BYREF
  int ProcessPsmInfo; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v20[144]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t v21[280]; // [rsp+D0h] [rbp-30h] BYREF
  EVENT_DATA_DESCRIPTOR v22; // [rsp+300h] [rbp+200h] BYREF
  int *p_ProcessPsmInfo; // [rsp+320h] [rbp+220h]
  int v24; // [rsp+328h] [rbp+228h]
  int v25; // [rsp+32Ch] [rbp+22Ch]
  int *v26; // [rsp+330h] [rbp+230h]
  int v27; // [rsp+338h] [rbp+238h]
  int v28; // [rsp+33Ch] [rbp+23Ch]
  unsigned __int8 *v29; // [rsp+340h] [rbp+240h]
  int v30; // [rsp+348h] [rbp+248h]
  int v31; // [rsp+34Ch] [rbp+24Ch]
  _BYTE *v32; // [rsp+350h] [rbp+250h]
  int v33; // [rsp+358h] [rbp+258h]
  int v34; // [rsp+35Ch] [rbp+25Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+360h] [rbp+260h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800890E6, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v20);
  ProcessId = GetProcessId(a2);
  v9 = ProcessId;
  if ( !ProcessId )
  {
    if ( (int)GetLastError() <= 0 )
    {
      LastError = GetLastError();
      goto LABEL_16;
    }
    LOWORD(IsPsmKeyEnabled) = GetLastError();
LABEL_7:
    LastError = (unsigned __int16)IsPsmKeyEnabled | 0xC0070000;
    goto LABEL_16;
  }
  ProcessPsmInfo = RmpSystemGetProcessPsmInfo(ProcessId, v21);
  LastError = ProcessPsmInfo;
  if ( ProcessPsmInfo < 0 )
    goto LABEL_17;
  IsPsmKeyEnabled = HamOptInIsPsmKeyEnabledEx((__int64)v21);
  LastError = IsPsmKeyEnabled;
  if ( !IsPsmKeyEnabled )
  {
    if ( v17[1] )
    {
      HampManagerTerminateHostIfSuspended(*a1, v9, v12, 0x1200u, v17);
      v13 = v17[0];
      *a3 = 1;
      *a4 = v13;
    }
    else
    {
      *a3 = 0;
      *a4 = 0;
    }
    LastError = 0;
    goto LABEL_16;
  }
  if ( IsPsmKeyEnabled > 0 )
    goto LABEL_7;
LABEL_16:
  ProcessPsmInfo = LastError;
LABEL_17:
  v14 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
    LastError = ProcessPsmInfo;
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v25 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    p_ProcessPsmInfo = &ProcessPsmInfo;
    v19 = *((_DWORD *)a1 + 35);
    v26 = &v19;
    v32 = v17;
    v24 = 4;
    v27 = 4;
    v29 = a3;
    v30 = v15 - 7;
    v33 = v15 - 7;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089174, 0LL, 0LL, 6u, &v22);
    return (DWORD)ProcessPsmInfo;
  }
  return LastError;
}
