/*
 * XREFs of CoreMsgOpenConnection @ 0x1C016555C
 * Callers:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0120954 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     UserCoreMsgOpenConnectionHandle @ 0x1C0130F00 (UserCoreMsgOpenConnectionHandle.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0056EE4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z @ 0x1C0165140 (-TraceOpenConnectionStart@Log@CoreMessagingK@@SAXDPEBUtagMsgRoutingInfo@@@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0166BE8 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3, const GUID *a4)
{
  const GUID *v7; // r9
  unsigned int v8; // ebx
  int v9; // eax
  char v11[8]; // [rsp+30h] [rbp-29h] BYREF
  unsigned int v12; // [rsp+38h] [rbp-21h] BYREF
  void *v13; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  unsigned int *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  void **v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v11[0] = 0;
  CoreMessagingK::Log::TraceOpenConnectionStart(a1, a2, (__int64)a3, a4);
  CoreMessagingK::EntryLock::Acquire(v11, 3u);
  if ( CoreMessagingK::RegistrarClient::s_Port )
  {
    v9 = CoreMessagingK::ServerPorts::OpenConnection(a1, a2, a3);
    v8 = v9;
    if ( !v9 )
    {
      if ( !*a3 )
        v9 = -1073741584;
      v8 = v9;
    }
  }
  else
  {
    v8 = -1073741584;
  }
  v13 = *a3;
  v12 = v8;
  if ( dword_1C019A350 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = &v12;
    v18 = &v13;
    v16 = 4;
    v19 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A2D5, 0LL, v7, 4u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex(Mutex, 0);
  return v8;
}
