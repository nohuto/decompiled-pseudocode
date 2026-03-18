/*
 * XREFs of CoreMsgCreatePort @ 0x1C01652B4
 * Callers:
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0120A58 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 * Callees:
 *     _TlgWrite @ 0x1C00407C4 (_TlgWrite.c)
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0056EE4 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     ?TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z @ 0x1C0164FD8 (-TraceCreatePortStart@Log@CoreMessagingK@@SAXDPEBG@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C016579C (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C01665E0 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 */

__int64 __fastcall CoreMsgCreatePort(__int64 a1, unsigned __int16 *a2, __int64 a3, void **a4)
{
  char v6; // cl
  const unsigned __int16 *v7; // r8
  const GUID *v8; // r9
  int Port; // ebx
  char v11[8]; // [rsp+30h] [rbp-68h] BYREF
  int v12; // [rsp+38h] [rbp-60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v14; // [rsp+60h] [rbp-38h]
  __int64 v15; // [rsp+68h] [rbp-30h]

  v11[0] = 0;
  CoreMessagingK::Log::TraceCreatePortStart(a1, a2);
  *a4 = 0LL;
  CoreMessagingK::EntryLock::Acquire(v11, 2u);
  if ( CoreMessagingK::RegistrarClient::s_Port || (Port = CoreMessagingK::RegistrarClient::Connect(), Port >= 0) )
    Port = 0;
  if ( Port >= 0 )
  {
    Port = CoreMessagingK::ServerPorts::CreatePort(v6, a2, v7, a4);
    if ( Port >= 0 )
      Port = 0;
  }
  v12 = Port;
  if ( dword_1C019A350 > 5u )
  {
    v15 = 4LL;
    v14 = &v12;
    TlgWrite((TraceLoggingHProvider)&dword_1C019A350, &unk_1C017A38E, 0LL, v8, 3u, &pData);
  }
  if ( v11[0] )
    KeReleaseMutex(Mutex, 0);
  return (unsigned int)Port;
}
