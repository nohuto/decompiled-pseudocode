/*
 * XREFs of CoreMsgCreatePort @ 0x1C0083ED4
 * Callers:
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0083E10 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 * Callees:
 *     ?Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z @ 0x1C0036B10 (-Acquire@EntryLock@CoreMessagingK@@QEAAXW4BugCheckCodes@2@@Z.c)
 *     _TlgWrite @ 0x1C003A4A8 (_TlgWrite.c)
 *     ?CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z @ 0x1C0083FAC (-CreatePort@ServerPorts@CoreMessagingK@@SAJDQEAXPEBGPEAPEAX@Z.c)
 *     ?Connect@RegistrarClient@CoreMessagingK@@CAJXZ @ 0x1C0084774 (-Connect@RegistrarClient@CoreMessagingK@@CAJXZ.c)
 *     _TlgCreateWsz @ 0x1C0086014 (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
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
  if ( dword_1C01C77B8 > 5u )
  {
    v11 = 0;
    v13 = &v11;
    v14 = 4LL;
    TlgCreateWsz(&pDesc, L"Kernel\\MIT\\InputPort");
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A3290, 0LL, 0LL, 4u, &pData);
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
  if ( dword_1C01C77B8 > 5u )
  {
    v14 = 4LL;
    v13 = &v11;
    TlgWrite((TraceLoggingHProvider)&dword_1C01C77B8, &unk_1C01A31CC, 0LL, 0LL, 3u, &pData);
  }
  if ( v10[0] )
    KeReleaseMutex(P, 0);
  return (unsigned int)Port;
}
