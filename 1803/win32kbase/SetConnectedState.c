/*
 * XREFs of SetConnectedState @ 0x1C00A15B0
 * Callers:
 *     <none>
 * Callees:
 *     PowerConnectionEvent @ 0x1C00A456C (PowerConnectionEvent.c)
 */

__int64 __fastcall SetConnectedState(int a1, int a2)
{
  __int64 result; // rax

  gbConnected = a1;
  if ( a2 != gbConnectCompleted )
  {
    gbConnectCompleted = a2;
    return PowerConnectionEvent();
  }
  return result;
}
