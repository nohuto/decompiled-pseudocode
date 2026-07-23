/*
 * XREFs of PopInvokeWin32Callout @ 0x1406A2EE4
 * Callers:
 *     PopGetConsoleDisplayRequestCount @ 0x1400EE61C (PopGetConsoleDisplayRequestCount.c)
 *     PopEventCalloutDispatch @ 0x140181C8C (PopEventCalloutDispatch.c)
 *     PoSessionBuiltinPanelState @ 0x140303CE0 (PoSessionBuiltinPanelState.c)
 *     PoSessionEngagementUpdate @ 0x140303D6C (PoSessionEngagementUpdate.c)
 *     PopDispatchStateCallout @ 0x1406A39E4 (PopDispatchStateCallout.c)
 *     PopNotifyConsoleUserPresent @ 0x14071E580 (PopNotifyConsoleUserPresent.c)
 *     PopNotifySessionDisplayRequired @ 0x14071E6C0 (PopNotifySessionDisplayRequired.c)
 *     PopControlMonitor @ 0x140729A70 (PopControlMonitor.c)
 *     PopBroadcastSessionInfo @ 0x14075AE8C (PopBroadcastSessionInfo.c)
 *     PopNotifyCsStateExited @ 0x1408ABBB0 (PopNotifyCsStateExited.c)
 *     PoSessionPowerControl @ 0x1408B6360 (PoSessionPowerControl.c)
 *     PopSendSessionInfo @ 0x1408B6404 (PopSendSessionInfo.c)
 * Callees:
 *     PsGetHostSilo @ 0x140015A00 (PsGetHostSilo.c)
 *     MmGetSessionId @ 0x14001D490 (MmGetSessionId.c)
 *     MmGetNextSession @ 0x14008B870 (MmGetNextSession.c)
 *     ZwPowerInformation @ 0x1401C0CB0 (ZwPowerInformation.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     PsInvokeWin32Callout @ 0x1405EB440 (PsInvokeWin32Callout.c)
 */

__int64 __fastcall PopInvokeWin32Callout(int a1, __int64 a2, int a3, int *a4)
{
  char v6; // si
  unsigned int v7; // r14d
  _QWORD *NextSession; // rdi
  int v9; // r14d
  int *p_SessionId; // r15
  int v12; // [rsp+38h] [rbp-49h]
  int SessionId; // [rsp+3Ch] [rbp-45h] BYREF
  __int64 OutputBuffer; // [rsp+40h] [rbp-41h] BYREF
  _QWORD InputBuffer[18]; // [rsp+48h] [rbp-39h] BYREF

  SessionId = 0;
  v12 = 0;
  OutputBuffer = 0LL;
  v6 = 0;
  v7 = 0;
  memset((char *)InputBuffer + 4, 0, 0x5CuLL);
  LODWORD(InputBuffer[0]) = 21;
  if ( ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, &OutputBuffer, 8u) < 0 )
    return v7;
  NextSession = (_QWORD *)MmGetNextSession(0LL);
  do
  {
    if ( !NextSession || *(_QWORD *)(NextSession[128] + 1328LL) == PsGetHostSilo() )
    {
      if ( a3 == 2 && NextSession )
      {
        v9 = 1;
        SessionId = MmGetSessionId((__int64)NextSession);
        p_SessionId = &SessionId;
        NextSession = (_QWORD *)MmGetNextSession(NextSession);
        if ( !NextSession )
          v6 = 1;
      }
      else
      {
        v6 = 1;
        v9 = a3;
        p_SessionId = a4;
        if ( a4 )
          v12 = *a4;
        else
          v12 = -1;
      }
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        LODWORD(InputBuffer[3]) = 417;
        LODWORD(InputBuffer[2]) = 1000 * PopWin32kCalloutWatchdogTimeoutSeconds;
        HIDWORD(InputBuffer[2]) = v12;
        InputBuffer[4] = KeGetCurrentThread();
        InputBuffer[10] = InputBuffer;
        InputBuffer[9] = PopWin32CalloutWatchdogCallbackLiveDump;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
      v7 = PsInvokeWin32Callout(a1, a2, v9, (__int64)p_SessionId);
      if ( OutputBuffer )
      {
        memset(InputBuffer, 0, 0x60uLL);
        LODWORD(InputBuffer[0]) = 21;
        InputBuffer[1] = OutputBuffer;
        ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
      }
    }
    else
    {
      if ( a3 == 2 )
      {
        NextSession = (_QWORD *)MmGetNextSession(NextSession);
        if ( NextSession )
          continue;
      }
      else
      {
        v7 = -1073741811;
      }
      v6 = 1;
    }
  }
  while ( !v6 );
  if ( OutputBuffer )
  {
    memset(InputBuffer, 0, 0x60uLL);
    LODWORD(InputBuffer[0]) = 21;
    InputBuffer[1] = OutputBuffer;
    LOBYTE(InputBuffer[11]) = 1;
    ZwPowerInformation(PowerInformationInternal, InputBuffer, 0x60u, 0LL, 0);
  }
  return v7;
}
