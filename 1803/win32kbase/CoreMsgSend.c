/*
 * XREFs of CoreMsgSend @ 0x1C0056AA8
 * Callers:
 *     ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0056990 (-CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0056B58 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0056EE4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgSend(void *a1, __int64 a2, const void *a3, const GUID *a4)
{
  unsigned int v4; // esi
  char v7; // dl
  unsigned int v8; // ebx
  const GUID *v9; // r9
  _BYTE v11[8]; // [rsp+30h] [rbp-29h] BYREF
  char v12; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+50h] [rbp-9h] BYREF
  _QWORD *v15; // [rsp+70h] [rbp+17h]
  int v16; // [rsp+78h] [rbp+1Fh]
  int v17; // [rsp+7Ch] [rbp+23h]
  char *v18; // [rsp+80h] [rbp+27h]
  int v19; // [rsp+88h] [rbp+2Fh]
  int v20; // [rsp+8Ch] [rbp+33h]

  v4 = (unsigned int)a4;
  v11[0] = 0;
  v12 = 0;
  v13[0] = a1;
  if ( dword_1C019A350 > 5u )
  {
    v17 = 0;
    v20 = 0;
    v15 = v13;
    v18 = &v12;
    v16 = 8;
    v19 = 1;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A295, 0LL, a4, 4u, &pData);
  }
  CoreMessagingK::EntryLock::Acquire(v11, 4LL);
  v8 = CoreMessagingK::ServerPorts::Send(a1, v7, a3, v4);
  LODWORD(v13[0]) = v8;
  if ( dword_1C019A350 > 5u )
  {
    v17 = 0;
    v15 = v13;
    v16 = 4;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A26D, 0LL, v9, 3u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex(Mutex, 0);
  return v8;
}
