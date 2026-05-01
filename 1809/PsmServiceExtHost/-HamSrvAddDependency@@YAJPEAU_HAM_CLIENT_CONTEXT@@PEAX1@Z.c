/*
 * XREFs of ?HamSrvAddDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x18000BEE8
 * Callers:
 *     HamRpcSrvAddDependency @ 0x180008A00 (HamRpcSrvAddDependency.c)
 * Callees:
 *     ?HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180008A20 (-HampDepGroupAddProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvAddDependency(struct _HOST_ACTIVITY_MANAGER **a1, void *a2, void *a3)
{
  int v6; // eax
  DWORD v7; // ebx
  DWORD ProcessId; // eax
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  int v11; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v12; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v13; // [rsp+3Ch] [rbp-C4h] BYREF
  char v14[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v15; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v16; // [rsp+F0h] [rbp-10h]
  __int64 v17; // [rsp+F8h] [rbp-8h]
  int *v18; // [rsp+100h] [rbp+0h]
  __int64 v19; // [rsp+108h] [rbp+8h]
  DWORD *v20; // [rsp+110h] [rbp+10h]
  __int64 v21; // [rsp+118h] [rbp+18h]
  DWORD *v22; // [rsp+120h] [rbp+20h]
  __int64 v23; // [rsp+128h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+130h] [rbp+30h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008945C, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v6 = HampDepGroupAddProcessDependency(*a1, a2, a3);
  if ( v6 >= 0 )
    v6 = 0;
  v10 = v6;
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v17 = 4LL;
    v16 = &v10;
    v11 = *((_DWORD *)a1 + 34);
    v18 = &v11;
    v19 = 4LL;
    ProcessId = GetProcessId(a2);
    v21 = 4LL;
    v12 = ProcessId;
    v20 = &v12;
    v13 = GetProcessId(a3);
    v22 = &v13;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089E3D, 0LL, 0LL, 6u, &v15);
  }
  return v10;
}
