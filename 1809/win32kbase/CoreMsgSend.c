/*
 * XREFs of CoreMsgSend @ 0x1C0036690
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0036744 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0036B10 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, __int64 a2, const void *a3, unsigned int a4)
{
  char v7; // dl
  unsigned int v8; // ebx
  _BYTE v10[8]; // [rsp+30h] [rbp-29h] BYREF
  char v11; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v12[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v14; // [rsp+70h] [rbp+17h]
  int v15; // [rsp+78h] [rbp+1Fh]
  int v16; // [rsp+7Ch] [rbp+23h]
  char *v17; // [rsp+80h] [rbp+27h]
  int v18; // [rsp+88h] [rbp+2Fh]
  int v19; // [rsp+8Ch] [rbp+33h]

  v10[0] = 0;
  v11 = 0;
  v12[0] = a1;
  if ( dword_1C01C77B8 > 5u )
  {
    v16 = 0;
    v19 = 0;
    v14 = v12;
    v17 = &v11;
    v15 = 8;
    v18 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A318C, 0LL, 0LL, 4u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v10, 4LL);
  v8 = CoreMessagingK::ServerPorts::Send(a1, v7, a3, a4);
  LODWORD(v12[0]) = v8;
  if ( dword_1C01C77B8 > 5u )
  {
    v16 = 0;
    v14 = v12;
    v15 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A3120, 0LL, 0LL, 3u, &pData);
  }
  if ( v10[0] )
    KeReleaseMutex(P, 0);
  return v8;
}
