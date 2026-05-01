/*
 * XREFs of ?HamSrvRemoveDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAX1@Z @ 0x180075194
 * Callers:
 *     HamRpcSrvRemoveDependency @ 0x180079EA0 (HamRpcSrvRemoveDependency.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z @ 0x180078B08 (-HampDepGroupRemoveProcessDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@PEAX1@Z.c)
 */

__int64 __fastcall HamSrvRemoveDependency(struct _HOST_ACTIVITY_MANAGER **a1, void *a2, void *a3)
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

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_18009745D, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v14);
  v6 = HampDepGroupRemoveProcessDependency(*a1, a2, a3);
  if ( v6 >= 0 )
    v6 = 0;
  v10 = v6;
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v7, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v17 = 4LL;
    v16 = &v10;
    v11 = *((_DWORD *)a1 + 35);
    v18 = &v11;
    v19 = 4LL;
    ProcessId = GetProcessId(a2);
    v21 = 4LL;
    v12 = ProcessId;
    v20 = &v12;
    v13 = GetProcessId(a3);
    v22 = &v13;
    v23 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180096E0A, 0LL, 0LL, 6u, &v15);
  }
  return v10;
}
