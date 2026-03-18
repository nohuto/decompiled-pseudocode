/*
 * XREFs of SetConnectCompletedState @ 0x1C00633D0
 * Callers:
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 * Callees:
 *     PowerConnectionEvent @ 0x1C00629D0 (PowerConnectionEvent.c)
 *     ReferenceDwmApiPort @ 0x1C0063FD0 (ReferenceDwmApiPort.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  __int64 v1; // rax

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent(a1);
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported() >= 0 )
    {
      v1 = ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected(v1);
    }
  }
}
