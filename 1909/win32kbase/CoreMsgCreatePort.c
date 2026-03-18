/*
 * XREFs of CoreMsgCreatePort @ 0x1C009B2A0
 * Callers:
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C009B1DC (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C004B6F0 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C0084244 (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x1C0096B24 (_TlgCreateWsz.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C009B378 (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C009B78C (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     __security_check_cookie @ 0x1C00B7F30 (__security_check_cookie.c)
 */

__int64 __fastcall CoreMsgCreatePort(__int64 a1, void *a2, __int64 a3, void **a4)
{
  char v6; // cl
  const unsigned __int16 *v7; // r8
  int Port; // ebx
  char v10[8]; // [rsp+30h] [rbp-19h] BYREF
  int v11; // [rsp+38h] [rbp-11h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-9h] BYREF
  int *v13; // [rsp+60h] [rbp+17h]
  __int64 v14; // [rsp+68h] [rbp+1Fh]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+70h] [rbp+27h] BYREF

  v10[0] = 0;
  if ( dword_1C020C5E0 > 5u )
  {
    v11 = 0;
    v13 = &v11;
    v14 = 4LL;
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E80EC, 0LL, 0LL, 4u, &pData);
  }
  *a4 = 0LL;
  CoreMessagingK::EntryLock::Acquire(v10, 2u);
  if ( CoreMessagingK::RegistrarClient::s_Port || (Port = CoreMessagingK::RegistrarClient::Connect(), Port >= 0) )
    Port = 0;
  if ( Port >= 0 )
  {
    Port = CoreMessagingK::ServerPorts::CreatePort(v6, a2, v7, a4);
    if ( Port >= 0 )
      Port = 0;
  }
  v11 = Port;
  if ( dword_1C020C5E0 > 5u )
  {
    v14 = 4LL;
    v13 = &v11;
    TlgWrite((TraceLoggingHProvider)&dword_1C020C5E0, &unk_1C01E8028, 0LL, 0LL, 3u, &pData);
  }
  if ( v10[0] )
    KeReleaseMutex(Mutex, 0);
  return (unsigned int)Port;
}
