/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B13C
 * Callers:
 *     HamRpcSrvConnect @ 0x180007F40 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000A3B0 (HamRpcSrvConnectExtendedExecution.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18000B130 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x1800410E0 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectDebugging @ 0x180041200 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectServicing @ 0x180041320 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180041420 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x180079B70 (HamRpcSrvConnectFullTrust.c)
 *     HamRpcSrvDisconnectServicing @ 0x180079CF0 (HamRpcSrvDisconnectServicing.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000B2A8 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001570C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     _TlgWrite @ 0x18002EC10 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18002F81C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180047C10 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  int v2; // edi
  int v3; // esi
  DWORD v4; // ebx
  int v5; // [rsp+38h] [rbp-D0h] BYREF
  int v6; // [rsp+3Ch] [rbp-CCh] BYREF
  int v7; // [rsp+40h] [rbp-C8h] BYREF
  _BYTE v8[144]; // [rsp+48h] [rbp-C0h] BYREF
  EVENT_DATA_DESCRIPTOR v9; // [rsp+D8h] [rbp-30h] BYREF
  int *v10; // [rsp+F8h] [rbp-10h]
  int v11; // [rsp+100h] [rbp-8h]
  int v12; // [rsp+104h] [rbp-4h]
  int *v13; // [rsp+108h] [rbp+0h]
  int v14; // [rsp+110h] [rbp+8h]
  int v15; // [rsp+114h] [rbp+Ch]
  int *v16; // [rsp+118h] [rbp+10h]
  int v17; // [rsp+120h] [rbp+18h]
  int v18; // [rsp+124h] [rbp+1Ch]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+128h] [rbp+20h] BYREF

  if ( dword_1800AB2C0 > 4u )
    TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_1800970AC, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  v2 = *((_DWORD *)a1 + 35);
  v3 = *((_DWORD *)a1 + 37);
  LOBYTE(v5) = *((_BYTE *)a1 + 136);
  HampClientDestroy(a1);
  v4 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v4, 0LL);
  }
  if ( dword_1800AB2C0 > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1800AB2C0, 8uLL) )
    {
      v12 = 0;
      v15 = 0;
      v18 = 0;
      v10 = &v6;
      v13 = &v5;
      v16 = &v7;
      v6 = v2;
      v11 = 4;
      v14 = 1;
      v7 = v3;
      v17 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1800AB2C0, &unk_180097ECB, 0LL, 0LL, 5u, &v9);
    }
  }
}
