/*
 * XREFs of ?HamSrvRemoveHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1@Z @ 0x180075324
 * Callers:
 *     HamRpcSrvRemoveHostDependency @ 0x180079EB0 (HamRpcSrvRemoveHostDependency.c)
 * Callees:
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 *     ?HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z @ 0x180078924 (-HampDepGroupRemoveDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1@Z.c)
 */

__int64 __fastcall HamSrvRemoveHostDependency(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  int v4; // eax
  DWORD v5; // ebx
  __int64 v6; // rdx
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  int v9; // [rsp+34h] [rbp-CCh] BYREF
  unsigned __int64 v10; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp-C0h] BYREF
  char v12[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v13; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v14; // [rsp+100h] [rbp+0h]
  __int64 v15; // [rsp+108h] [rbp+8h]
  int *v16; // [rsp+110h] [rbp+10h]
  __int64 v17; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v18; // [rsp+120h] [rbp+20h]
  __int64 v19; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v20; // [rsp+130h] [rbp+30h]
  __int64 v21; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v10 = a2;
  v11 = a3;
  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097CF7, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
  v4 = HampDepGroupRemoveDynamicDependency(*a1, v10, v11);
  if ( v4 >= 0 )
    v4 = 0;
  v8 = v4;
  v5 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      NT_ASSERT("CurrentTracker->Bitmap == 0");
    TlsSetValue(v5, 0LL);
  }
  if ( dword_1800AB2C0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
  {
    v15 = 4LL;
    v14 = &v8;
    v9 = *((_DWORD *)a1 + 35);
    v16 = &v9;
    v18 = &v10;
    v20 = &v11;
    v17 = 4LL;
    v19 = v6;
    v21 = v6;
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800971F5, 0LL, 0LL, 6u, &v13);
  }
  return v8;
}
