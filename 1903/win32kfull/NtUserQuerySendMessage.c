/*
 * XREFs of NtUserQuerySendMessage @ 0x1C02333A0
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0166840 (memset.c)
 *     _QuerySendMessage @ 0x1C020CFC8 (_QuerySendMessage.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4E10 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_BOOL8 __fastcall NtUserQuerySendMessage(_OWORD *a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  __int64 v4; // rcx
  BOOL SendMessage; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF

  memset(v7, 0, 0x30uLL);
  v2 = EnterSharedCrit(0LL, 1LL);
  MicrosoftTelemetryAssertTriggeredNoArgsKM(v3);
  if ( *(_QWORD *)(v2 + 504) )
  {
    SendMessage = QuerySendMessage(v2, (__int64)v7);
    if ( SendMessage && a1 )
    {
      v4 = *((_QWORD *)&v7[1] + 1);
      if ( *((_QWORD *)&v7[1] + 1) > MmUserProbeAddress )
        v4 = 0LL;
      *((_QWORD *)&v7[1] + 1) = v4;
      HIDWORD(v7[0]) = 0;
      HIDWORD(v7[2]) = 0;
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (_OWORD *)MmUserProbeAddress;
      *a1 = v7[0];
      a1[1] = v7[1];
      a1[2] = v7[2];
    }
  }
  else
  {
    SendMessage = 0;
  }
  UserSessionSwitchLeaveCrit(v4);
  return SendMessage;
}
