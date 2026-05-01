/*
 * XREFs of ?HamSrvLogoffUser@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAEKK@Z @ 0x1800673EC
 * Callers:
 *     HamRpcSrvSessionStateLogoffUser @ 0x18006BF80 (HamRpcSrvSessionStateLogoffUser.c)
 * Callees:
 *     CemRcObjectDereference @ 0x180008620 (CemRcObjectDereference.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgCreateSid @ 0x180017BB0 (_TlgCreateSid.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z @ 0x18006CE9C (-HampUserFindInManager@@YAPEAU_HAM_USER@@PEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@@Z.c)
 *     ?HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z @ 0x18006CEEC (-HampUserLogoff@@YAJPEAU_HAM_USER@@PEAU_HAM_CLIENT_CONTEXT@@K@Z.c)
 *     CempUtilValidateAndCaptureSid @ 0x1800710D4 (CempUtilValidateAndCaptureSid.c)
 */

__int64 __fastcall HamSrvLogoffUser(struct _HAM_CLIENT_CONTEXT *a1, SID *a2, __int64 a3, unsigned int a4)
{
  struct _HAM_USER *v7; // rax
  struct _HAM_USER *v8; // rbx
  int v9; // eax
  DWORD v10; // ebx
  int v12; // [rsp+30h] [rbp-D0h] BYREF
  int v13; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE v14[80]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[144]; // [rsp+90h] [rbp-70h] BYREF
  EVENT_DATA_DESCRIPTOR v16; // [rsp+120h] [rbp+20h] BYREF
  int *v17; // [rsp+140h] [rbp+40h]
  __int64 v18; // [rsp+148h] [rbp+48h]
  int *v19; // [rsp+150h] [rbp+50h]
  __int64 v20; // [rsp+158h] [rbp+58h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF

  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v15);
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800894DB, 0LL, 0LL, 2u, &pData);
  v12 = CempUtilValidateAndCaptureSid(a2);
  if ( v12 >= 0 )
  {
    v7 = HampUserFindInManager(*(struct _HOST_ACTIVITY_MANAGER **)a1, *((_DWORD *)a1 + 35), (union _RM_SID *)v14);
    v8 = v7;
    if ( v7 )
    {
      v9 = HampUserLogoff(v7, a1, a4);
      if ( v9 >= 0 )
        v9 = 0;
      v12 = v9;
      CemRcObjectDereference(v8);
    }
    else
    {
      v12 = -1058275321;
    }
  }
  v10 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v10, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v18 = 4LL;
    v17 = &v12;
    v13 = *((_DWORD *)a1 + 35);
    v19 = &v13;
    v20 = 4LL;
    TlgCreateSid(&pDesc, a2);
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089CB6, 0LL, 0LL, 5u, &v16);
  }
  return (unsigned int)v12;
}
