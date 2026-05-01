/*
 * XREFs of ?HamSrvDisconnect@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000ED94
 * Callers:
 *     HamRpcSrvConnect @ 0x1800086E0 (HamRpcSrvConnect.c)
 *     HamRpcSrvConnectExtendedExecution @ 0x18000BDF0 (HamRpcSrvConnectExtendedExecution.c)
 *     HamRpcSrvDisconnectServicing @ 0x18003D030 (HamRpcSrvDisconnectServicing.c)
 *     HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18003DBC0 (HAM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown.c)
 *     HamRpcSrvConnectDebugging @ 0x18003FF60 (HamRpcSrvConnectDebugging.c)
 *     HamRpcSrvConnectStateChangeNotifications @ 0x180040060 (HamRpcSrvConnectStateChangeNotifications.c)
 *     HamRpcSrvConnectServicing @ 0x180040160 (HamRpcSrvConnectServicing.c)
 *     HamRpcSrvConnectSessionState @ 0x180040260 (HamRpcSrvConnectSessionState.c)
 *     HamRpcSrvConnectFullTrust @ 0x18006BD50 (HamRpcSrvConnectFullTrust.c)
 * Callees:
 *     ?HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18000BB34 (-HampClientDestroy@@YAXPEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     _TlgWrite @ 0x18000F750 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18000F8CC (_TlgKeywordOn.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x180015B3C (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     __security_check_cookie @ 0x180048190 (__security_check_cookie.c)
 */

void __fastcall HamSrvDisconnect(struct _HAM_CLIENT_CONTEXT *a1)
{
  DWORD v2; // ebx
  _BYTE v3[144]; // [rsp+30h] [rbp-C8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-38h] BYREF

  if ( hProvider > 4u )
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008933C, 0LL, 0LL, 2u, &pData);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v3);
  HampClientDestroy(a1);
  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    if ( *(_QWORD *)TlsGetValue(HampLockTrackerId) )
      __int2c();
    TlsSetValue(v2, 0LL);
  }
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 8uLL) )
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18008A3D9, 0LL, 0LL, 2u, &pData);
  }
}
