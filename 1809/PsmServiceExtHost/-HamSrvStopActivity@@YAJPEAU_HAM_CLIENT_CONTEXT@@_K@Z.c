/*
 * XREFs of ?HamSrvStopActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000DD60
 * Callers:
 *     HamRpcSrvStopActivity @ 0x18000A300 (HamRpcSrvStopActivity.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     ?HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z @ 0x18000A9D4 (-HampActFindForClient@@YAPEAU_HAM_ACTIVITY@@PEAU_HAM_CLIENT_CONTEXT@@_K@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     CempLockTrackerIsSetForThread @ 0x180015B0C (CempLockTrackerIsSetForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x18002BE24 (-HampActStop@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvStopActivity(struct _HAM_CLIENT_CONTEXT *a1, unsigned __int64 a2)
{
  int v3; // ebx
  struct _HAM_ACTIVITY *v4; // rax
  struct _HAM_ACTIVITY *v5; // rdi
  int v6; // eax
  DWORD v7; // ebx
  __int64 v8; // rdx
  unsigned int v10; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v11; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE v12[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v14; // [rsp+F0h] [rbp-10h]
  __int64 v15; // [rsp+F8h] [rbp-8h]
  unsigned __int64 *v16; // [rsp+100h] [rbp+0h]
  __int64 v17; // [rsp+108h] [rbp+8h]

  v11 = a2;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089790, 0LL, 0LL, 2u, &pData);
  if ( (unsigned int)CempLockTrackerIsSetForThread() )
  {
    v3 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v12);
    v3 = 1;
  }
  v4 = HampActFindForClient(a1, v11);
  v5 = v4;
  if ( v4 )
  {
    v6 = HampActStop(v4);
    if ( v6 >= 0 )
      v6 = 0;
    v10 = v6;
    CemRcObjectDereference(v5);
  }
  else
  {
    v10 = -1073741275;
  }
  if ( v3 )
  {
    v7 = HampLockTrackerId;
    if ( HampLockTrackerId != -1 )
    {
      if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
        __int2c();
      TlsSetValue(v7, 0LL);
    }
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v15 = 4LL;
    v14 = &v10;
    v16 = &v11;
    v17 = v8;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800895F2, 0LL, 0LL, 4u, &pData);
  }
  return v10;
}
