/*
 * XREFs of SetConnectCompletedState @ 0x1C00A1570
 * Callers:
 *     xxxRemoteConnect @ 0x1C00A1760 (xxxRemoteConnect.c)
 * Callees:
 *     ReferenceDwmApiPort @ 0x1C005C820 (ReferenceDwmApiPort.c)
 *     PowerConnectionEvent @ 0x1C00A456C (PowerConnectionEvent.c)
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
