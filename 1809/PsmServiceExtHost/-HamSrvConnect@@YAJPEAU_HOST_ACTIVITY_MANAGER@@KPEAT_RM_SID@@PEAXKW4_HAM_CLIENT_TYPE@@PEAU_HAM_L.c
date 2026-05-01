/*
 * XREFs of ?HamSrvConnect@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000F5B0
 * Callers:
 *     HamRpcSrvConnect @ 0x1800086E0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000BDF0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvConnectDebugging @ 0x18003FF60 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180040060 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectServicing @ 0x180040160 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180040260 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x18006BD50 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     ?HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HAM_LOCAL_CALLBACKS@@2PEAPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000F994 (-HampClientCreate@@YAJPEAU_HOST_ACTIVITY_MANAGER@@KPEAT_RM_SID@@PEAXKW4_HAM_CLIENT_TYPE@@PEAU_HA.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

__int64 __fastcall HamSrvConnect(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v13; // eax
  DWORD v14; // ebx
  char v16; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v17; // [rsp+54h] [rbp-ACh] BYREF
  unsigned int v18; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v19[144]; // [rsp+60h] [rbp-A0h] BYREF
  EVENT_DATA_DESCRIPTOR v20; // [rsp+F0h] [rbp-10h] BYREF
  int *v21; // [rsp+110h] [rbp+10h]
  int v22; // [rsp+118h] [rbp+18h]
  int v23; // [rsp+11Ch] [rbp+1Ch]
  char *v24; // [rsp+120h] [rbp+20h]
  int v25; // [rsp+128h] [rbp+28h]
  int v26; // [rsp+12Ch] [rbp+2Ch]
  unsigned int *v27; // [rsp+130h] [rbp+30h]
  int v28; // [rsp+138h] [rbp+38h]
  int v29; // [rsp+13Ch] [rbp+3Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A5BA, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v19);
  v13 = HampClientCreate(a1, a2, a3, a4, a5, a6, 0LL, 0LL, a9);
  v14 = HampLockTrackerId;
  v17 = v13;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v14, 0LL);
  }
  if ( hProvider > 4u && (byte_18009B100 & 8) != 0 && (qword_18009B108 & 8) == qword_18009B108 )
  {
    v23 = 0;
    v26 = 0;
    v29 = 0;
    v21 = (int *)&v18;
    v24 = &v16;
    v27 = &v17;
    v18 = a2;
    v22 = 4;
    v16 = a6;
    v25 = 1;
    v28 = 4;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180089DBB, 0LL, 0LL, 5u, &v20);
  }
  return v17;
}
