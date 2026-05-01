/*
 * XREFs of ?HamSrvLogoffSession@@YAJPEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003E8FC
 * Callers:
 *     HamRpcSrvSessionStateLogoffSession @ 0x18003E8F0 (HamRpcSrvSessionStateLogoffSession.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z @ 0x180014B98 (-HampSessionFindInManager@@YAPEAU_HAM_SESSION@@PEAU_HOST_ACTIVITY_MANAGER@@K@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18003EA78 (-HampSessionLogoff@@YAJPEAU_HAM_SESSION@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvLogoffSession(struct _HAM_CLIENT_CONTEXT *a1, unsigned int a2)
{
  struct _HAM_SESSION *v4; // rax
  struct _HAM_SESSION *v5; // rbx
  int v6; // eax
  DWORD v7; // ebx
  unsigned int v9; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v11[144]; // [rsp+40h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  unsigned int *v13; // [rsp+F0h] [rbp-10h]
  __int64 v14; // [rsp+F8h] [rbp-8h]
  int *v15; // [rsp+100h] [rbp+0h]
  __int64 v16; // [rsp+108h] [rbp+8h]

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800898E9, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v11);
  v4 = HampSessionFindInManager(*(struct _HOST_ACTIVITY_MANAGER **)a1, *((_DWORD *)a1 + 35));
  v5 = v4;
  if ( v4 )
  {
    v6 = HampSessionLogoff(v4, a1, a2);
    if ( v6 >= 0 )
      v6 = 0;
    v9 = v6;
    CemRcObjectDereference(v5);
  }
  else
  {
    v9 = -1073741275;
  }
  v7 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v7, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v14 = 4LL;
    v13 = &v9;
    v10 = *((_DWORD *)a1 + 35);
    v15 = &v10;
    v16 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089D7D, 0LL, 0LL, 4u, &pData);
  }
  return v9;
}
