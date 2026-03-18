/*
 * XREFs of SetConnectCompletedState @ 0x1C0064750
 * Callers:
 *     xxxRemoteConnect @ 0x1C0063E60 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C003EA50 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C0064798 (PowerConnectionEvent.c)
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
