/*
 * XREFs of ?HamSrvAddHostDependency@@YAJPEAU_HAM_CLIENT_CONTEXT@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18000C07C
 * Callers:
 *     HamRpcSrvAddHostDependency @ 0x180008A10 (HamRpcSrvAddHostDependency.c)
 * Callees:
 *     ?HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x180008D40 (-HampDepGroupAddDynamicDependency@@YAJPEAU_HOST_ACTIVITY_MANAGER@@_K1PEAU_HAM_ACTIVITY_PROPERTIE.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 *     ?HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006D094 (-HampHostDepValidateCustomProperties@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 */

__int64 __fastcall HamSrvAddHostDependency(
        struct _HOST_ACTIVITY_MANAGER **a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        struct _HAM_ACTIVITY_PROPERTIES *a4)
{
  int v6; // esi
  int v7; // eax
  DWORD v8; // ebx
  __int64 cData; // rdx
  bool v11; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v12; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+38h] [rbp-C8h] BYREF
  int v14; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned __int64 v15; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int64 v16; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v17[144]; // [rsp+50h] [rbp-B0h] BYREF
  EVENT_DATA_DESCRIPTOR v18; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int *v19; // [rsp+100h] [rbp+0h]
  __int64 v20; // [rsp+108h] [rbp+8h]
  int *v21; // [rsp+110h] [rbp+10h]
  __int64 v22; // [rsp+118h] [rbp+18h]
  unsigned __int64 *v23; // [rsp+120h] [rbp+20h]
  __int64 v24; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v25; // [rsp+130h] [rbp+30h]
  __int64 v26; // [rsp+138h] [rbp+38h]
  bool *v27; // [rsp+140h] [rbp+40h]
  __int64 v28; // [rsp+148h] [rbp+48h]
  int *v29; // [rsp+150h] [rbp+50h]
  __int64 v30; // [rsp+158h] [rbp+58h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+160h] [rbp+60h] BYREF

  v15 = a2;
  v16 = a3;
  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A447, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v17);
  if ( a4 )
  {
    v6 = *(_DWORD *)a4;
    if ( !HampHostDepValidateCustomProperties(a4) )
    {
      v12 = -1073741582;
      goto LABEL_8;
    }
  }
  else
  {
    v6 = 0;
  }
  v7 = HampDepGroupAddDynamicDependency(*a1, v15, v16, a4);
  if ( v7 >= 0 )
    v7 = 0;
  v12 = v7;
LABEL_8:
  v8 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v8, 0LL);
  }
  if ( hProvider > 4u && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
  {
    v20 = 4LL;
    v19 = &v12;
    v13 = *((_DWORD *)a1 + 34);
    v11 = a4 != 0LL;
    v22 = 4LL;
    v21 = &v13;
    v23 = &v15;
    v25 = &v16;
    v27 = &v11;
    v29 = &v14;
    v24 = cData;
    v26 = cData;
    v28 = 1LL;
    v14 = v6;
    v30 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089A28, 0LL, 0LL, cData, &v18);
  }
  return v12;
}
