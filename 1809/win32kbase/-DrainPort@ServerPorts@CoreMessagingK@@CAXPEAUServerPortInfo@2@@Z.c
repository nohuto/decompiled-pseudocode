/*
 * XREFs of ?DrainPort@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@@Z @ 0x1C0084EF4
 * Callers:
 *     ?CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z @ 0x1C0084120 (-CreateAlpcPort@ServerPorts@CoreMessagingK@@CAJQEAXPEAU_UNICODE_STRING@@PEAUServerPortInfo@2@@Z.c)
 *     ?PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z @ 0x1C0084A60 (-PortSignaledCallback@ServerPorts@CoreMessagingK@@CAXPEAX00@Z.c)
 *     ?OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z @ 0x1C0084CB4 (-OpenConnection@ServerPorts@CoreMessagingK@@SAJDPEBUtagMsgRoutingInfo@@PEAPEAX@Z.c)
 * Callees:
 *     ?HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2@@Z @ 0x1C0085180 (-HandleClientDisconnect@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAUClientPortInfo@2.c)
 *     ?HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@@Z @ 0x1C00852CC (-HandleConnectionRequest@ServerPorts@CoreMessagingK@@CAXPEAUServerPortInfo@2@PEAU_PORT_MESSAGE@@.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     ?BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z @ 0x1C0185620 (-BugCheck@Runtime@CoreMessagingK@@SAXW4BugCheckCodes@2@_K11@Z.c)
 */

void __fastcall CoreMessagingK::ServerPorts::DrainPort(struct CoreMessagingK::ServerPortInfo *a1)
{
  int v2; // eax
  int v3; // eax
  struct CoreMessagingK::ClientPortInfo **v4; // rax
  __int64 MessageAttribute; // rax
  __int64 v6; // [rsp+28h] [rbp-E0h]
  __int64 v7; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v8; // [rsp+50h] [rbp-B8h] BYREF
  _BYTE v9[48]; // [rsp+58h] [rbp-B0h] BYREF
  _PORT_MESSAGE v10; // [rsp+88h] [rbp-80h] BYREF

  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v8 = 512LL;
        v7 = 40LL;
        v2 = AlpcInitializeMessageAttribute(0x20000000LL, v9, 40LL, &v7, v6);
        if ( v2 < 0 )
          CoreMessagingK::Runtime::BugCheck(1537LL, v2, 0LL);
        v3 = ZwAlpcSendWaitReceivePort(*((_QWORD *)a1 + 1), 0LL, 0LL, 0LL, &v10, &v8, v9, 0LL);
        if ( v3 != -1073741789 )
          break;
LABEL_15:
        MessageAttribute = AlpcGetMessageAttribute(v9, 0x20000000LL);
        ZwAlpcCancelMessage(*((_QWORD *)a1 + 1), 0LL, MessageAttribute);
      }
      if ( v3 != -1073741769 )
      {
        if ( v3 <= -1073740033 )
          goto LABEL_16;
        if ( v3 > -1073740031 )
          break;
      }
    }
    if ( v3 )
      break;
    if ( LOBYTE(v10.u2.ZeroInit) < 5u )
    {
LABEL_14:
      if ( (v10.u2.s2.Type & 0x2000) != 0 )
        goto LABEL_15;
    }
    else if ( LOBYTE(v10.u2.ZeroInit) <= 6u )
    {
      v4 = (struct CoreMessagingK::ClientPortInfo **)AlpcGetMessageAttribute(v9, 0x20000000LL);
      CoreMessagingK::ServerPorts::HandleClientDisconnect(a1, *v4);
    }
    else
    {
      if ( LOBYTE(v10.u2.ZeroInit) != 10 )
        goto LABEL_14;
      CoreMessagingK::ServerPorts::HandleConnectionRequest(a1, &v10);
    }
  }
  if ( v3 != 258 )
LABEL_16:
    CoreMessagingK::Runtime::BugCheck(1538LL, v3, 0LL);
}
