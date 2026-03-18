/*
 * XREFs of CoreMsgOpenConnection @ 0x1C0084BE0
 * Callers:
 *     ?CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRoutingInfo@@@Z @ 0x1C0084AC4 (-CoreMsgOpenDestinationHandle@InputExtensibilityCallout@@QEAAJW4_MIT_ENDPOINT@@AEBUtagMsgRouting.c)
 *     UserCoreMsgOpenConnectionHandle @ 0x1C0152E20 (UserCoreMsgOpenConnectionHandle.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0036B10 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0084CB4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgOpenConnection(char a1, const struct tagMsgRoutingInfo *a2, void **a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  char v9[8]; // [rsp+30h] [rbp-69h] BYREF
  unsigned int v10; // [rsp+38h] [rbp-61h] BYREF
  void *v11; // [rsp+40h] [rbp-59h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-49h] BYREF
  unsigned int *v13; // [rsp+70h] [rbp-29h]
  int v14; // [rsp+78h] [rbp-21h]
  int v15; // [rsp+7Ch] [rbp-1Dh]
  void **v16; // [rsp+80h] [rbp-19h]
  int v17; // [rsp+88h] [rbp-11h]
  int v18; // [rsp+8Ch] [rbp-Dh]
  char *v19; // [rsp+90h] [rbp-9h]
  int v20; // [rsp+98h] [rbp-1h]
  int v21; // [rsp+9Ch] [rbp+3h]
  char *v22; // [rsp+A0h] [rbp+7h]
  int v23; // [rsp+A8h] [rbp+Fh]
  int v24; // [rsp+ACh] [rbp+13h]
  char *v25; // [rsp+B0h] [rbp+17h]
  int v26; // [rsp+B8h] [rbp+1Fh]
  int v27; // [rsp+BCh] [rbp+23h]

  v9[0] = 0;
  if ( dword_1C01C77B8 > 5u )
  {
    v15 = 0;
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v10 = a1;
    v13 = &v10;
    v19 = (char *)a2 + 4;
    v22 = (char *)a2 + 8;
    v25 = (char *)a2 + 24;
    v14 = 4;
    v16 = (void **)a2;
    v17 = 4;
    v20 = 4;
    v23 = 8;
    v26 = 16;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A31FA, 0LL, 0LL, 7u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v9, 3u);
  if ( CoreMessagingK::RegistrarClient::s_Port )
  {
    v6 = CoreMessagingK::ServerPorts::OpenConnection(a1, a2, a3);
    v7 = v6;
    if ( !v6 )
    {
      if ( !*a3 )
        v6 = -1073741584;
      v7 = v6;
    }
  }
  else
  {
    v7 = -1073741584;
  }
  v11 = *a3;
  v10 = v7;
  if ( dword_1C01C77B8 > 5u )
  {
    v15 = 0;
    v18 = 0;
    v13 = &v10;
    v16 = &v11;
    v14 = 4;
    v17 = 8;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A3148, 0LL, 0LL, 4u, &pData);
  }
  if ( v9[0] )
    KeReleaseMutex(P, 0);
  return v7;
}
