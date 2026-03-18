/*
 * XREFs of SetConnectCompletedState @ 0x1C0048FF0
 * Callers:
 *     xxxRemoteConnect @ 0x1C0098740 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C0047D00 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C0049038 (PowerConnectionEvent.c)
 */

void __fastcall SetConnectCompletedState(int a1)
{
  PVOID v1; // rax

  gbConnectCompleted = a1;
  if ( !gServiceSessionId )
  {
    PowerConnectionEvent();
    if ( (int)IsDwmAsyncNotifySessionConnectedSupported() >= 0 )
    {
      v1 = ReferenceDwmApiPort();
      DwmAsyncNotifySessionConnected(v1);
    }
  }
}
